
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcf_result {int dummy; } ;
struct TYPE_2__ {int cpu_qstats; int cpu_bstats; } ;
struct tcf_gact {int tcf_tm; TYPE_1__ common; int tcfg_ptype; int tcf_action; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (struct tcf_gact*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tcf_gact*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 struct tcf_gact* FUNC_7 (struct tc_action const*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_1, const struct tc_action *VAR_2,
   struct tcf_result *VAR_3)
{
 struct tcf_gact *VAR_4 = FUNC_7(VAR_2);
 int VAR_5 = FUNC_0(VAR_4->tcf_action);
 FUNC_1(FUNC_6(VAR_4->common.cpu_bstats), VAR_1);
 if (VAR_5 == VAR_0)
  FUNC_3(FUNC_6(VAR_4->common.cpu_qstats));

 FUNC_5(&VAR_4->tcf_tm);

 return VAR_5;
}
