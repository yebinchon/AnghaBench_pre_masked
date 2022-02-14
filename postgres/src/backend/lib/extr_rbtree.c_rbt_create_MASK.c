
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rbt_freefunc ;
typedef int rbt_comparator ;
typedef int rbt_combiner ;
typedef int rbt_allocfunc ;
struct TYPE_3__ {int node_size; void* arg; int freefunc; int allocfunc; int combiner; int comparator; int root; } ;
typedef int Size ;
typedef TYPE_1__ RBTree ;
typedef int RBTNode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

RBTree *
FUNC_2(Size VAR_1,
     rbt_comparator VAR_2,
     rbt_combiner VAR_3,
     rbt_allocfunc VAR_4,
     rbt_freefunc VAR_5,
     void *VAR_6)
{
 RBTree *VAR_7 = (RBTree *) FUNC_1(sizeof(RBTree));

 FUNC_0(VAR_1 > sizeof(RBTNode));

 VAR_7->root = VAR_0;
 VAR_7->node_size = VAR_1;
 VAR_7->comparator = VAR_2;
 VAR_7->combiner = VAR_3;
 VAR_7->allocfunc = VAR_4;
 VAR_7->freefunc = VAR_5;

 VAR_7->arg = VAR_6;

 return VAR_7;
}
