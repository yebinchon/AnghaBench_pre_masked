
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PSecurityFunctionTableA ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void)
{
    PSecurityFunctionTableA VAR_0 = ((void*)0);

    VAR_0 = FUNC_1();
    FUNC_0(VAR_0 != ((void*)0), "InitSecurityInterface() returned NULL.\n");

}
