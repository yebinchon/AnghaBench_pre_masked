
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct tcf_vlan_params {int tcfv_action; int tcfv_push_vid; int tcfv_push_prio; int tcfv_push_proto; } ;
struct TYPE_2__ {int cpu_qstats; int cpu_bstats; } ;
struct tcf_vlan {TYPE_1__ common; int vlan_p; int tcf_action; int tcf_tm; } ;
struct tcf_result {int dummy; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int mac_len; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct sk_buff*,int*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ,int) ;
 int FUNC_5 (int ,struct sk_buff*) ;
 int FUNC_6 (int ) ;
 struct tcf_vlan_params* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,int ,int) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 struct tcf_vlan* FUNC_18 (struct tc_action const*) ;

__attribute__((used)) static int FUNC_19(struct sk_buff *VAR_4, const struct tc_action *VAR_5,
   struct tcf_result *VAR_6)
{
 struct tcf_vlan *VAR_7 = FUNC_18(VAR_5);
 struct tcf_vlan_params *VAR_8;
 int VAR_9;
 int VAR_10;
 u16 VAR_11;

 FUNC_16(&VAR_7->tcf_tm);
 FUNC_5(FUNC_17(VAR_7->common.cpu_bstats), VAR_4);




 if (FUNC_8(VAR_4))
  FUNC_10(VAR_4, VAR_4->mac_len);

 VAR_9 = FUNC_1(VAR_7->tcf_action);

 VAR_8 = FUNC_7(VAR_7->vlan_p);

 switch (VAR_8->tcfv_action) {
 case 129:
  VAR_10 = FUNC_11(VAR_4);
  if (VAR_10)
   goto drop;
  break;
 case 128:
  VAR_10 = FUNC_12(VAR_4, VAR_8->tcfv_push_proto, VAR_8->tcfv_push_vid |
        (VAR_8->tcfv_push_prio << VAR_2));
  if (VAR_10)
   goto drop;
  break;
 case 130:

  if (!FUNC_15(VAR_4))
   goto out;

  if (FUNC_14(VAR_4)) {
   VAR_11 = FUNC_13(VAR_4);
   FUNC_3(VAR_4);
  } else {

   VAR_10 = FUNC_2(VAR_4, &VAR_11);
   if (VAR_10)
    goto drop;
  }

  VAR_11 = (VAR_11 & ~VAR_3) | VAR_8->tcfv_push_vid;

  if (VAR_8->tcfv_push_prio) {
   VAR_11 &= ~VAR_1;
   VAR_11 |= VAR_8->tcfv_push_prio << VAR_2;
  }

  FUNC_4(VAR_4, VAR_8->tcfv_push_proto, VAR_11);
  break;
 default:
  FUNC_0();
 }

out:
 if (FUNC_8(VAR_4))
  FUNC_9(VAR_4, VAR_4->mac_len);

 return VAR_9;

drop:
 FUNC_6(FUNC_17(VAR_7->common.cpu_qstats));
 return VAR_0;
}
