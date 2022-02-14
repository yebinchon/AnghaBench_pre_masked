
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ level; struct TYPE_4__* right; struct TYPE_4__* left; } ;
typedef TYPE_1__ fz_tree ;



__attribute__((used)) static fz_tree *FUNC_0(fz_tree *VAR_0)
{
 if (VAR_0->level != 0)
 {
  if (VAR_0->left->level == VAR_0->level)
  {
   fz_tree *VAR_1 = VAR_0;
   VAR_0 = VAR_0->left;
   VAR_1->left = VAR_0->right;
   VAR_0->right = VAR_1;
  }
  VAR_0->right = FUNC_0(VAR_0->right);
 }
 return VAR_0;
}
