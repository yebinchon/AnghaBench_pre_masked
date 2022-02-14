
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int dummy; } ;
struct radix_tree_node {int dummy; } ;


 struct radix_tree_node* VAR_0 ;
 struct radix_tree_node* FUNC_0 (struct radix_tree_node*) ;
 unsigned int FUNC_1 (struct radix_tree_node*,struct radix_tree_node**,unsigned long) ;
 scalar_t__ FUNC_2 (struct radix_tree_node*) ;
 int FUNC_3 (struct radix_tree_root const*,struct radix_tree_node**,unsigned long*) ;
 int FUNC_4 (struct radix_tree_root const*,unsigned int) ;
 int FUNC_5 (struct radix_tree_node*,unsigned int,unsigned int) ;

int FUNC_6(const struct radix_tree_root *VAR_1,
   unsigned long VAR_2, unsigned int VAR_3)
{
 struct radix_tree_node *VAR_4, *VAR_5;
 unsigned long VAR_6;

 if (!FUNC_4(VAR_1, VAR_3))
  return 0;

 FUNC_3(VAR_1, &VAR_4, &VAR_6);
 if (VAR_2 > VAR_6)
  return 0;

 while (FUNC_2(VAR_4)) {
  unsigned VAR_7;

  VAR_5 = FUNC_0(VAR_4);
  VAR_7 = FUNC_1(VAR_5, &VAR_4, VAR_2);

  if (!FUNC_5(VAR_5, VAR_3, VAR_7))
   return 0;
  if (VAR_4 == VAR_0)
   break;
 }

 return 1;
}
