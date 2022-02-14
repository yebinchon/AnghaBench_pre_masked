
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparsebit {struct node* root; } ;
struct node {int idx; int num_after; int mask; struct node* right; struct node* left; } ;
typedef int sparsebit_idx_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

bool FUNC_1(struct sparsebit *VAR_1, sparsebit_idx_t VAR_2)
{
 struct node *VAR_3;


 for (VAR_3 = VAR_1->root; VAR_3;
      VAR_3 = VAR_3->idx > VAR_2 ? VAR_3->left : VAR_3->right)
  if (VAR_2 >= VAR_3->idx &&
      VAR_2 <= VAR_3->idx + VAR_0 + VAR_3->num_after - 1)
   goto have_node;

 return 0;

have_node:

 if (VAR_3->num_after && VAR_2 >= VAR_3->idx + VAR_0)
  return 1;


 FUNC_0(VAR_2 >= VAR_3->idx && VAR_2 - VAR_3->idx < VAR_0);
 return !!(VAR_3->mask & (1 << (VAR_2 - VAR_3->idx)));
}
