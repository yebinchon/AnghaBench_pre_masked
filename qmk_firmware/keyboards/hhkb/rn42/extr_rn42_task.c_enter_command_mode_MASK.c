
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (char*,char const*,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(void)
{
    VAR_0 = FUNC_2();
    FUNC_1();
    FUNC_3(&VAR_1);
    FUNC_5();
    while (FUNC_6()) ;

    FUNC_4("Entering config mode ...\n");
    FUNC_9(1100);
    FUNC_0("$$$");
    FUNC_9(600);
    FUNC_7();
    const char *VAR_2 = FUNC_0("v\r\n");
    if (FUNC_8("v", VAR_2, 1) != 0) FUNC_0("+\r\n");
}
