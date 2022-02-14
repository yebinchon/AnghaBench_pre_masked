
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ operation; } ;
struct TYPE_5__ {TYPE_1__ node; } ;
typedef TYPE_2__ stack_node_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 TYPE_2__* VAR_3 ;

void FUNC_1(void)
{
    stack_node_t *VAR_4 = VAR_3;

    if (VAR_4 == ((void*)0))
        return;
    if (VAR_4->node.operation == VAR_1 ||
        VAR_4->node.operation == VAR_2 ||
        VAR_4->node.operation == VAR_0)
        return;

    FUNC_0();
}
