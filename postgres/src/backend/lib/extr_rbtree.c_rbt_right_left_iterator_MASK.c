
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* right; struct TYPE_9__* parent; struct TYPE_9__* left; } ;
struct TYPE_8__ {int is_over; TYPE_3__* last_visited; TYPE_1__* rbt; } ;
struct TYPE_7__ {TYPE_3__* root; } ;
typedef TYPE_2__ RBTreeIterator ;
typedef TYPE_3__ RBTNode ;


 TYPE_3__* VAR_0 ;

__attribute__((used)) static RBTNode *
FUNC_0(RBTreeIterator *VAR_1)
{
 if (VAR_1->last_visited == ((void*)0))
 {
  VAR_1->last_visited = VAR_1->rbt->root;
  while (VAR_1->last_visited->right != VAR_0)
   VAR_1->last_visited = VAR_1->last_visited->right;

  return VAR_1->last_visited;
 }

 if (VAR_1->last_visited->left != VAR_0)
 {
  VAR_1->last_visited = VAR_1->last_visited->left;
  while (VAR_1->last_visited->right != VAR_0)
   VAR_1->last_visited = VAR_1->last_visited->right;

  return VAR_1->last_visited;
 }

 for (;;)
 {
  RBTNode *VAR_2 = VAR_1->last_visited;

  VAR_1->last_visited = VAR_1->last_visited->parent;
  if (VAR_1->last_visited == ((void*)0))
  {
   VAR_1->is_over = 1;
   break;
  }

  if (VAR_1->last_visited->right == VAR_2)
   break;



 }

 return VAR_1->last_visited;
}
