
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ color; TYPE_1__* parent; struct TYPE_15__* right; struct TYPE_15__* left; } ;
struct TYPE_14__ {int arg; int (* freefunc ) (TYPE_3__*,int ) ;TYPE_3__* root; } ;
struct TYPE_13__ {TYPE_3__* right; TYPE_3__* left; } ;
typedef TYPE_2__ RBTree ;
typedef TYPE_3__ RBTNode ;


 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_3(RBTree *VAR_2, RBTNode *VAR_3)
{
 RBTNode *VAR_4,
      *VAR_5;


 if (!VAR_3 || VAR_3 == VAR_1)
  return;






 if (VAR_3->left == VAR_1 || VAR_3->right == VAR_1)
 {

  VAR_5 = VAR_3;
 }
 else
 {

  VAR_5 = VAR_3->right;
  while (VAR_5->left != VAR_1)
   VAR_5 = VAR_5->left;
 }


 if (VAR_5->left != VAR_1)
  VAR_4 = VAR_5->left;
 else
  VAR_4 = VAR_5->right;


 VAR_4->parent = VAR_5->parent;
 if (VAR_5->parent)
 {
  if (VAR_5 == VAR_5->parent->left)
   VAR_5->parent->left = VAR_4;
  else
   VAR_5->parent->right = VAR_4;
 }
 else
 {
  VAR_2->root = VAR_4;
 }





 if (VAR_5 != VAR_3)
  FUNC_0(VAR_2, VAR_3, VAR_5);





 if (VAR_5->color == VAR_0)
  FUNC_1(VAR_2, VAR_4);


 if (VAR_2->freefunc)
  VAR_2->freefunc(VAR_5, VAR_2->arg);
}
