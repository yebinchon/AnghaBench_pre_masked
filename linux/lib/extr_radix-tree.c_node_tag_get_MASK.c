
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int dummy; } ;
struct radix_tree_node {int dummy; } ;


 int FUNC_0 (struct radix_tree_root const*,unsigned int) ;
 int FUNC_1 (struct radix_tree_node const*,unsigned int,unsigned int) ;

__attribute__((used)) static bool FUNC_2(const struct radix_tree_root *VAR_0,
    const struct radix_tree_node *VAR_1,
    unsigned int VAR_2, unsigned int VAR_3)
{
 if (VAR_1)
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 return FUNC_0(VAR_0, VAR_2);
}
