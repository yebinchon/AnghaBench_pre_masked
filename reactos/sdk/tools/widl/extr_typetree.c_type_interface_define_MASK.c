
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* iface; } ;
struct TYPE_8__ {int defined; TYPE_1__ details; } ;
typedef TYPE_2__ type_t ;
typedef int statement_list_t ;
struct TYPE_9__ {int * async_iface; int * disp_inherit; TYPE_2__* inherit; int * stmts; int * disp_methods; int * disp_props; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_3__* FUNC_1 (int) ;

void FUNC_2(type_t *VAR_1, type_t *VAR_2, statement_list_t *VAR_3)
{
    VAR_1->details.iface = FUNC_1(sizeof(*VAR_1->details.iface));
    VAR_1->details.iface->disp_props = ((void*)0);
    VAR_1->details.iface->disp_methods = ((void*)0);
    VAR_1->details.iface->stmts = VAR_3;
    VAR_1->details.iface->inherit = VAR_2;
    VAR_1->details.iface->disp_inherit = ((void*)0);
    VAR_1->details.iface->async_iface = ((void*)0);
    VAR_1->defined = VAR_0;
    FUNC_0(VAR_1);
}
