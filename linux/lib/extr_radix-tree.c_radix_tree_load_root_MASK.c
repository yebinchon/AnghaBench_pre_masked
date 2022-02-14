
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int xa_head; } ;
struct radix_tree_node {int shift; } ;


 int VAR_0 ;
 struct radix_tree_node* FUNC_0 (struct radix_tree_node*) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned long FUNC_2 (struct radix_tree_node*) ;
 int FUNC_3 (struct radix_tree_node*) ;
 struct radix_tree_node* FUNC_4 (int ) ;

__attribute__((used)) static unsigned FUNC_5(const struct radix_tree_root *VAR_1,
  struct radix_tree_node **VAR_2, unsigned long *VAR_3)
{
 struct radix_tree_node *VAR_4 = FUNC_4(VAR_1->xa_head);

 *VAR_2 = VAR_4;

 if (FUNC_1(FUNC_3(VAR_4))) {
  VAR_4 = FUNC_0(VAR_4);
  *VAR_3 = FUNC_2(VAR_4);
  return VAR_4->shift + VAR_0;
 }

 *VAR_3 = 0;
 return 0;
}
