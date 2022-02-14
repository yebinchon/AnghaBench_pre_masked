
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {struct radix_tree_node* xa_head; } ;
struct radix_tree_node {unsigned int shift; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct radix_tree_node* FUNC_1 (struct radix_tree_node*) ;
 int FUNC_2 (struct radix_tree_node*) ;
 int FUNC_3 (struct radix_tree_node*) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(struct radix_tree_root *VAR_1, int VAR_2)
{
 unsigned VAR_3;
 struct radix_tree_node *VAR_4 = VAR_1->xa_head;
 if (!FUNC_3(VAR_4)) {
  FUNC_0(VAR_2 == 0);
  return;
 }

 VAR_4 = FUNC_1(VAR_4);
 FUNC_0(VAR_2 <= FUNC_2(VAR_4));

 VAR_3 = VAR_4->shift;
 if (VAR_3 > 0)
  FUNC_0(VAR_2 > FUNC_4(VAR_3 - VAR_0));
 else
  FUNC_0(VAR_2 > 0);
}
