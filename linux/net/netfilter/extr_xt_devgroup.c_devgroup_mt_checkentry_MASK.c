
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {int hook_mask; struct xt_devgroup_info* matchinfo; } ;
struct xt_devgroup_info {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_0(const struct xt_mtchk_param *VAR_10)
{
 const struct xt_devgroup_info *VAR_11 = VAR_10->matchinfo;

 if (VAR_11->flags & ~(VAR_9 | VAR_7 |
       VAR_8 | VAR_6))
  return -VAR_0;

 if (VAR_11->flags & VAR_9 &&
     VAR_10->hook_mask & ~((1 << VAR_5) |
          (1 << VAR_2) |
          (1 << VAR_1)))
  return -VAR_0;

 if (VAR_11->flags & VAR_8 &&
     VAR_10->hook_mask & ~((1 << VAR_1) |
          (1 << VAR_3) |
          (1 << VAR_4)))
  return -VAR_0;

 return 0;
}
