
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int dummy; } ;
struct item {int index; } ;


 int FUNC_0 (struct item*) ;
 struct item* FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (struct radix_tree_root*,int ,struct item*) ;

int FUNC_3(struct radix_tree_root *VAR_0, unsigned long VAR_1)
{
 struct item *VAR_2 = FUNC_1(VAR_1, 0);
 int VAR_3 = FUNC_2(VAR_0, VAR_2->index, VAR_2);
 if (VAR_3)
  FUNC_0(VAR_2);
 return VAR_3;
}
