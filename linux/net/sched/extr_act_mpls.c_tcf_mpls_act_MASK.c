
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_result {int dummy; } ;
struct tcf_mpls_params {int tcfm_action; int tcfm_proto; } ;
struct TYPE_2__ {int cpu_qstats; int cpu_bstats; } ;
struct tcf_mpls {TYPE_1__ common; int mpls_p; int tcf_action; int tcf_tm; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int mac_len; int protocol; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 struct tcf_mpls_params* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int ,int) ;
 int FUNC_10 (struct sk_buff*,int ,int ,int) ;
 int FUNC_11 (struct sk_buff*,int ) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,struct tcf_mpls_params*,int) ;
 int FUNC_17 (int ) ;
 struct tcf_mpls* FUNC_18 (struct tc_action const*) ;

__attribute__((used)) static int FUNC_19(struct sk_buff *VAR_1, const struct tc_action *VAR_2,
   struct tcf_result *VAR_3)
{
 struct tcf_mpls *VAR_4 = FUNC_18(VAR_2);
 struct tcf_mpls_params *VAR_5;
 __be32 VAR_6;
 int VAR_7, VAR_8;

 FUNC_15(&VAR_4->tcf_tm);
 FUNC_1(FUNC_17(VAR_4->common.cpu_bstats), VAR_1);




 if (FUNC_6(VAR_1)) {
  FUNC_14(VAR_1, VAR_1->mac_len);
  VAR_8 = VAR_1->mac_len;
 } else {
  VAR_8 = FUNC_12(VAR_1) - FUNC_7(VAR_1);
 }

 VAR_7 = FUNC_0(VAR_4->tcf_action);

 VAR_5 = FUNC_5(VAR_4->mpls_p);

 switch (VAR_5->tcfm_action) {
 case 129:
  if (FUNC_9(VAR_1, VAR_5->tcfm_proto, VAR_8))
   goto drop;
  break;
 case 128:
  VAR_6 = FUNC_16(((void*)0), VAR_5, !FUNC_2(VAR_1->protocol));
  if (FUNC_10(VAR_1, VAR_6, VAR_5->tcfm_proto, VAR_8))
   goto drop;
  break;
 case 130:
  VAR_6 = FUNC_16(FUNC_3(VAR_1), VAR_5, 0);
  if (FUNC_11(VAR_1, VAR_6))
   goto drop;
  break;
 case 131:
  if (FUNC_8(VAR_1))
   goto drop;
  break;
 }

 if (FUNC_6(VAR_1))
  FUNC_13(VAR_1, VAR_1->mac_len);

 return VAR_7;

drop:
 FUNC_4(FUNC_17(VAR_4->common.cpu_qstats));
 return VAR_0;
}
