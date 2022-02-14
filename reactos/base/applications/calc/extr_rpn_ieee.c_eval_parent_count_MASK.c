
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ operation; } ;
struct TYPE_5__ {scalar_t__ next; TYPE_1__ node; } ;
typedef TYPE_2__ stack_node_t ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;

int FUNC_0(void)
{
    stack_node_t *VAR_2 = VAR_1;
    int VAR_3 = 0;

    while (VAR_2 != ((void*)0)) {
        if (VAR_2->node.operation == VAR_0)
            VAR_3++;
        VAR_2 = (stack_node_t *)(VAR_2->next);
    }
    return VAR_3;
}
