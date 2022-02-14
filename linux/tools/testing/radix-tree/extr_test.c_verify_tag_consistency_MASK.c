
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {struct radix_tree_node* xa_head; } ;
struct radix_tree_node {int dummy; } ;


 int FUNC_0 (struct radix_tree_node*) ;
 int FUNC_1 (struct radix_tree_root*,unsigned int) ;
 int FUNC_2 (struct radix_tree_node*,unsigned int,int) ;

void FUNC_3(struct radix_tree_root *VAR_0, unsigned int VAR_1)
{
 struct radix_tree_node *VAR_2 = VAR_0->xa_head;
 if (!FUNC_0(VAR_2))
  return;
 FUNC_2(VAR_2, VAR_1, !!FUNC_1(VAR_0, VAR_1));
}
