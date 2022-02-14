
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparsebit {scalar_t__ num_set; struct node* root; } ;
struct node {struct node* right; struct node* left; struct node* parent; } ;
typedef scalar_t__ sparsebit_num_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct node*) ;
 scalar_t__ FUNC_2 (struct node*) ;
 scalar_t__ FUNC_3 (struct sparsebit*) ;

__attribute__((used)) static void FUNC_4(struct sparsebit *VAR_0, struct node *VAR_1)
{
 struct node *VAR_2;
 sparsebit_num_t VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 FUNC_0(VAR_0->num_set >= VAR_3 || FUNC_3(VAR_0));
 VAR_0->num_set -= FUNC_2(VAR_1);


 if (VAR_1->left && VAR_1->right) {




  for (VAR_2 = VAR_1->right; VAR_2->left; VAR_2 = VAR_2->left)
   ;
  VAR_2->left = VAR_1->left;
  VAR_1->left = ((void*)0);
  VAR_2->left->parent = VAR_2;
 }


 if (VAR_1->left) {
  if (!VAR_1->parent) {
   VAR_0->root = VAR_1->left;
   VAR_1->left->parent = ((void*)0);
  } else {
   VAR_1->left->parent = VAR_1->parent;
   if (VAR_1 == VAR_1->parent->left)
    VAR_1->parent->left = VAR_1->left;
   else {
    FUNC_0(VAR_1 == VAR_1->parent->right);
    VAR_1->parent->right = VAR_1->left;
   }
  }

  VAR_1->parent = VAR_1->left = VAR_1->right = ((void*)0);
  FUNC_1(VAR_1);

  return;
 }



 if (VAR_1->right) {
  if (!VAR_1->parent) {
   VAR_0->root = VAR_1->right;
   VAR_1->right->parent = ((void*)0);
  } else {
   VAR_1->right->parent = VAR_1->parent;
   if (VAR_1 == VAR_1->parent->left)
    VAR_1->parent->left = VAR_1->right;
   else {
    FUNC_0(VAR_1 == VAR_1->parent->right);
    VAR_1->parent->right = VAR_1->right;
   }
  }

  VAR_1->parent = VAR_1->left = VAR_1->right = ((void*)0);
  FUNC_1(VAR_1);

  return;
 }


 if (!VAR_1->parent) {
  VAR_0->root = ((void*)0);
 } else {
  if (VAR_1->parent->left == VAR_1)
   VAR_1->parent->left = ((void*)0);
  else {
   FUNC_0(VAR_1 == VAR_1->parent->right);
   VAR_1->parent->right = ((void*)0);
  }
 }

 VAR_1->parent = VAR_1->left = VAR_1->right = ((void*)0);
 FUNC_1(VAR_1);

 return;
}
