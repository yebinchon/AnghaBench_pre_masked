
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int mf; } ;
struct TYPE_10__ {int operation; TYPE_1__ number; } ;
struct TYPE_11__ {struct TYPE_11__* next; TYPE_3__ node; } ;
typedef TYPE_4__ stack_node_t ;
struct TYPE_9__ {int mf; } ;
struct TYPE_12__ {int operation; TYPE_2__ number; } ;
typedef TYPE_5__ calc_node_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_4__* VAR_1 ;

__attribute__((used)) static void FUNC_2(calc_node_t *VAR_2)
{
    stack_node_t *VAR_3 = (stack_node_t *)FUNC_0(sizeof(stack_node_t));

    FUNC_1(VAR_3->node.number.mf, VAR_2->number.mf, VAR_0);
    VAR_3->node.operation = VAR_2->operation;
    VAR_3->next = VAR_1;
    VAR_1 = VAR_3;
}
