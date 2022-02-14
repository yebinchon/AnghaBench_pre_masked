
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int dummy; } ;
struct item {int dummy; } ;


 int FUNC_0 (struct item*,unsigned long) ;
 struct item* FUNC_1 (struct radix_tree_root*,unsigned long) ;

int FUNC_2(struct radix_tree_root *VAR_0, unsigned long VAR_1)
{
 struct item *VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (!VAR_2)
  return 0;

 FUNC_0(VAR_2, VAR_1);
 return 1;
}
