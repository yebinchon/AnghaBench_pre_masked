
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* left; } ;
struct TYPE_6__ {TYPE_2__* root; } ;
typedef TYPE_1__ RBTree ;
typedef TYPE_2__ RBTNode ;


 TYPE_2__* VAR_0 ;

RBTNode *
FUNC_0(RBTree *VAR_1)
{
 RBTNode *VAR_2 = VAR_1->root;
 RBTNode *VAR_3 = VAR_1->root;

 while (VAR_2 != VAR_0)
 {
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->left;
 }

 if (VAR_3 != VAR_0)
  return VAR_3;

 return ((void*)0);
}
