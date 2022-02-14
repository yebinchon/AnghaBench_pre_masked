
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double REAL ;
typedef int INT ;
typedef int * HDC ;
typedef int GpStatus ;
typedef int GpGraphics ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,double,double,double,double,scalar_t__*) ;
 int FUNC_3 (int *,int ,int ,int ,int ,scalar_t__*) ;
 int FUNC_4 (int *,int,int,int,int,int ) ;
 int FUNC_5 (int *,int,int,int ) ;
 int * FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int ,int ) ;
 int VAR_6 ;
 int FUNC_9 (int,char*,...) ;

__attribute__((used)) static void FUNC_10(void)
{
    GpStatus VAR_7;
    GpGraphics *VAR_8 = ((void*)0);
    HDC VAR_9 = FUNC_6( VAR_6 );
    REAL VAR_10, VAR_11, VAR_12, VAR_13;
    BOOL VAR_14;

    FUNC_9(VAR_9 != ((void*)0), "Expected HDC to be initialized\n");

    VAR_7 = FUNC_0(VAR_9, &VAR_8);
    FUNC_8(VAR_4, VAR_7);
    FUNC_9(VAR_8 != ((void*)0), "Expected graphics to be initialized\n");

    VAR_7 = FUNC_2(((void*)0), 0, 0, 0, 0, &VAR_14);
    FUNC_8(VAR_2, VAR_7);

    VAR_7 = FUNC_2(VAR_8, 0, 0, 0, 0, ((void*)0));
    FUNC_8(VAR_2, VAR_7);

    VAR_7 = FUNC_3(((void*)0), 0, 0, 0, 0, &VAR_14);
    FUNC_8(VAR_2, VAR_7);

    VAR_7 = FUNC_3(VAR_8, 0, 0, 0, 0, ((void*)0));
    FUNC_8(VAR_2, VAR_7);


    VAR_10 = 0; VAR_12 = 10;
    VAR_11 = 0; VAR_13 = 10;
    VAR_7 = FUNC_2(VAR_8, VAR_10, VAR_11, VAR_12, VAR_13, &VAR_14);
    FUNC_8(VAR_4, VAR_7);
    FUNC_9(VAR_14 == VAR_5, "Expected (%.2f, %.2f, %.2f, %.2f) to be visible\n", VAR_10, VAR_11, VAR_12, VAR_13);


    VAR_10 = -10; VAR_12 = 20;
    VAR_11 = -10; VAR_13 = 20;
    VAR_7 = FUNC_2(VAR_8, VAR_10, VAR_11, VAR_12, VAR_13, &VAR_14);
    FUNC_8(VAR_4, VAR_7);
    FUNC_9(VAR_14 == VAR_5, "Expected (%.2f, %.2f, %.2f, %.2f) to be visible\n", VAR_10, VAR_11, VAR_12, VAR_13);


    VAR_10 = -10; VAR_12 = 5;
    VAR_11 = -10; VAR_13 = 5;
    VAR_7 = FUNC_2(VAR_8, VAR_10, VAR_11, VAR_12, VAR_13, &VAR_14);
    FUNC_8(VAR_4, VAR_7);
    FUNC_9(VAR_14 == VAR_1, "Expected (%.2f, %.2f, %.2f, %.2f) not to be visible\n", VAR_10, VAR_11, VAR_12, VAR_13);

    VAR_7 = FUNC_4(VAR_8, 10, 20, 30, 40, VAR_0);
    FUNC_8(VAR_4, VAR_7);


    VAR_10 = 12; VAR_12 = 10;
    VAR_11 = 22; VAR_13 = 10;
    VAR_7 = FUNC_2(VAR_8, VAR_10, VAR_11, VAR_12, VAR_13, &VAR_14);
    FUNC_8(VAR_4, VAR_7);
    FUNC_9(VAR_14 == VAR_5, "Expected (%.2f, %.2f, %.2f, %.2f) to be visible\n", VAR_10, VAR_11, VAR_12, VAR_13);


    VAR_10 = 35; VAR_12 = 10;
    VAR_11 = 55; VAR_13 = 10;
    VAR_7 = FUNC_2(VAR_8, VAR_10, VAR_11, VAR_12, VAR_13, &VAR_14);
    FUNC_8(VAR_4, VAR_7);
    FUNC_9(VAR_14 == VAR_5, "Expected (%.2f, %.2f, %.2f, %.2f) to be visible\n", VAR_10, VAR_11, VAR_12, VAR_13);


    VAR_10 = 45; VAR_12 = 5;
    VAR_11 = 65; VAR_13 = 5;
    VAR_7 = FUNC_2(VAR_8, VAR_10, VAR_11, VAR_12, VAR_13, &VAR_14);
    FUNC_8(VAR_4, VAR_7);
    FUNC_9(VAR_14 == VAR_1, "Expected (%.2f, %.2f, %.2f, %.2f) not to be visible\n", VAR_10, VAR_11, VAR_12, VAR_13);


    FUNC_5(VAR_8, 25, 40, VAR_3);

    VAR_10 = 0; VAR_12 = 10;
    VAR_11 = 0; VAR_13 = 10;
    VAR_7 = FUNC_2(VAR_8, VAR_10, VAR_11, VAR_12, VAR_13, &VAR_14);
    FUNC_8(VAR_4, VAR_7);
    FUNC_9(VAR_14 == VAR_5, "Expected (%.2f, %.2f, %.2f, %.2f) to be visible\n", VAR_10, VAR_11, VAR_12, VAR_13);

    VAR_10 = 25; VAR_12 = 5;
    VAR_11 = 40; VAR_13 = 5;
    VAR_7 = FUNC_2(VAR_8, VAR_10, VAR_11, VAR_12, VAR_13, &VAR_14);
    FUNC_8(VAR_4, VAR_7);
    FUNC_9(VAR_14 == VAR_1, "Expected (%.2f, %.2f, %.2f, %.2f) not to be visible\n", VAR_10, VAR_11, VAR_12, VAR_13);

    FUNC_5(VAR_8, -25, -40, VAR_3);


    VAR_10 = 0; VAR_12 = 70;
    VAR_11 = 0; VAR_13 = 90;
    VAR_7 = FUNC_2(VAR_8, VAR_10, VAR_11, VAR_12, VAR_13, &VAR_14);
    FUNC_8(VAR_4, VAR_7);
    FUNC_9(VAR_14 == VAR_5, "Expected (%.2f, %.2f, %.2f, %.2f) to be visible\n", VAR_10, VAR_11, VAR_12, VAR_13);

    VAR_10 = 0; VAR_12 = 70;
    VAR_11 = 0; VAR_13 = 30;
    VAR_7 = FUNC_2(VAR_8, VAR_10, VAR_11, VAR_12, VAR_13, &VAR_14);
    FUNC_8(VAR_4, VAR_7);
    FUNC_9(VAR_14 == VAR_5, "Expected (%.2f, %.2f, %.2f, %.2f) to be visible\n", VAR_10, VAR_11, VAR_12, VAR_13);

    VAR_10 = 0; VAR_12 = 30;
    VAR_11 = 0; VAR_13 = 90;
    VAR_7 = FUNC_2(VAR_8, VAR_10, VAR_11, VAR_12, VAR_13, &VAR_14);
    FUNC_8(VAR_4, VAR_7);
    FUNC_9(VAR_14 == VAR_5, "Expected (%.2f, %.2f, %.2f, %.2f) to be visible\n", VAR_10, VAR_11, VAR_12, VAR_13);


    VAR_10 = 0; VAR_12 = 10;
    VAR_11 = 20; VAR_13 = 40;
    VAR_7 = FUNC_2(VAR_8, VAR_10, VAR_11, VAR_12, VAR_13, &VAR_14);
    FUNC_8(VAR_4, VAR_7);
    FUNC_9(VAR_14 == VAR_1, "Expected (%.2f, %.2f, %.2f, %.2f) not to be visible\n", VAR_10, VAR_11, VAR_12, VAR_13);

    VAR_10 = 10; VAR_12 = 30;
    VAR_11 = 0; VAR_13 = 20;
    VAR_7 = FUNC_2(VAR_8, VAR_10, VAR_11, VAR_12, VAR_13, &VAR_14);
    FUNC_8(VAR_4, VAR_7);
    FUNC_9(VAR_14 == VAR_1, "Expected (%.2f, %.2f, %.2f, %.2f) not to be visible\n", VAR_10, VAR_11, VAR_12, VAR_13);

    VAR_10 = 40; VAR_12 = 10;
    VAR_11 = 20; VAR_13 = 40;
    VAR_7 = FUNC_2(VAR_8, VAR_10, VAR_11, VAR_12, VAR_13, &VAR_14);
    FUNC_8(VAR_4, VAR_7);
    FUNC_9(VAR_14 == VAR_1, "Expected (%.2f, %.2f, %.2f, %.2f) not to be visible\n", VAR_10, VAR_11, VAR_12, VAR_13);

    VAR_10 = 10; VAR_12 = 30;
    VAR_11 = 60; VAR_13 = 10;
    VAR_7 = FUNC_2(VAR_8, VAR_10, VAR_11, VAR_12, VAR_13, &VAR_14);
    FUNC_8(VAR_4, VAR_7);
    FUNC_9(VAR_14 == VAR_1, "Expected (%.2f, %.2f, %.2f, %.2f) not to be visible\n", VAR_10, VAR_11, VAR_12, VAR_13);


    VAR_10 = 0.4; VAR_12 = 10.4;
    VAR_11 = 20; VAR_13 = 40;
    VAR_7 = FUNC_2(VAR_8, VAR_10, VAR_11, VAR_12, VAR_13, &VAR_14);
    FUNC_8(VAR_4, VAR_7);
    FUNC_9(VAR_14 == VAR_5, "Expected (%.2f, %.2f, %.2f, %.2f) to be visible\n", VAR_10, VAR_11, VAR_12, VAR_13);

    VAR_10 = 10; VAR_12 = 30;
    VAR_11 = 0.4; VAR_13 = 20.4;
    VAR_7 = FUNC_2(VAR_8, VAR_10, VAR_11, VAR_12, VAR_13, &VAR_14);
    FUNC_8(VAR_4, VAR_7);
    FUNC_9(VAR_14 == VAR_5, "Expected (%.2f, %.2f, %.2f, %.2f) to be visible\n", VAR_10, VAR_11, VAR_12, VAR_13);


    VAR_10 = 0; VAR_12 = 30;
    VAR_11 = 0; VAR_13 = 90;
    VAR_7 = FUNC_3(VAR_8, (INT)VAR_10, (INT)VAR_11, (INT)VAR_12, (INT)VAR_13, &VAR_14);
    FUNC_8(VAR_4, VAR_7);
    FUNC_9(VAR_14 == VAR_5, "Expected (%.2f, %.2f, %.2f, %.2f) to be visible\n", VAR_10, VAR_11, VAR_12, VAR_13);

    VAR_10 = 12; VAR_12 = 10;
    VAR_11 = 22; VAR_13 = 10;
    VAR_7 = FUNC_3(VAR_8, (INT)VAR_10, (INT)VAR_11, (INT)VAR_12, (INT)VAR_13, &VAR_14);
    FUNC_8(VAR_4, VAR_7);
    FUNC_9(VAR_14 == VAR_5, "Expected (%.2f, %.2f, %.2f, %.2f) to be visible\n", VAR_10, VAR_11, VAR_12, VAR_13);

    FUNC_1(VAR_8);
    FUNC_7(VAR_6, VAR_9);
}
