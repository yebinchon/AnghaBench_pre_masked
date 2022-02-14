
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* value; struct TYPE_5__* key; struct TYPE_5__* right; struct TYPE_5__* left; } ;
typedef TYPE_1__ fz_tree ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(fz_context *VAR_1, fz_tree *VAR_2, void (*VAR_3)(fz_context *VAR_4, void *VAR_5))
{
 if (VAR_2)
 {
  if (VAR_2->left != &VAR_0)
   FUNC_1(VAR_1, VAR_2->left, VAR_3);
  if (VAR_2->right != &VAR_0)
   FUNC_1(VAR_1, VAR_2->right, VAR_3);
  FUNC_0(VAR_1, VAR_2->key);
  if (VAR_3)
   VAR_3(VAR_1, VAR_2->value);
  FUNC_0(VAR_1, VAR_2);
 }
}
