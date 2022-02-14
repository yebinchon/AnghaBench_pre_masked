
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparsebit {int dummy; } ;
struct node {int idx; int num_after; int mask; } ;
typedef int sparsebit_num_t ;
typedef int sparsebit_idx_t ;
typedef int mask_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct node* FUNC_1 (struct sparsebit*,int) ;
 struct node* FUNC_2 (struct sparsebit*,int) ;

__attribute__((used)) static struct node *FUNC_3(struct sparsebit *VAR_1, sparsebit_idx_t VAR_2)
{
 struct node *VAR_3, *VAR_4;
 sparsebit_idx_t VAR_5;
 sparsebit_num_t VAR_6;

 FUNC_0(!(VAR_2 % VAR_0));





 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_3)
  return FUNC_1(VAR_1, VAR_2);





 if (VAR_3->idx == VAR_2)
  return VAR_3;
 VAR_5 = VAR_2 - (VAR_3->idx + VAR_0);
 VAR_6 = VAR_3->num_after;





 VAR_3->num_after = VAR_5;
 VAR_4 = FUNC_1(VAR_1, VAR_2);


 VAR_4->num_after = VAR_6 - VAR_5;
 if (VAR_4->num_after >= VAR_0) {
  VAR_4->mask = ~(mask_t) 0;
  VAR_4->num_after -= VAR_0;
 } else {
  VAR_4->mask = (1 << VAR_4->num_after) - 1;
  VAR_4->num_after = 0;
 }

 return VAR_4;
}
