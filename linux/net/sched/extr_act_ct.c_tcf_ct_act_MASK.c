
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tcf_result {int dummy; } ;
struct tcf_ct_params {int ct_action; int labels_mask; int labels; int mark_mask; int mark; int range; int zone; struct nf_conn* tmpl; } ;
struct tcf_ct {int tcf_action; int params; } ;
struct tc_action {int cpu_qstats; int cpu_bstats; } ;
struct sk_buff {int dev; } ;
struct nf_hook_state {scalar_t__ pf; struct net* net; int hook; } ;
struct nf_conn {int ct_general; } ;
struct net {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,struct sk_buff*) ;
 struct net* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*,struct nf_hook_state*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nf_conn*) ;
 struct nf_conn* FUNC_8 (struct sk_buff*,int*) ;
 int FUNC_9 (struct sk_buff*,struct nf_conn*,int ) ;
 int FUNC_10 (int ) ;
 struct tcf_ct_params* FUNC_11 (int ) ;
 int FUNC_12 (struct sk_buff*) ;
 int * FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (struct sk_buff*,struct nf_conn*,int,int,int *,int) ;
 int FUNC_17 (struct nf_conn*,int ,int ) ;
 int FUNC_18 (struct nf_conn*,int ,int ) ;
 int FUNC_19 (struct net*,struct sk_buff*,scalar_t__,int ) ;
 int FUNC_20 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct net*,struct sk_buff*,int ,int) ;
 int FUNC_23 (int ) ;
 struct tcf_ct* FUNC_24 (struct tc_action const*) ;

__attribute__((used)) static int FUNC_25(struct sk_buff *VAR_11, const struct tc_action *VAR_12,
        struct tcf_result *VAR_13)
{
 struct net *VAR_14 = FUNC_2(VAR_11->dev);
 bool VAR_15, VAR_16, VAR_17, VAR_18;
 enum ip_conntrack_info VAR_19;
 struct tcf_ct *VAR_20 = FUNC_24(VAR_12);
 struct nf_conn *VAR_21 = ((void*)0);
 struct nf_hook_state VAR_22;
 int VAR_23, VAR_24, VAR_25;
 struct tcf_ct_params *VAR_26;
 struct nf_conn *VAR_27;
 u8 VAR_28;

 VAR_26 = FUNC_11(VAR_20->params);

 VAR_25 = FUNC_0(VAR_20->tcf_action);
 VAR_16 = VAR_26->ct_action & VAR_7;
 VAR_17 = VAR_26->ct_action & VAR_6;
 VAR_18 = VAR_26->ct_action & VAR_8;
 VAR_21 = VAR_26->tmpl;

 if (VAR_17) {
  VAR_27 = FUNC_8(VAR_11, &VAR_19);
  if (VAR_27) {
   FUNC_6(&VAR_27->ct_general);
   FUNC_9(VAR_11, ((void*)0), VAR_2);
  }

  goto out;
 }

 VAR_28 = FUNC_21(VAR_11);
 if (VAR_28 == VAR_3)
  goto drop;




 VAR_23 = FUNC_12(VAR_11);
 FUNC_14(VAR_11, VAR_23);
 VAR_24 = FUNC_19(VAR_14, VAR_11, VAR_28, VAR_26->zone);
 if (VAR_24 == -VAR_0) {
  VAR_25 = VAR_10;
  goto out;
 }
 if (VAR_24)
  goto drop;

 VAR_24 = FUNC_20(VAR_11, VAR_28);
 if (VAR_24)
  goto drop;






 VAR_15 = FUNC_22(VAR_14, VAR_11, VAR_26->zone, VAR_18);
 if (!VAR_15) {

  if (VAR_21) {
   VAR_27 = FUNC_8(VAR_11, &VAR_19);
   if (FUNC_13(VAR_11))
    FUNC_6(FUNC_13(VAR_11));
   FUNC_4(&VAR_21->ct_general);
   FUNC_9(VAR_11, VAR_21, VAR_1);
  }

  VAR_22.hook = VAR_5;
  VAR_22.net = VAR_14;
  VAR_22.pf = VAR_28;
  VAR_24 = FUNC_5(VAR_11, &VAR_22);
  if (VAR_24 != VAR_4)
   goto out_push;
 }

 VAR_27 = FUNC_8(VAR_11, &VAR_19);
 if (!VAR_27)
  goto out_push;
 FUNC_7(VAR_27);

 VAR_24 = FUNC_16(VAR_11, VAR_27, VAR_19, VAR_26->ct_action, &VAR_26->range, VAR_16);
 if (VAR_24 != VAR_4)
  goto drop;

 if (VAR_16) {
  FUNC_18(VAR_27, VAR_26->mark, VAR_26->mark_mask);
  FUNC_17(VAR_27, VAR_26->labels, VAR_26->labels_mask);




  FUNC_3(VAR_11);
 }

out_push:
 FUNC_15(VAR_11, VAR_23);

out:
 FUNC_1(FUNC_23(VAR_12->cpu_bstats), VAR_11);
 return VAR_25;

drop:
 FUNC_10(FUNC_23(VAR_12->cpu_qstats));
 return VAR_9;
}
