
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iter_active; int * iter_values; scalar_t__ iter_num_values; scalar_t__ iter_valueno; scalar_t__ iter_itemno; int * iter_node; scalar_t__ num_buffered_values; int * leftmost_leaf; int rightmost_nodes; int * root; scalar_t__ num_levels; scalar_t__ highest_value; scalar_t__ num_entries; int mem_used; int context; } ;
typedef TYPE_1__ IntegerSet ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

IntegerSet *
FUNC_3(void)
{
 IntegerSet *VAR_1;

 VAR_1 = (IntegerSet *) FUNC_2(sizeof(IntegerSet));
 VAR_1->context = VAR_0;
 VAR_1->mem_used = FUNC_0(VAR_1);

 VAR_1->num_entries = 0;
 VAR_1->highest_value = 0;

 VAR_1->num_levels = 0;
 VAR_1->root = ((void*)0);
 FUNC_1(VAR_1->rightmost_nodes, 0, sizeof(VAR_1->rightmost_nodes));
 VAR_1->leftmost_leaf = ((void*)0);

 VAR_1->num_buffered_values = 0;

 VAR_1->iter_active = 0;
 VAR_1->iter_node = ((void*)0);
 VAR_1->iter_itemno = 0;
 VAR_1->iter_valueno = 0;
 VAR_1->iter_num_values = 0;
 VAR_1->iter_values = ((void*)0);

 return VAR_1;
}
