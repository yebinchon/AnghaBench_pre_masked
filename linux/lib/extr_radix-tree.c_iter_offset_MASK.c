
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_iter {unsigned int index; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(const struct radix_tree_iter *VAR_1)
{
 return VAR_1->index & VAR_0;
}
