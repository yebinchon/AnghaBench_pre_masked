
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int dummy; } ;
struct radix_tree_iter {int node; } ;


 int FUNC_0 (struct radix_tree_iter const*) ;
 int FUNC_1 (struct radix_tree_root*,int ,unsigned int,int ) ;

void FUNC_2(struct radix_tree_root *VAR_0,
   const struct radix_tree_iter *VAR_1, unsigned int VAR_2)
{
 FUNC_1(VAR_0, VAR_1->node, VAR_2, FUNC_0(VAR_1));
}
