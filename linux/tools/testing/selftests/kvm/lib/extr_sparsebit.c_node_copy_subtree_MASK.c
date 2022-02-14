
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {struct node* parent; struct node* right; struct node* left; int num_after; int mask; int idx; } ;


 int FUNC_0 () ;
 struct node* FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static struct node *FUNC_3(struct node *VAR_0)
{
 struct node *VAR_1;


 VAR_1 = FUNC_1(1, sizeof(*VAR_1));
 if (!VAR_1) {
  FUNC_2("calloc");
  FUNC_0();
 }

 VAR_1->idx = VAR_0->idx;
 VAR_1->mask = VAR_0->mask;
 VAR_1->num_after = VAR_0->num_after;


 if (VAR_0->left) {
  VAR_1->left = FUNC_3(VAR_0->left);
  VAR_1->left->parent = VAR_1;
 }

 if (VAR_0->right) {
  VAR_1->right = FUNC_3(VAR_0->right);
  VAR_1->right->parent = VAR_1;
 }

 return VAR_1;
}
