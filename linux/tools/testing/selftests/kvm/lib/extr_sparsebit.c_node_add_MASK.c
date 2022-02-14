
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparsebit {struct node* root; } ;
struct node {int idx; int num_after; int mask; struct node* right; struct node* parent; struct node* left; } ;
typedef int sparsebit_idx_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 struct node* FUNC_2 (int,int) ;
 struct node* FUNC_3 (struct sparsebit*,struct node*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static struct node *FUNC_5(struct sparsebit *VAR_1, sparsebit_idx_t VAR_2)
{
 struct node *VAR_3, *VAR_4, *VAR_5;


 VAR_3 = FUNC_2(1, sizeof(*VAR_3));
 if (!VAR_3) {
  FUNC_4("calloc");
  FUNC_0();
 }

 VAR_3->idx = VAR_2 & -VAR_0;


 if (!VAR_1->root) {
  VAR_1->root = VAR_3;
  return VAR_3;
 }





 VAR_4 = VAR_1->root;
 while (1) {
  if (VAR_2 < VAR_4->idx) {
   if (!VAR_4->left) {
    VAR_4->left = VAR_3;
    VAR_3->parent = VAR_4;
    break;
   }
   VAR_4 = VAR_4->left;
  } else {
   FUNC_1(VAR_2 > VAR_4->idx + VAR_0 + VAR_4->num_after - 1);
   if (!VAR_4->right) {
    VAR_4->right = VAR_3;
    VAR_3->parent = VAR_4;
    break;
   }
   VAR_4 = VAR_4->right;
  }
 }






 VAR_5 = FUNC_3(VAR_1, VAR_3);
 while (VAR_5 && VAR_5->idx + VAR_0 + VAR_5->num_after - 1 >= VAR_3->idx) {
  unsigned int VAR_6 = (VAR_5->idx + VAR_0 + VAR_5->num_after - 1)
   - VAR_3->idx;
  FUNC_1(VAR_5->num_after > 0);
  FUNC_1(VAR_6 < VAR_0);
  FUNC_1(!(VAR_3->mask & (1 << VAR_6)));
  VAR_3->mask |= (1 << VAR_6);
  VAR_5->num_after--;
 }

 return VAR_3;
}
