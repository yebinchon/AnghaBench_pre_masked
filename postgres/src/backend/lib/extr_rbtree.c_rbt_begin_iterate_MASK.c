
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ root; } ;
struct TYPE_5__ {int is_over; int iterate; int * last_visited; TYPE_2__* rbt; } ;
typedef TYPE_1__ RBTreeIterator ;
typedef TYPE_2__ RBTree ;
typedef int RBTOrderControl ;


 int VAR_0 ;

 scalar_t__ VAR_1 ;

 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_1(RBTree *VAR_4, RBTOrderControl VAR_5, RBTreeIterator *VAR_6)
{

 VAR_6->rbt = VAR_4;
 VAR_6->last_visited = ((void*)0);
 VAR_6->is_over = (VAR_4->root == VAR_1);

 switch (VAR_5)
 {
  case 129:
   VAR_6->iterate = VAR_2;
   break;
  case 128:
   VAR_6->iterate = VAR_3;
   break;
  default:
   FUNC_0(VAR_0, "unrecognized rbtree iteration order: %d", VAR_5);
 }
}
