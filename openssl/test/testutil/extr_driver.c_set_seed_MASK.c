
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,char*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(int VAR_1)
{
    VAR_0 = VAR_1;
    if (VAR_0 <= 0)
        VAR_0 = (int)FUNC_4(((void*)0));
    FUNC_2("%*s# RAND SEED %d\n", FUNC_0(), "", VAR_0);
    FUNC_1();
    FUNC_3(VAR_0);
}
