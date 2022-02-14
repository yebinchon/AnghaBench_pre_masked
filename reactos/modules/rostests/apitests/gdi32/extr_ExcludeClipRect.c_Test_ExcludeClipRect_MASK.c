
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG_PTR ;
typedef int * HRGN ;
typedef int * HDC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *,int ) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int,int,int,int) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int,int,int,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int) ;
 int VAR_8 ;
 int FUNC_10 (int,char*) ;
 int FUNC_11 (int ,int) ;

void FUNC_12()
{
    HDC VAR_9;
    HRGN VAR_10, VAR_11;

    VAR_9 = FUNC_1(((void*)0));
    FUNC_10(VAR_9 != 0, "CreateCompatibleDC failed, skipping tests.\n");
    if (!VAR_9) return;

    VAR_11 = FUNC_2(0, 0, 0, 0);


    FUNC_9(0x12345);
    FUNC_11(FUNC_5(((void*)0), 0, 0, 0, 0), VAR_2);
    FUNC_11(FUNC_6(), VAR_3);


    FUNC_9(0x12345);
    FUNC_11(FUNC_5((HDC)(ULONG_PTR)0x12345, 0, 0, 0, 0), VAR_2);
    FUNC_11(FUNC_6(), VAR_3);
    FUNC_9(0x12345);


    VAR_10 = FUNC_2(10, 10, 20, 30);
    FUNC_11(FUNC_8(VAR_9, VAR_10), VAR_4);
    FUNC_11(FUNC_7(VAR_9, VAR_11, VAR_0), 1);
    FUNC_11(FUNC_4(VAR_10, VAR_11), VAR_8);


    FUNC_11(FUNC_5(VAR_9, 0, 0, 1, 1), VAR_1);
    FUNC_11(FUNC_7(VAR_9, VAR_11, VAR_0), 1);
    FUNC_11(FUNC_4(VAR_10, VAR_11), VAR_8);


    FUNC_11(FUNC_5(VAR_9, 0, 0, 13, 50), VAR_1);
    FUNC_11(FUNC_7(VAR_9, VAR_11, VAR_0), 1);
    FUNC_11(FUNC_0(VAR_10, VAR_11, ((void*)0), VAR_5), VAR_7);


    FUNC_11(FUNC_5(VAR_9, 0, 0, 15, 15), VAR_1);
    FUNC_11(FUNC_7(VAR_9, VAR_11, VAR_0), 1);
    FUNC_11(FUNC_0(VAR_10, VAR_11, ((void*)0), VAR_5), VAR_1);


    FUNC_11(FUNC_5(VAR_9, 0, 0, 100, 100), VAR_4);
    FUNC_11(FUNC_7(VAR_9, VAR_11, VAR_0), 1);
    FUNC_11(FUNC_0(VAR_10, VAR_11, ((void*)0), VAR_5), VAR_4);


    FUNC_11(FUNC_8(VAR_9, ((void*)0)), VAR_7);
    FUNC_11(FUNC_7(VAR_9, VAR_11, VAR_0), 0);
    FUNC_11(FUNC_5(VAR_9, 0, 0, 1, 1), VAR_4);
    FUNC_11(FUNC_7(VAR_9, VAR_11, VAR_0), 1);
    FUNC_11(FUNC_0(VAR_10, VAR_11, ((void*)0), VAR_5), VAR_4);


    FUNC_11(FUNC_8(VAR_9, ((void*)0)), VAR_7);
    FUNC_11(FUNC_5(VAR_9, -10, -10, 0, 0), VAR_1);
    FUNC_11(FUNC_7(VAR_9, VAR_11, VAR_0), 1);
    VAR_10 = FUNC_2(0, 0, 1, 1);
    FUNC_11(FUNC_0(VAR_11, VAR_11, VAR_10, VAR_6), VAR_4);


    FUNC_11(FUNC_8(VAR_9, ((void*)0)), VAR_7);
    FUNC_11(FUNC_5(VAR_9, 100000, 100000, 100010, 100010), VAR_1);
    FUNC_11(FUNC_7(VAR_9, VAR_11, VAR_0), 1);
    VAR_10 = FUNC_2(0, 0, 1, 1);
    FUNC_11(FUNC_4(VAR_10, VAR_11), VAR_8);
    FUNC_3(VAR_10);


    FUNC_11(FUNC_8(VAR_9, ((void*)0)), VAR_7);
    FUNC_11(FUNC_5(VAR_9, 1, 1, -10, -20), VAR_4);
    FUNC_11(FUNC_7(VAR_9, VAR_11, VAR_0), 1);
    VAR_10 = FUNC_2(0, 0, 0, 0);
    FUNC_11(FUNC_0(VAR_10, VAR_11, ((void*)0), VAR_5), VAR_4);

    FUNC_11(FUNC_6(), 0x12345);

}
