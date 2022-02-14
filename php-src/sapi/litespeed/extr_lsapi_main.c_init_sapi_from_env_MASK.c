
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* php_ini_path_override; } ;
typedef TYPE_1__ sapi_module_struct ;


 char* FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(sapi_module_struct *VAR_0)
{
    char *VAR_1;
    VAR_1 = FUNC_0("LSPHPRC");
    if (VAR_1)
        VAR_0->php_ini_path_override = VAR_1;
}
