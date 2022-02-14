
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* right; struct TYPE_10__* left; } ;
struct TYPE_9__ {int (* comparator ) (TYPE_2__ const*,TYPE_2__*,int ) ;int arg; TYPE_2__* root; } ;
typedef TYPE_1__ RBTree ;
typedef TYPE_2__ RBTNode ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (TYPE_2__ const*,TYPE_2__*,int ) ;

RBTNode *
FUNC_1(RBTree *VAR_1, const RBTNode *VAR_2)
{
 RBTNode *VAR_3 = VAR_1->root;

 while (VAR_3 != VAR_0)
 {
  int VAR_4 = VAR_1->comparator(VAR_2, VAR_3, VAR_1->arg);

  if (VAR_4 == 0)
   return VAR_3;
  else if (VAR_4 < 0)
   VAR_3 = VAR_3->left;
  else
   VAR_3 = VAR_3->right;
 }

 return ((void*)0);
}
