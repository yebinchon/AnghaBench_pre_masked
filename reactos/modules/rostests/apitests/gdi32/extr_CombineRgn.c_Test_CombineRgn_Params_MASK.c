
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HRGN ;


 int FUNC_0 (int *,int *,int *,int) ;
 int * FUNC_1 (int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int ,int ) ;

void FUNC_6()
{
    HRGN VAR_2, VAR_3, VAR_4;

    VAR_2 = FUNC_1(0, 0, 0, 0);
    VAR_3 = FUNC_1(0, 0, 10, 10);
    VAR_4 = FUNC_1(5, 5, 20, 20);

    FUNC_3(0xbadbabe);
    FUNC_5(FUNC_0(((void*)0), ((void*)0), ((void*)0), 0), VAR_0);
    FUNC_5(FUNC_0(VAR_2, VAR_3, VAR_4, 0), VAR_0);
    FUNC_5(FUNC_0(VAR_2, VAR_3, VAR_4, 6), VAR_0);
    FUNC_4((FUNC_2() == 0xbadbabe) || (FUNC_2() == VAR_1), "wrong error: %ld\n", FUNC_2());

}
