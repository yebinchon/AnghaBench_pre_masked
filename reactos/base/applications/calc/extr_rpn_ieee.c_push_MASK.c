
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; int node; } ;
typedef TYPE_1__ stack_node_t ;
typedef int calc_node_t ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(calc_node_t *VAR_1)
{
    stack_node_t *VAR_2 = (stack_node_t *)FUNC_0(sizeof(stack_node_t));

    VAR_2->node = *VAR_1;
    VAR_2->next = VAR_0;
    VAR_0 = VAR_2;
}
