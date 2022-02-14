
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_8__ {scalar_t__ first; int codeword; } ;
typedef TYPE_1__ leaf_item ;
struct TYPE_9__ {int level; } ;
typedef TYPE_2__ intset_node ;
struct TYPE_10__ {TYPE_1__* items; int num_items; } ;
typedef TYPE_3__ intset_leaf_node ;
struct TYPE_11__ {scalar_t__* values; scalar_t__ num_items; TYPE_2__** downlinks; } ;
typedef TYPE_4__ intset_internal_node ;
struct TYPE_12__ {scalar_t__ num_buffered_values; scalar_t__* buffered_values; int num_levels; TYPE_2__* root; } ;
typedef TYPE_5__ IntegerSet ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,TYPE_1__*,int ,int) ;
 int FUNC_2 (scalar_t__,scalar_t__*,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,scalar_t__) ;

bool
FUNC_4(IntegerSet *VAR_0, uint64 VAR_1)
{
 intset_node *VAR_2;
 intset_leaf_node *VAR_3;
 int VAR_4;
 int VAR_5;
 leaf_item *VAR_6;




 if (VAR_0->num_buffered_values > 0 && VAR_1 >= VAR_0->buffered_values[0])
 {
  int VAR_7;

  VAR_7 = FUNC_2(VAR_1,
            VAR_0->buffered_values,
            VAR_0->num_buffered_values,
            0);
  if (VAR_7 >= VAR_0->num_buffered_values)
   return 0;
  else
   return (VAR_0->buffered_values[VAR_7] == VAR_1);
 }





 if (!VAR_0->root)
  return 0;
 VAR_2 = VAR_0->root;
 for (VAR_4 = VAR_0->num_levels - 1; VAR_4 > 0; VAR_4--)
 {
  intset_internal_node *VAR_8 = (intset_internal_node *) VAR_2;

  FUNC_0(VAR_2->level == VAR_4);

  VAR_5 = FUNC_2(VAR_1, VAR_8->values, VAR_8->num_items, 1);
  if (VAR_5 == 0)
   return 0;
  VAR_2 = VAR_8->downlinks[VAR_5 - 1];
 }
 FUNC_0(VAR_2->level == 0);
 VAR_3 = (intset_leaf_node *) VAR_2;




 VAR_5 = FUNC_1(VAR_1, VAR_3->items, VAR_3->num_items, 1);
 if (VAR_5 == 0)
  return 0;
 VAR_6 = &VAR_3->items[VAR_5 - 1];


 if (VAR_6->first == VAR_1)
  return 1;
 FUNC_0(VAR_1 > VAR_6->first);


 if (FUNC_3(VAR_6->codeword, VAR_1, VAR_6->first))
  return 1;

 return 0;
}
