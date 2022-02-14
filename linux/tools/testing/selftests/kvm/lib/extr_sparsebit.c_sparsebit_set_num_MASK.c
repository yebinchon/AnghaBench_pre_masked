
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparsebit {int num_set; } ;
struct node {int idx; int num_after; int mask; } ;
typedef int sparsebit_num_t ;
typedef int sparsebit_idx_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sparsebit*,int) ;
 struct node* FUNC_2 (struct sparsebit*,struct node*) ;
 int FUNC_3 (struct sparsebit*,struct node*) ;
 int FUNC_4 (struct sparsebit*,struct node*) ;
 struct node* FUNC_5 (struct sparsebit*,int) ;

void FUNC_6(struct sparsebit *VAR_1,
 sparsebit_idx_t VAR_2, sparsebit_num_t VAR_3)
{
 struct node *VAR_4, *VAR_5;
 unsigned int VAR_6;
 sparsebit_idx_t VAR_7;
 sparsebit_num_t VAR_8;
 sparsebit_idx_t VAR_9, VAR_10;

 FUNC_0(VAR_3 > 0);
 FUNC_0(VAR_2 + VAR_3 - 1 >= VAR_2);
 for (VAR_7 = VAR_2, VAR_8 = VAR_3; VAR_8 > 0 && VAR_7 % VAR_0 != 0; VAR_7++, VAR_8--)
  FUNC_1(VAR_1, VAR_7);


 VAR_9 = VAR_7;
 VAR_10 = VAR_9 + (VAR_8 & -VAR_0) - 1;
 if (VAR_8 >= VAR_0) {
  VAR_4 = FUNC_5(VAR_1, VAR_9);






  if (VAR_10 + 1 > VAR_10)
   (void) FUNC_5(VAR_1, VAR_10 + 1);


  for (VAR_5 = FUNC_2(VAR_1, VAR_4);
   VAR_5 && (VAR_5->idx < VAR_10);
   VAR_5 = FUNC_2(VAR_1, VAR_4)) {
   FUNC_0(VAR_5->idx + VAR_0 + VAR_5->num_after - 1 <= VAR_10);
   FUNC_4(VAR_1, VAR_5);
   VAR_5 = ((void*)0);
  }


  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   if (!(VAR_4->mask & (1 << VAR_6))) {
    VAR_4->mask |= 1 << VAR_6;
    VAR_1->num_set++;
   }
  }

  VAR_1->num_set -= VAR_4->num_after;
  VAR_4->num_after = VAR_10 - VAR_9 + 1 - VAR_0;
  VAR_1->num_set += VAR_4->num_after;

  FUNC_3(VAR_1, VAR_4);
 }
 VAR_7 = VAR_10 + 1;
 VAR_8 -= VAR_10 - VAR_9 + 1;


 FUNC_0(VAR_8 < VAR_0);
 for (; VAR_8 > 0; VAR_7++, VAR_8--)
  FUNC_1(VAR_1, VAR_7);
}
