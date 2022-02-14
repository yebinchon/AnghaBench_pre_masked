
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_8__ {int first; int codeword; } ;
typedef TYPE_1__ leaf_item ;
typedef int intset_node ;
struct TYPE_9__ {scalar_t__ num_items; TYPE_1__* items; struct TYPE_9__* next; } ;
typedef TYPE_2__ intset_leaf_node ;
struct TYPE_10__ {int* buffered_values; int num_buffered_values; int num_levels; int ** rightmost_nodes; TYPE_2__* leftmost_leaf; int * root; } ;
typedef TYPE_3__ IntegerSet ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int,int *,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int*,int) ;

__attribute__((used)) static void
FUNC_4(IntegerSet *VAR_2)
{
 uint64 *VAR_3 = VAR_2->buffered_values;
 uint64 VAR_4 = VAR_2->num_buffered_values;
 int VAR_5 = 0;
 intset_leaf_node *VAR_6;

 VAR_6 = (intset_leaf_node *) VAR_2->rightmost_nodes[0];





 if (VAR_6 == ((void*)0))
 {





  VAR_6 = FUNC_0(VAR_2);

  VAR_2->root = (intset_node *) VAR_6;
  VAR_2->leftmost_leaf = VAR_6;
  VAR_2->rightmost_nodes[0] = (intset_node *) VAR_6;
  VAR_2->num_levels = 1;
 }







 while (VAR_4 - VAR_5 >= VAR_1)
 {
  leaf_item VAR_7;
  int VAR_8;





  VAR_7.first = VAR_3[VAR_5];
  VAR_7.codeword = FUNC_3(&VAR_3[VAR_5 + 1],
          &VAR_8,
          VAR_7.first);





  if (VAR_6->num_items >= VAR_0)
  {

   intset_leaf_node *VAR_9 = VAR_6;

   VAR_6 = FUNC_0(VAR_2);
   VAR_9->next = VAR_6;
   VAR_2->rightmost_nodes[0] = (intset_node *) VAR_6;
   FUNC_1(VAR_2, 1, (intset_node *) VAR_6, VAR_7.first);
  }
  VAR_6->items[VAR_6->num_items++] = VAR_7;

  VAR_5 += 1 + VAR_8;
 }




 if (VAR_5 < VAR_2->num_buffered_values)
 {
  FUNC_2(&VAR_2->buffered_values[0],
    &VAR_2->buffered_values[VAR_5],
    (VAR_2->num_buffered_values - VAR_5) * sizeof(uint64));
 }
 VAR_2->num_buffered_values -= VAR_5;
}
