
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {struct xt_ct_target_info* targinfo; } ;
struct xt_ct_target_info_v1 {int flags; int ct; int helper; int exp_events; int ct_events; int zone; } ;
struct xt_ct_target_info {int flags; int ct; int helper; int exp_events; int ct_events; int zone; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct xt_tgchk_param const*,struct xt_ct_target_info_v1*) ;

__attribute__((used)) static int FUNC_2(const struct xt_tgchk_param *VAR_2)
{
 struct xt_ct_target_info *VAR_3 = VAR_2->targinfo;
 struct xt_ct_target_info_v1 VAR_4 = {
  .flags = VAR_3->flags,
  .zone = VAR_3->zone,
  .ct_events = VAR_3->ct_events,
  .exp_events = VAR_3->exp_events,
 };
 int VAR_5;

 if (VAR_3->flags & ~VAR_1)
  return -VAR_0;

 FUNC_0(VAR_4, VAR_3->helper, sizeof(VAR_3->helper));

 VAR_5 = FUNC_1(VAR_2, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_3->ct = VAR_4;

 return VAR_5;
}
