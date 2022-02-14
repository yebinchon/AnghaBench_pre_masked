
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_devgroup_info {int flags; int src_group; int src_mask; int dst_group; int dst_mask; } ;
struct xt_action_param {struct xt_devgroup_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int group; } ;
struct TYPE_3__ {int group; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (struct xt_action_param*) ;
 TYPE_1__* FUNC_1 (struct xt_action_param*) ;

__attribute__((used)) static bool FUNC_2(const struct sk_buff *VAR_4, struct xt_action_param *VAR_5)
{
 const struct xt_devgroup_info *VAR_6 = VAR_5->matchinfo;

 if (VAR_6->flags & VAR_3 &&
     (((VAR_6->src_group ^ FUNC_0(VAR_5)->group) & VAR_6->src_mask ? 1 : 0) ^
      ((VAR_6->flags & VAR_1) ? 1 : 0)))
  return 0;

 if (VAR_6->flags & VAR_2 &&
     (((VAR_6->dst_group ^ FUNC_1(VAR_5)->group) & VAR_6->dst_mask ? 1 : 0) ^
      ((VAR_6->flags & VAR_0) ? 1 : 0)))
  return 0;

 return 1;
}
