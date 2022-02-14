
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * next; scalar_t__ num_items; scalar_t__ level; } ;
typedef TYPE_1__ intset_leaf_node ;
struct TYPE_7__ {int mem_used; int context; } ;
typedef TYPE_2__ IntegerSet ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int) ;

__attribute__((used)) static intset_leaf_node *
FUNC_2(IntegerSet *VAR_0)
{
 intset_leaf_node *VAR_1;

 VAR_1 = (intset_leaf_node *) FUNC_1(VAR_0->context,
            sizeof(intset_leaf_node));
 VAR_0->mem_used += FUNC_0(VAR_1);

 VAR_1->level = 0;
 VAR_1->num_items = 0;
 VAR_1->next = ((void*)0);

 return VAR_1;
}
