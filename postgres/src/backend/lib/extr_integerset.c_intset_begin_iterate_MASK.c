
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iter_active; int iter_values_buf; int iter_values; scalar_t__ iter_num_values; scalar_t__ iter_valueno; scalar_t__ iter_itemno; int leftmost_leaf; int iter_node; } ;
typedef TYPE_1__ IntegerSet ;



void
FUNC_0(IntegerSet *VAR_0)
{

 VAR_0->iter_active = 1;
 VAR_0->iter_node = VAR_0->leftmost_leaf;
 VAR_0->iter_itemno = 0;
 VAR_0->iter_valueno = 0;
 VAR_0->iter_num_values = 0;
 VAR_0->iter_values = VAR_0->iter_values_buf;
}
