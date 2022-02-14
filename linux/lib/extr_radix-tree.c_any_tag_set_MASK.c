
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_node {scalar_t__** tags; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const struct radix_tree_node *VAR_1,
       unsigned int VAR_2)
{
 unsigned VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->tags[VAR_2][VAR_3])
   return 1;
 }
 return 0;
}
