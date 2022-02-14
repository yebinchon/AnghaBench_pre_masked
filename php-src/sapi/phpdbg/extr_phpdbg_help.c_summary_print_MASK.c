
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tip; int alias; int name; } ;
typedef TYPE_1__ phpdbg_command_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,int ,char*,int ,int ,int ) ;

void FUNC_3(phpdbg_command_t const * const VAR_0)
{
 char *VAR_1;
 FUNC_2(&VAR_1, 0, "Command: **%s**  Alias: **%c**  **%s**\n", VAR_0->name, VAR_0->alias, VAR_0->tip);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
}
