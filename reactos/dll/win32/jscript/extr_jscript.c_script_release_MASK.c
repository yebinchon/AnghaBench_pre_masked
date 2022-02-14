
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* jscaller; struct TYPE_7__* stack; int stack_top; scalar_t__ last_match; int tmp_heap; scalar_t__ cc; int acc; scalar_t__ ref; } ;
typedef TYPE_2__ script_ctx_t ;
struct TYPE_6__ {int IServiceProvider_iface; int * ctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;

void FUNC_8(script_ctx_t *VAR_0)
{
    if(--VAR_0->ref)
        return;

    FUNC_6(VAR_0->acc);
    FUNC_2(VAR_0);
    if(VAR_0->cc)
        FUNC_7(VAR_0->cc);
    FUNC_4(&VAR_0->tmp_heap);
    if(VAR_0->last_match)
        FUNC_5(VAR_0->last_match);
    FUNC_1(!VAR_0->stack_top);
    FUNC_3(VAR_0->stack);

    VAR_0->jscaller->ctx = ((void*)0);
    FUNC_0(&VAR_0->jscaller->IServiceProvider_iface);

    FUNC_3(VAR_0);
}
