
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG_PTR ;
typedef int * HRGN ;
typedef int * HDC ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *,int,int) ;
 int VAR_5 ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int,int,int *) ;
 int FUNC_11 (int *,int,int,int *) ;
 int VAR_6 ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (int,int) ;

void FUNC_14()
{
    HDC VAR_7;
    HRGN VAR_8, VAR_9;


    VAR_7 = FUNC_0(((void*)0));
    FUNC_12(VAR_7 != 0, "CreateCompatibleDC failed, skipping tests.\n");
    if (!VAR_7) return;

    VAR_9 = FUNC_1(0, 0, 0, 0);


    FUNC_8(0x12345);
    FUNC_13(FUNC_6(((void*)0), 0, 0), VAR_1);
    FUNC_13(FUNC_4(), VAR_2);


    FUNC_8(0x12345);
    FUNC_13(FUNC_6((HDC)(ULONG_PTR)0x12345, 0, 0), VAR_1);
    FUNC_12((FUNC_4() == 0x12345) || (FUNC_4() == VAR_2), "Expected 0x12345 or ERROR_INVALID_HANDLE, got %ld\n", FUNC_4());
    FUNC_8(0x12345);


    FUNC_8(0x12345);
    FUNC_13(FUNC_7(VAR_7, ((void*)0)), VAR_5);
    FUNC_13(FUNC_6(VAR_7, 0, 0), VAR_5);
    FUNC_13(FUNC_4(), 0x12345);
    FUNC_8(0x12345);


    VAR_8 = FUNC_1(10, 10, 20, 30);
    FUNC_13(FUNC_7(VAR_7, VAR_8), VAR_4);
    FUNC_2(VAR_8);
    FUNC_13(FUNC_6(VAR_7, 10, 10), VAR_5);
    FUNC_13(FUNC_5(VAR_7, VAR_9, VAR_0), 1);
    VAR_8 = FUNC_1(20, 20, 30, 40);
    FUNC_13(FUNC_3(VAR_8, VAR_9), VAR_6);


    FUNC_9(VAR_7, VAR_3);
    FUNC_13(FUNC_10(VAR_7, 100, 100, ((void*)0)), 1);
    FUNC_13(FUNC_11(VAR_7, 200, 50, ((void*)0)), 1);
    FUNC_13(FUNC_6(VAR_7, 10, 10), VAR_5);
    FUNC_13(FUNC_5(VAR_7, VAR_9, VAR_0), 1);
    VAR_8 = FUNC_1(25, 40, 35, 60);
    FUNC_13(FUNC_3(VAR_8, VAR_9), VAR_6);
    FUNC_13(FUNC_4(), 0x12345);

}
