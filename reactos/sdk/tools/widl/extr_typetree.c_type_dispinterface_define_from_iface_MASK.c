
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
struct TYPE_9__ {int * async_iface; TYPE_2__* disp_inherit; int inherit; int * stmts; int * disp_methods; int * disp_props; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int *,int ) ;
 TYPE_3__* FUNC_3 (int) ;

void FUNC_4(type_t *VAR_1, type_t *VAR_2)
{
    VAR_1->details.iface = FUNC_3(sizeof(*VAR_1->details.iface));
    VAR_1->details.iface->disp_props = ((void*)0);
    VAR_1->details.iface->disp_methods = ((void*)0);
    VAR_1->details.iface->stmts = ((void*)0);
    VAR_1->details.iface->inherit = FUNC_2("IDispatch", ((void*)0), 0);
    if (!VAR_1->details.iface->inherit) FUNC_1("IDispatch is undefined\n");
    VAR_1->details.iface->disp_inherit = VAR_2;
    VAR_1->details.iface->async_iface = ((void*)0);
    VAR_1->defined = VAR_0;
    FUNC_0(VAR_1);
}
