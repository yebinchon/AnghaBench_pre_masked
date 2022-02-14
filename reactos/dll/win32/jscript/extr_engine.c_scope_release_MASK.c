
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int obj; struct TYPE_4__* next; scalar_t__ ref; } ;
typedef TYPE_1__ scope_chain_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(scope_chain_t *VAR_0)
{
    if(--VAR_0->ref)
        return;

    if(VAR_0->next)
        FUNC_2(VAR_0->next);

    FUNC_0(VAR_0->obj);
    FUNC_1(VAR_0);
}
