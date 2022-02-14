
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HRGN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *,int ) ;
 int * FUNC_1 (int,int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int * FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (int ,int ) ;

void FUNC_7()
{
    HRGN VAR_7, VAR_8, VAR_9;

    VAR_7 = FUNC_1(0, 0, 0, 0);
    VAR_8 = FUNC_1(0, 0, 10, 10);
    VAR_9 = FUNC_1(5, 0, 10, 5);

    FUNC_4(0xbadbabe);
    FUNC_6(FUNC_0(((void*)0), ((void*)0), ((void*)0), VAR_5), VAR_2);
    FUNC_6(FUNC_0(VAR_7, ((void*)0), ((void*)0), VAR_5), VAR_2);
    FUNC_6(FUNC_0(VAR_7, VAR_8, ((void*)0), VAR_5), VAR_2);
    FUNC_6(FUNC_0(VAR_7, ((void*)0), VAR_8, VAR_5), VAR_2);
    FUNC_6(FUNC_0(VAR_7, FUNC_3(VAR_0), VAR_8, VAR_5), VAR_2);
    FUNC_6(FUNC_0(VAR_7, VAR_8, FUNC_3(VAR_0), VAR_5), VAR_2);
    FUNC_5((FUNC_2() == 0xbadbabe) || (FUNC_2() == VAR_3), "wrong error: %ld\n", FUNC_2());

    FUNC_6(FUNC_0(VAR_7, VAR_7, VAR_7, VAR_5), VAR_4);
    FUNC_6(FUNC_0(VAR_7, VAR_8, VAR_8, VAR_5), VAR_4);
    FUNC_6(FUNC_0(VAR_7, VAR_7, VAR_8, VAR_5), VAR_4);

    FUNC_6(FUNC_0(VAR_7, VAR_8, VAR_7, VAR_5), VAR_6);
    FUNC_6(FUNC_0(VAR_7, VAR_8, VAR_9, VAR_5), VAR_1);
    FUNC_6(FUNC_0(VAR_7, VAR_7, VAR_9, VAR_5), VAR_1);
    FUNC_6(FUNC_0(VAR_7, VAR_7, VAR_8, VAR_5), VAR_4);


}
