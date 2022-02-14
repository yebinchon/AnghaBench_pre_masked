
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int dummy; } ;
struct radix_tree_node {unsigned int offset; struct radix_tree_node* parent; } ;


 scalar_t__ FUNC_0 (struct radix_tree_node*,unsigned int) ;
 int FUNC_1 (struct radix_tree_root*,unsigned int) ;
 scalar_t__ FUNC_2 (struct radix_tree_root*,unsigned int) ;
 int FUNC_3 (struct radix_tree_node*,unsigned int,unsigned int) ;
 int FUNC_4 (struct radix_tree_node*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct radix_tree_root *VAR_0,
    struct radix_tree_node *VAR_1,
    unsigned int VAR_2, unsigned int VAR_3)
{
 while (VAR_1) {
  if (!FUNC_4(VAR_1, VAR_2, VAR_3))
   return;
  FUNC_3(VAR_1, VAR_2, VAR_3);
  if (FUNC_0(VAR_1, VAR_2))
   return;

  VAR_3 = VAR_1->offset;
  VAR_1 = VAR_1->parent;
 }


 if (FUNC_2(VAR_0, VAR_2))
  FUNC_1(VAR_0, VAR_2);
}
