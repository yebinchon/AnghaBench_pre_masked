
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HRGN ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int ) ;
 int * FUNC_1 (int,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int * FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int ,int ) ;

void FUNC_8()
{
    HRGN VAR_5, VAR_6, VAR_7;

    VAR_5 = FUNC_1(0, 0, 0, 0);
    VAR_6 = FUNC_1(0, 0, 10, 10);
    VAR_7 = FUNC_1(5, 5, 20, 20);

    FUNC_5(0xbadbabe);
    FUNC_7(FUNC_0(((void*)0), ((void*)0), ((void*)0), VAR_3), VAR_1);
    FUNC_7(FUNC_0(((void*)0), VAR_5, ((void*)0), VAR_3), VAR_1);
    FUNC_7(FUNC_0(((void*)0), ((void*)0), VAR_5, VAR_3), VAR_1);
    FUNC_7(FUNC_0(((void*)0), VAR_5, VAR_6, VAR_3), VAR_1);
    FUNC_6((FUNC_3() == 0xbadbabe) || (FUNC_3() == VAR_2), "wrong error: %ld\n", FUNC_3());

    FUNC_7(FUNC_0(VAR_5, VAR_6, VAR_7, VAR_3), VAR_4);
    FUNC_6(FUNC_2(VAR_5, VAR_6), "Region is not correct\n");

    FUNC_7(FUNC_0(VAR_5, VAR_5, ((void*)0), VAR_3), VAR_4);
    FUNC_6(FUNC_2(VAR_5, VAR_6), "Region is not correct\n");

    FUNC_7(FUNC_0(VAR_5, VAR_7, FUNC_4(VAR_0), VAR_3), VAR_4);
    FUNC_6(FUNC_2(VAR_5, VAR_7), "Region is not correct\n");

    FUNC_7(FUNC_0(VAR_5, FUNC_4(VAR_0), VAR_6, VAR_3), VAR_1);
    FUNC_6(FUNC_2(VAR_5, VAR_7), "Region is not correct\n");

    FUNC_7(FUNC_0(VAR_5, ((void*)0), VAR_6, VAR_3), VAR_1);
    FUNC_6(FUNC_2(VAR_5, VAR_7), "Region is not correct\n");

    FUNC_7(FUNC_0(VAR_5, ((void*)0), ((void*)0), VAR_3), VAR_1);
    FUNC_6(FUNC_2(VAR_5, VAR_7), "Region is not correct\n");

    FUNC_6((FUNC_3() == 0xbadbabe) || (FUNC_3() == VAR_2), "wrong error: %ld\n", FUNC_3());

}
