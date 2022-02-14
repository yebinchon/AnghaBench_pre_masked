
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__ const* parent; struct TYPE_3__ const* right; struct TYPE_3__ const* left; } ;
typedef TYPE_1__ const index_tree_node ;



__attribute__((used)) static void *
FUNC_0(const index_tree_node *VAR_0)
{
 if (VAR_0->right != ((void*)0)) {
  VAR_0 = VAR_0->right;
  while (VAR_0->left != ((void*)0))
   VAR_0 = VAR_0->left;

  return (void *)(VAR_0);
 }

 while (VAR_0->parent != ((void*)0) && VAR_0->parent->right == VAR_0)
  VAR_0 = VAR_0->parent;

 return (void *)(VAR_0->parent);
}
