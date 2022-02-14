
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int xa_flags; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline gfp_t FUNC_0(const struct radix_tree_root *VAR_2)
{
 return VAR_2->xa_flags & (VAR_1 & ~VAR_0);
}
