
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int xa_flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(const struct radix_tree_root *VAR_1)
{
 return !!(VAR_1->xa_flags & VAR_0);
}
