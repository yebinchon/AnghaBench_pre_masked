
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparsebit {struct node* root; } ;
struct node {struct node* left; } ;



__attribute__((used)) static struct node *FUNC_0(struct sparsebit *VAR_0)
{
 struct node *VAR_1;

 for (VAR_1 = VAR_0->root; VAR_1 && VAR_1->left; VAR_1 = VAR_1->left)
  ;

 return VAR_1;
}
