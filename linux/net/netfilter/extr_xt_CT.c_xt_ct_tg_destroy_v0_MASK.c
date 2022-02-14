
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgdtor_param {struct xt_ct_target_info* targinfo; } ;
struct xt_ct_target_info_v1 {int helper; int ct; int exp_events; int ct_events; int zone; int flags; } ;
struct xt_ct_target_info {int helper; int ct; int exp_events; int ct_events; int zone; int flags; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct xt_tgdtor_param const*,struct xt_ct_target_info_v1*) ;

__attribute__((used)) static void FUNC_2(const struct xt_tgdtor_param *VAR_0)
{
 struct xt_ct_target_info *VAR_1 = VAR_0->targinfo;
 struct xt_ct_target_info_v1 VAR_2 = {
  .flags = VAR_1->flags,
  .zone = VAR_1->zone,
  .ct_events = VAR_1->ct_events,
  .exp_events = VAR_1->exp_events,
  .ct = VAR_1->ct,
 };
 FUNC_0(VAR_2, VAR_1->helper, sizeof(VAR_1->helper));

 FUNC_1(VAR_0, &VAR_2);
}
