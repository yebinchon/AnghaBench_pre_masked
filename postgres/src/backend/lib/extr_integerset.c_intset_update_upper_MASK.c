
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* uint64 ;
struct TYPE_11__ {scalar_t__ level; } ;
typedef TYPE_2__ intset_node ;
struct TYPE_12__ {TYPE_1__* items; } ;
typedef TYPE_3__ intset_leaf_node ;
struct TYPE_13__ {int level; int num_items; TYPE_2__** downlinks; void** values; } ;
typedef TYPE_4__ intset_internal_node ;
struct TYPE_14__ {int num_levels; TYPE_2__** rightmost_nodes; TYPE_2__* root; } ;
struct TYPE_10__ {void* first; } ;
typedef TYPE_5__ IntegerSet ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 TYPE_4__* FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static void
FUNC_3(IntegerSet *VAR_3, int VAR_4, intset_node *VAR_5,
     uint64 VAR_6)
{
 intset_internal_node *VAR_7;

 FUNC_0(VAR_4 > 0);




 if (VAR_4 >= VAR_3->num_levels)
 {
  intset_node *VAR_8 = VAR_3->root;
  uint64 VAR_9;


  if (VAR_3->num_levels == VAR_2)
   FUNC_1(VAR_0, "could not expand integer set, maximum number of levels reached");
  VAR_3->num_levels++;





  if (VAR_3->root->level == 0)
   VAR_9 = ((intset_leaf_node *) VAR_8)->items[0].first;
  else
   VAR_9 = ((intset_internal_node *) VAR_8)->values[0];

  VAR_7 = FUNC_2(VAR_3);
  VAR_7->level = VAR_4;
  VAR_7->values[0] = VAR_9;
  VAR_7->downlinks[0] = VAR_8;
  VAR_7->num_items = 1;

  VAR_3->root = (intset_node *) VAR_7;
  VAR_3->rightmost_nodes[VAR_4] = (intset_node *) VAR_7;
 }




 VAR_7 = (intset_internal_node *) VAR_3->rightmost_nodes[VAR_4];

 if (VAR_7->num_items < VAR_1)
 {
  VAR_7->values[VAR_7->num_items] = VAR_6;
  VAR_7->downlinks[VAR_7->num_items] = VAR_5;
  VAR_7->num_items++;
 }
 else
 {





  VAR_7 = FUNC_2(VAR_3);
  VAR_7->level = VAR_4;
  VAR_7->values[0] = VAR_6;
  VAR_7->downlinks[0] = VAR_5;
  VAR_7->num_items = 1;

  VAR_3->rightmost_nodes[VAR_4] = (intset_node *) VAR_7;

  FUNC_3(VAR_3, VAR_4 + 1, (intset_node *) VAR_7, VAR_6);
 }
}
