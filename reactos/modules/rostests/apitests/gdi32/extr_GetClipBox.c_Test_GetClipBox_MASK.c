
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RECT ;
typedef int * HWND ;
typedef int * HRGN ;
typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *,int ) ;
 int * FUNC_1 (int,int,int,int) ;
 int * FUNC_2 (char*,char*,int,int ,int ,int,int,int *,int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int *,int ) ;
 int VAR_8 ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int,int,int *) ;
 int FUNC_14 (int ,int,int,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_15 (int,char*,...) ;
 int FUNC_16 (int,int) ;
 int FUNC_17 (int *,int,int,int,int) ;

void FUNC_18()
{
    HWND VAR_11;
    HDC VAR_12;
    RECT VAR_13;
    HRGN VAR_14, VAR_15;
    int VAR_16;


    VAR_11 = FUNC_2(L"BUTTON", L"TestWindow", VAR_9 | VAR_10,
                        VAR_1, VAR_1, 100, 100,
                        ((void*)0), ((void*)0), 0, 0);
    FUNC_15(VAR_11 != ((void*)0), "CreateWindowW failed\n");
    if (VAR_11 == ((void*)0))
    {
        return;
    }

    VAR_12 = FUNC_6(VAR_11);


    FUNC_10(VAR_4);
    VAR_16 = FUNC_5((HDC)0x12345, &VAR_13);
    FUNC_15(VAR_16 == VAR_2, "Expected ERROR, got %d\n", VAR_16);
    FUNC_15((FUNC_7() == 0) || (FUNC_7() == VAR_3), "Expected 0, got %ld\n", FUNC_7());






    VAR_14 = FUNC_1(5, 7, 50, 50);
    FUNC_9(VAR_12, VAR_14);
    FUNC_3(VAR_14);
    VAR_16 = FUNC_5(VAR_12, &VAR_13);
    FUNC_16(VAR_16, VAR_8);
    FUNC_17(&VAR_13, 5, 7, 50, 50);


    FUNC_12(VAR_12);


    VAR_14 = FUNC_1(10, 10, 100, 100);
    FUNC_9(VAR_12, VAR_14);
    FUNC_3(VAR_14);
    VAR_16 = FUNC_5(VAR_12, &VAR_13);
    FUNC_16(VAR_16, VAR_8);
    FUNC_17(&VAR_13, 10, 10, 50, 50);


    VAR_14 = FUNC_1(10, 10, 10, 30);
    FUNC_9(VAR_12, VAR_14);
    FUNC_3(VAR_14);
    VAR_16 = FUNC_5(VAR_12, &VAR_13);
    FUNC_16(VAR_16, VAR_6);
    FUNC_17(&VAR_13, 0, 0, 0, 0);


    VAR_14 = FUNC_1(10, 10, 30, 30);
    VAR_15 = FUNC_1(20, 20, 60, 60);
    FUNC_16(FUNC_0(VAR_14, VAR_14, VAR_15, VAR_7), VAR_0);
    FUNC_9(VAR_12, VAR_14);
    FUNC_3(VAR_15);
    VAR_16 = FUNC_5(VAR_12, &VAR_13);
    FUNC_16(VAR_16, VAR_0);
    FUNC_17(&VAR_13, 10, 10, 50, 50);


    FUNC_16(FUNC_13(VAR_12, 1000, 1000, ((void*)0)), 1);
    VAR_16 = FUNC_5(VAR_12, &VAR_13);
    FUNC_16(VAR_16, VAR_0);
    FUNC_17(&VAR_13, 10, 10, 50, 50);


    FUNC_16(FUNC_11(VAR_12, VAR_5), 1);
    VAR_16 = FUNC_5(VAR_12, &VAR_13);
    FUNC_16(VAR_16, VAR_0);
    FUNC_17(&VAR_13, 10, 10, 50, 50);


    FUNC_16(FUNC_13(VAR_12, 200, 400, ((void*)0)), 1);
    VAR_16 = FUNC_5(VAR_12, &VAR_13);
    FUNC_16(VAR_16, VAR_0);
    FUNC_17(&VAR_13, 0, 0, 0, 0);


    FUNC_9(VAR_12, ((void*)0));
    FUNC_12(VAR_12);
    VAR_16 = FUNC_5(VAR_12, &VAR_13);
    FUNC_16(VAR_16, VAR_8);
    FUNC_17(&VAR_13, 0, 0, 0, 0);

    VAR_14 = FUNC_1(10, 10, 190, 190);
    FUNC_9(VAR_12, VAR_14);
    VAR_16 = FUNC_5(VAR_12, &VAR_13);
    FUNC_16(VAR_16, VAR_8);
    FUNC_17(&VAR_13, 0, 0, 0, 0);


    FUNC_16(FUNC_14(VAR_12, 400, 600, ((void*)0)), 1);
    VAR_16 = FUNC_5(VAR_12, &VAR_13);
    FUNC_16(VAR_16, VAR_8);
    FUNC_17(&VAR_13, 20, 15, 100, 75);

    VAR_14 = FUNC_1(30, 30, 300, 300);
    FUNC_9(VAR_12, VAR_14);
    FUNC_12(VAR_12);
    VAR_16 = FUNC_5(VAR_12, &VAR_13);
    FUNC_16(VAR_16, VAR_8);
    FUNC_17(&VAR_13, 60, 45, 100, 75);

    FUNC_8(VAR_11, VAR_12);
    FUNC_4(VAR_11);
}
