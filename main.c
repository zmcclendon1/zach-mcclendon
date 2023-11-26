#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //speed math game

    int answer1 = 20;
    int answer2 = 13;
    int answer3 = 1;
    int answer4 = 22;
    int answer5 = 31;
    int answer6 = 35;
    int answer7 = 13;

    int userInput;


    clock_t start, end;
    double time_spent;


    printf("Welcome to speed math\n");
    printf("10 + 10 = ");
    scanf("%d", &userInput);
    start = clock();
    if (userInput != answer1) {
        printf("WRONG!");
    } else {
        printf("5 + 8 = ");
        scanf("%d", &userInput);
        if (userInput != answer2) {
            printf("WRONG");
       } else {

            printf("7 - 6 = ");
            scanf("%d", &userInput);
            if (userInput != answer3) {
                printf("WRONG");

        } else {
            printf("2 + 20 = ");
            scanf("%d", &userInput);
            if (userInput != answer4) {
                printf("WRONG");
        } else {
            printf("34 - 3 = ");
            scanf("%d", &userInput);
            if (userInput != answer5) {
                printf("WRONG");
        } else {
            printf("15 + 20 = ");
            scanf("%d", &userInput);
            if (userInput != answer6) {
                printf("WRONG");

        } else {
            printf("6 + 7 = ");
            scanf("%d", &userInput);
            if (userInput != answer7) {
                printf("WRONG");
        } else {
            end = clock();

            time_spent = (double)(end - start) / CLOCKS_PER_SEC;

            printf("Your Time %f\n", time_spent);
        }
    }
                    }
                }
            }



        }




   return 0;
    }


}
