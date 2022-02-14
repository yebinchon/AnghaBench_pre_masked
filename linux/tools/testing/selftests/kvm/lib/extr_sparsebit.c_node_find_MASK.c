
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparsebit {struct node* root; } ;
struct node {int idx; int num_after; struct node* right; struct node* left; } ;
typedef int sparsebit_idx_t ;


 int VAR_0 ;

__attribute__((used)) static struct node *FUNC_0(struct sparsebit *VAR_1, sparsebit_idx_t VAR_2)
{
 struct node *VAR_3;


 for (VAR_3 = VAR_1->root; VAR_3;
      VAR_3 = VAR_3->idx > VAR_2 ? VAR_3->left : VAR_3->right) {
  if (VAR_2 >= VAR_3->idx &&
      VAR_2 <= VAR_3->idx + VAR_0 + VAR_3->num_after - 1)
   break;
 }

 return VAR_3;
}
