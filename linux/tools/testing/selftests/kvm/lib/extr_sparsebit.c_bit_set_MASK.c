
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparsebit {int num_set; } ;
struct node {int idx; int mask; } ;
typedef int sparsebit_idx_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sparsebit*,struct node*) ;
 struct node* FUNC_2 (struct sparsebit*,int) ;
 scalar_t__ FUNC_3 (struct sparsebit*,int) ;

__attribute__((used)) static void FUNC_4(struct sparsebit *VAR_1, sparsebit_idx_t VAR_2)
{
 struct node *VAR_3;


 if (FUNC_3(VAR_1, VAR_2))
  return;






 VAR_3 = FUNC_2(VAR_1, VAR_2 & -VAR_0);


 FUNC_0(VAR_2 >= VAR_3->idx && VAR_2 <= VAR_3->idx + VAR_0 - 1);
 FUNC_0(!(VAR_3->mask & (1 << (VAR_2 - VAR_3->idx))));
 VAR_3->mask |= 1 << (VAR_2 - VAR_3->idx);
 VAR_1->num_set++;

 FUNC_1(VAR_1, VAR_3);
}
