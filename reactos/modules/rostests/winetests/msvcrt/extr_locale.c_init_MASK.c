
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

    VAR_1 = (void*)FUNC_1(VAR_4, "__crtGetStringTypeW");
    VAR_3 = (void*)FUNC_1(VAR_4, "memcpy_s");
    VAR_0 = (void*)FUNC_1(VAR_4, "___mb_cur_max_func");
    VAR_2 = (void*)FUNC_1(VAR_4, "__p___mb_cur_max");
}
