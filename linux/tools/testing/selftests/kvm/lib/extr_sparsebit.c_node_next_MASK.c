
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparsebit {int dummy; } ;
struct node {struct node* parent; struct node* right; struct node* left; } ;



__attribute__((used)) static struct node *FUNC_0(struct sparsebit *VAR_0, struct node *VAR_1)
{
 struct node *VAR_2 = VAR_1;





 if (VAR_2->right) {
  for (VAR_2 = VAR_2->right; VAR_2->left; VAR_2 = VAR_2->left)
   ;
  return VAR_2;
 }





 while (VAR_2->parent && VAR_2 == VAR_2->parent->right)
  VAR_2 = VAR_2->parent;

 return VAR_2->parent;
}
