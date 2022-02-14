
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparsebit {scalar_t__ num_set; } ;
struct node {int idx; int mask; } ;
typedef int sparsebit_idx_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct node* FUNC_1 (struct sparsebit*,int) ;
 int FUNC_2 (struct sparsebit*,struct node*) ;
 struct node* FUNC_3 (struct sparsebit*,int) ;
 scalar_t__ FUNC_4 (struct sparsebit*) ;
 int FUNC_5 (struct sparsebit*,int) ;

__attribute__((used)) static void FUNC_6(struct sparsebit *VAR_1, sparsebit_idx_t VAR_2)
{
 struct node *VAR_3;


 if (!FUNC_5(VAR_1, VAR_2))
  return;


 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3)
  return;





 if (VAR_2 >= VAR_3->idx + VAR_0)
  VAR_3 = FUNC_3(VAR_1, VAR_2 & -VAR_0);





 FUNC_0(VAR_2 >= VAR_3->idx && VAR_2 <= VAR_3->idx + VAR_0 - 1);
 FUNC_0(VAR_3->mask & (1 << (VAR_2 - VAR_3->idx)));
 VAR_3->mask &= ~(1 << (VAR_2 - VAR_3->idx));
 FUNC_0(VAR_1->num_set > 0 || FUNC_4(VAR_1));
 VAR_1->num_set--;

 FUNC_2(VAR_1, VAR_3);
}
