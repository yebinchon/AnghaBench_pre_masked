
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HRGN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *,int ) ;
 int * FUNC_1 (int,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int * FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int ,int ) ;

void FUNC_8()
{
    HRGN VAR_8, VAR_9, VAR_10, VAR_11;

    VAR_8 = FUNC_1(0, 0, 0, 0);
    VAR_9 = FUNC_1(0, 0, 5, 5);
    VAR_10 = FUNC_1(5, 5, 10, 10);
    VAR_11 = FUNC_1(0, 0, 0, 0);

    FUNC_5(0xbadbabe);
    FUNC_7(FUNC_0(((void*)0), ((void*)0), ((void*)0), VAR_6), VAR_2);
    FUNC_7(FUNC_0(VAR_8, ((void*)0), ((void*)0), VAR_6), VAR_2);
    FUNC_7(FUNC_0(VAR_8, VAR_9, ((void*)0), VAR_6), VAR_2);
    FUNC_7(FUNC_0(VAR_8, ((void*)0), VAR_9, VAR_6), VAR_2);
    FUNC_7(FUNC_0(VAR_8, FUNC_4(VAR_0), VAR_9, VAR_6), VAR_2);
    FUNC_7(FUNC_0(VAR_8, VAR_9, FUNC_4(VAR_0), VAR_6), VAR_2);
    FUNC_6((FUNC_3() == 0xbadbabe) || (FUNC_3() == VAR_3), "wrong error: %ld\n", FUNC_3());

    FUNC_7(FUNC_0(VAR_8, VAR_9, VAR_10, VAR_6), VAR_1);
    FUNC_7(FUNC_0(VAR_11, VAR_9, VAR_10, VAR_5), VAR_1);
    FUNC_6(FUNC_2(VAR_8, VAR_11), "Region is not correct\n");

    FUNC_7(FUNC_0(VAR_8, VAR_8, VAR_9, VAR_6), VAR_7);
    FUNC_6(FUNC_2(VAR_8, VAR_10), "Region is not correct\n");
    FUNC_7(FUNC_0(VAR_8, VAR_8, VAR_10, VAR_6), VAR_4);


}
