
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcf_tunnel_key_params {int tcft_action; TYPE_2__* tcft_enc_metadata; } ;
struct TYPE_3__ {int cpu_bstats; } ;
struct tcf_tunnel_key {int tcf_action; TYPE_1__ common; int tcf_tm; int params; } ;
struct tcf_result {int dummy; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int dst; } ;


 int FUNC_0 (int ) ;


 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 int FUNC_3 (int *) ;
 struct tcf_tunnel_key_params* FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 struct tcf_tunnel_key* FUNC_9 (struct tc_action const*) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_0, const struct tc_action *VAR_1,
     struct tcf_result *VAR_2)
{
 struct tcf_tunnel_key *VAR_3 = FUNC_9(VAR_1);
 struct tcf_tunnel_key_params *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(VAR_3->params);

 FUNC_7(&VAR_3->tcf_tm);
 FUNC_2(FUNC_8(VAR_3->common.cpu_bstats), VAR_0);
 VAR_5 = FUNC_0(VAR_3->tcf_action);

 switch (VAR_4->tcft_action) {
 case 129:
  FUNC_5(VAR_0);
  break;
 case 128:
  FUNC_5(VAR_0);
  FUNC_6(VAR_0, FUNC_3(&VAR_4->tcft_enc_metadata->dst));
  break;
 default:
  FUNC_1(1, "Bad tunnel_key action %d.\n",
     VAR_4->tcft_action);
  break;
 }

 return VAR_5;
}
