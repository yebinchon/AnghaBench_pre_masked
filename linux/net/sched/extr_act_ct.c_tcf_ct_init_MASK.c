
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_proto {int dummy; } ;
struct tcf_ct_params {int dummy; } ;
struct tcf_ct {int tcf_lock; int params; } ;
struct tcf_chain {int dummy; } ;
struct tc_ct {int action; int index; } ;
struct tc_action_net {int dummy; } ;
struct tc_action {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct tcf_ct_params*) ;
 int FUNC_2 (struct tcf_ct_params*,int ) ;
 struct tcf_ct_params* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 struct tc_action_net* FUNC_5 (struct net*,int ) ;
 struct tc_ct* FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr**,int ,struct nlattr*,int ,struct netlink_ext_ack*) ;
 int VAR_10 ;
 int FUNC_8 (int ,struct tcf_ct_params*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,struct tcf_proto*,struct tcf_chain**,struct netlink_ext_ack*) ;
 struct tcf_chain* FUNC_12 (struct tc_action*,int ,struct tcf_chain*) ;
 int FUNC_13 (struct tcf_chain*) ;
 int FUNC_14 (struct net*,struct tcf_ct_params*,struct tc_ct*,struct nlattr**,struct netlink_ext_ack*) ;
 int FUNC_15 (struct tc_action_net*,int *,struct tc_action**,int) ;
 int FUNC_16 (struct tc_action_net*,int ) ;
 int FUNC_17 (struct tc_action_net*,int ,struct nlattr*,struct tc_action**,int *,int,int) ;
 int FUNC_18 (struct tc_action_net*,struct tc_action*) ;
 int FUNC_19 (struct tc_action*,int) ;
 struct tcf_ct* FUNC_20 (struct tc_action*) ;
 scalar_t__ FUNC_21 (int) ;

__attribute__((used)) static int FUNC_22(struct net *VAR_11, struct nlattr *VAR_12,
         struct nlattr *VAR_13, struct tc_action **VAR_14,
         int VAR_15, int VAR_16, bool VAR_17,
         struct tcf_proto *VAR_18,
         struct netlink_ext_ack *VAR_19)
{
 struct tc_action_net *VAR_20 = FUNC_5(VAR_11, VAR_8);
 struct tcf_ct_params *VAR_21 = ((void*)0);
 struct nlattr *VAR_22[VAR_5 + 1];
 struct tcf_chain *VAR_23 = ((void*)0);
 struct tc_ct *VAR_24;
 struct tcf_ct *VAR_25;
 int VAR_26, VAR_27 = 0;
 u32 VAR_28;

 if (!VAR_12) {
  FUNC_0(VAR_19, "Ct requires attributes to be passed");
  return -VAR_2;
 }

 VAR_26 = FUNC_7(VAR_22, VAR_5, VAR_12, VAR_9, VAR_19);
 if (VAR_26 < 0)
  return VAR_26;

 if (!VAR_22[VAR_6]) {
  FUNC_0(VAR_19, "Missing required ct parameters");
  return -VAR_2;
 }
 VAR_24 = FUNC_6(VAR_22[VAR_6]);
 VAR_28 = VAR_24->index;
 VAR_26 = FUNC_15(VAR_20, &VAR_28, VAR_14, VAR_16);
 if (VAR_26 < 0)
  return VAR_26;

 if (!VAR_26) {
  VAR_26 = FUNC_17(VAR_20, VAR_28, VAR_13, VAR_14,
         &VAR_7, VAR_16, 1);
  if (VAR_26) {
   FUNC_16(VAR_20, VAR_28);
   return VAR_26;
  }
  VAR_27 = VAR_0;
 } else {
  if (VAR_16)
   return 0;

  if (!VAR_15) {
   FUNC_19(*VAR_14, VAR_16);
   return -VAR_1;
  }
 }
 VAR_26 = FUNC_11(VAR_24->action, VAR_18, &VAR_23, VAR_19);
 if (VAR_26 < 0)
  goto cleanup;

 VAR_25 = FUNC_20(*VAR_14);

 VAR_21 = FUNC_3(sizeof(*VAR_21), VAR_4);
 if (FUNC_21(!VAR_21)) {
  VAR_26 = -VAR_3;
  goto cleanup;
 }

 VAR_26 = FUNC_14(VAR_11, VAR_21, VAR_24, VAR_22, VAR_19);
 if (VAR_26)
  goto cleanup;

 FUNC_9(&VAR_25->tcf_lock);
 VAR_23 = FUNC_12(*VAR_14, VAR_24->action, VAR_23);
 FUNC_8(VAR_25->params, VAR_21, FUNC_4(&VAR_25->tcf_lock));
 FUNC_10(&VAR_25->tcf_lock);

 if (VAR_23)
  FUNC_13(VAR_23);
 if (VAR_21)
  FUNC_2(VAR_21, VAR_10);
 if (VAR_27 == VAR_0)
  FUNC_18(VAR_20, *VAR_14);

 return VAR_27;

cleanup:
 if (VAR_23)
  FUNC_13(VAR_23);
 FUNC_1(VAR_21);
 FUNC_19(*VAR_14, VAR_16);
 return VAR_26;
}
