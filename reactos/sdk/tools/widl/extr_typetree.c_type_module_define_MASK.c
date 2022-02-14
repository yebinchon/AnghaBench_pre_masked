
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* module; } ;
struct TYPE_6__ {int defined; TYPE_1__ details; } ;
typedef TYPE_2__ type_t ;
typedef int statement_list_t ;
struct TYPE_7__ {int * stmts; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 (int) ;

void FUNC_2(type_t *VAR_1, statement_list_t *VAR_2)
{
    if (VAR_1->details.module) FUNC_0("multiple definition error\n");
    VAR_1->details.module = FUNC_1(sizeof(*VAR_1->details.module));
    VAR_1->details.module->stmts = VAR_2;
    VAR_1->defined = VAR_0;
}
