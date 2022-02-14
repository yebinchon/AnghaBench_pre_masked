
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_result {int dummy; } ;
struct tcf_ife_params {int flags; } ;
struct tcf_ife_info {int params; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 struct tcf_ife_params* FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct tc_action const*,struct tcf_result*) ;
 int FUNC_2 (struct sk_buff*,struct tc_action const*,struct tcf_result*,struct tcf_ife_params*) ;
 struct tcf_ife_info* FUNC_3 (struct tc_action const*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1, const struct tc_action *VAR_2,
         struct tcf_result *VAR_3)
{
 struct tcf_ife_info *VAR_4 = FUNC_3(VAR_2);
 struct tcf_ife_params *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_4->params);
 if (VAR_5->flags & VAR_0) {
  VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_5);
  return VAR_6;
 }

 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
