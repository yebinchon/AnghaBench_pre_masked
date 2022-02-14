
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {struct TYPE_18__* right; struct TYPE_18__* left; struct TYPE_18__* parent; int color; } ;
struct TYPE_17__ {int (* comparator ) (TYPE_2__ const*,TYPE_2__*,int ) ;TYPE_2__* root; int arg; TYPE_2__* (* allocfunc ) (int ) ;int (* combiner ) (TYPE_2__*,TYPE_2__ const*,int ) ;} ;
typedef TYPE_1__ RBTree ;
typedef TYPE_2__ RBTNode ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*,TYPE_2__ const*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__ const*,TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__ const*,int ) ;
 TYPE_2__* FUNC_4 (int ) ;

RBTNode *
FUNC_5(RBTree *VAR_2, const RBTNode *VAR_3, bool *VAR_4)
{
 RBTNode *VAR_5,
      *VAR_6,
      *VAR_7;
 int VAR_8;


 VAR_5 = VAR_2->root;
 VAR_6 = ((void*)0);
 VAR_8 = 0;

 while (VAR_5 != VAR_0)
 {
  VAR_8 = VAR_2->comparator(VAR_3, VAR_5, VAR_2->arg);
  if (VAR_8 == 0)
  {



   VAR_2->combiner(VAR_5, VAR_3, VAR_2->arg);
   *VAR_4 = 0;
   return VAR_5;
  }
  VAR_6 = VAR_5;
  VAR_5 = (VAR_8 < 0) ? VAR_5->left : VAR_5->right;
 }




 *VAR_4 = 1;

 VAR_7 = VAR_2->allocfunc(VAR_2->arg);

 VAR_7->color = VAR_1;

 VAR_7->left = VAR_0;
 VAR_7->right = VAR_0;
 VAR_7->parent = VAR_6;
 FUNC_0(VAR_2, VAR_7, VAR_3);


 if (VAR_6)
 {
  if (VAR_8 < 0)
   VAR_6->left = VAR_7;
  else
   VAR_6->right = VAR_7;
 }
 else
 {
  VAR_2->root = VAR_7;
 }

 FUNC_1(VAR_2, VAR_7);

 return VAR_7;
}
