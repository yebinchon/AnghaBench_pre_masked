
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static void FUNC_2(void)
{
    HMODULE VAR_4 = FUNC_0("msvcrt.dll");

    VAR_0 = (void *)FUNC_1(VAR_4, "_makepath_s");
    VAR_2 = (void *)FUNC_1(VAR_4, "_wmakepath_s");
    VAR_1 = (void *)FUNC_1(VAR_4, "_searchenv_s");
    VAR_3 = (void *)FUNC_1(VAR_4, "_wsearchenv_s");
}
