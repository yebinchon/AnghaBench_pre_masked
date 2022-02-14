
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparsebit {int dummy; } ;
struct node {scalar_t__ idx; int mask; scalar_t__ num_after; } ;
typedef scalar_t__ sparsebit_idx_t ;


 scalar_t__ VAR_0 ;
 struct node* FUNC_0 (struct sparsebit*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct node*,int ) ;
 struct node* FUNC_2 (struct sparsebit*,struct node*) ;

sparsebit_idx_t FUNC_3(struct sparsebit *VAR_1,
 sparsebit_idx_t VAR_2)
{
 sparsebit_idx_t VAR_3 = VAR_2 + 1;
 sparsebit_idx_t VAR_4;
 struct node *VAR_5, *VAR_6;


 if (VAR_3 == 0)
  return 0;





 VAR_5 = FUNC_0(VAR_1, VAR_3);
 if (!VAR_5)
  return VAR_3;


 for (VAR_4 = VAR_3 - VAR_5->idx; VAR_4 < VAR_0; VAR_4++)
  if (!(VAR_5->mask & (1 << VAR_4)))
   return VAR_5->idx + VAR_4;






 VAR_6 = FUNC_2(VAR_1, VAR_5);
 if (!VAR_6)
  return VAR_5->idx + VAR_0 + VAR_5->num_after;







 if (VAR_5->idx + VAR_0 + VAR_5->num_after != VAR_6->idx)
  return VAR_5->idx + VAR_0 + VAR_5->num_after;
 return FUNC_1(VAR_6, 0);
}
