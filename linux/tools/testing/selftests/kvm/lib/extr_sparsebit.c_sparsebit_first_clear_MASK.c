
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparsebit {int dummy; } ;
struct node {scalar_t__ idx; scalar_t__ num_after; int mask; } ;
typedef scalar_t__ sparsebit_idx_t ;
typedef int mask_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct node* FUNC_1 (struct sparsebit*) ;
 scalar_t__ FUNC_2 (struct node*,int ) ;
 struct node* FUNC_3 (struct sparsebit*,struct node*) ;
 int FUNC_4 (struct sparsebit*) ;

sparsebit_idx_t FUNC_5(struct sparsebit *VAR_1)
{
 struct node *VAR_2, *VAR_3;


 FUNC_0(FUNC_4(VAR_1));


 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2 || VAR_2->idx > 0)
  return 0;


 if (VAR_2->mask != ~(mask_t) 0)
  return FUNC_2(VAR_2, 0);






 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (!VAR_3) {




  FUNC_0(VAR_2->mask == ~(mask_t) 0);
  FUNC_0(VAR_2->idx + VAR_0 + VAR_2->num_after != (sparsebit_idx_t) 0);
  return VAR_2->idx + VAR_0 + VAR_2->num_after;
 }







 if (VAR_2->idx + VAR_0 + VAR_2->num_after != VAR_3->idx)
  return VAR_2->idx + VAR_0 + VAR_2->num_after;
 return FUNC_2(VAR_3, 0);
}
