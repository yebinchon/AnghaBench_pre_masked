
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparsebit {struct node* root; } ;
struct node {int idx; int num_after; int mask; struct node* right; struct node* left; } ;
typedef scalar_t__ sparsebit_idx_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct node*,scalar_t__) ;
 struct node* FUNC_2 (struct sparsebit*,struct node*) ;

sparsebit_idx_t FUNC_3(struct sparsebit *VAR_1,
 sparsebit_idx_t VAR_2)
{
 sparsebit_idx_t VAR_3 = VAR_2 + 1;
 sparsebit_idx_t VAR_4;
 struct node *VAR_5;


 if (VAR_3 == 0)
  return 0;





 struct node *VAR_6 = ((void*)0);


 bool VAR_7 = 0;






 for (VAR_5 = VAR_1->root; VAR_5;) {
  if ((VAR_5->idx + VAR_0 + VAR_5->num_after - 1)
   >= VAR_3) {
   VAR_6 = VAR_5;
   if (VAR_6->idx <= VAR_3) {
    VAR_7 = 1;
    break;
   }
   VAR_5 = VAR_5->left;
  } else {
   VAR_5 = VAR_5->right;
  }
 }
 if (!VAR_6)
  return 0;

 FUNC_0(VAR_6->mask != 0);


 if (!VAR_7) {





  FUNC_0(VAR_6->idx > VAR_3);

  return FUNC_1(VAR_6, 0);
 }
 VAR_4 = VAR_3 - VAR_6->idx;

 if (VAR_4 < VAR_0 && VAR_6->mask >= (1 << VAR_4))
  return FUNC_1(VAR_6, VAR_4);

 if (VAR_6->num_after) {
  sparsebit_idx_t VAR_8 = VAR_6->idx + VAR_0;

  return VAR_3 < VAR_8
   ? VAR_8 : VAR_3;
 }
 VAR_6 = FUNC_2(VAR_1, VAR_6);
 if (!VAR_6)
  return 0;

 return FUNC_1(VAR_6, 0);
}
