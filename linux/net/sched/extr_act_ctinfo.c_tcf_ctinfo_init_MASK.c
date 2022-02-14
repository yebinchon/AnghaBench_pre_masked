
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tcf_proto {int dummy; } ;
struct tcf_ctinfo_params {int dscpmask; int dscpmaskshift; int dscpstatemask; int mode; void* cpmarkmask; int zone; struct net* net; } ;
struct tcf_ctinfo {int tcf_lock; int params; } ;
struct tcf_chain {int dummy; } ;
struct tc_ctinfo {int index; int action; } ;
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
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct netlink_ext_ack*,struct nlattr*,char*) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_2 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct tcf_ctinfo_params*,int ) ;
 struct tcf_ctinfo_params* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 struct tc_action_net* FUNC_6 (struct net*,int ) ;
 struct tc_ctinfo* FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct nlattr*) ;
 void* FUNC_9 (struct nlattr*) ;
 int FUNC_10 (struct nlattr**,int ,struct nlattr*,int ,struct netlink_ext_ack*) ;
 int VAR_16 ;
 int FUNC_11 (int ,struct tcf_ctinfo_params*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,struct tcf_proto*,struct tcf_chain**,struct netlink_ext_ack*) ;
 struct tcf_chain* FUNC_15 (struct tc_action*,int ,struct tcf_chain*) ;
 int FUNC_16 (struct tcf_chain*) ;
 int FUNC_17 (struct tc_action_net*,int*,struct tc_action**,int) ;
 int FUNC_18 (struct tc_action_net*,int) ;
 int FUNC_19 (struct tc_action_net*,int,struct nlattr*,struct tc_action**,int *,int,int) ;
 int FUNC_20 (struct tc_action_net*,struct tc_action*) ;
 int FUNC_21 (struct tc_action*,int) ;
 struct tcf_ctinfo* FUNC_22 (struct tc_action*) ;
 scalar_t__ FUNC_23 (int) ;

__attribute__((used)) static int FUNC_24(struct net *VAR_17, struct nlattr *VAR_18,
      struct nlattr *VAR_19, struct tc_action **VAR_20,
      int VAR_21, int VAR_22, bool VAR_23,
      struct tcf_proto *VAR_24,
      struct netlink_ext_ack *VAR_25)
{
 struct tc_action_net *VAR_26 = FUNC_6(VAR_17, VAR_14);
 u32 VAR_27 = 0, VAR_28, VAR_29;
 struct nlattr *VAR_30[VAR_8 + 1];
 struct tcf_ctinfo_params *VAR_31;
 struct tcf_chain *VAR_32 = ((void*)0);
 struct tc_ctinfo *VAR_33;
 struct tcf_ctinfo *VAR_34;
 u8 VAR_35;
 int VAR_36 = 0, VAR_37;

 if (!VAR_18) {
  FUNC_1(VAR_25, "ctinfo requires attributes to be passed");
  return -VAR_4;
 }

 VAR_37 = FUNC_10(VAR_30, VAR_8, VAR_18, VAR_15, VAR_25);
 if (VAR_37 < 0)
  return VAR_37;

 if (!VAR_30[VAR_7]) {
  FUNC_1(VAR_25,
       "Missing required TCA_CTINFO_ACT attribute");
  return -VAR_4;
 }
 VAR_33 = FUNC_7(VAR_30[VAR_7]);



 if (VAR_30[VAR_10]) {
  VAR_27 = FUNC_9(VAR_30[VAR_10]);

  VAR_35 = VAR_27 ? FUNC_2(VAR_27) : 0;
  if ((~0 & (VAR_27 >> VAR_35)) != 0x3f) {
   FUNC_0(VAR_25,
         VAR_30[VAR_10],
         "dscp mask must be 6 contiguous bits");
   return -VAR_4;
  }
  VAR_28 = VAR_30[VAR_11] ?
   FUNC_9(VAR_30[VAR_11]) : 0;

  if (VAR_27 & VAR_28) {
   FUNC_0(VAR_25,
         VAR_30[VAR_11],
         "dscp statemask must not overlap dscp mask");
   return -VAR_4;
  }
 }


 VAR_29 = VAR_33->index;
 VAR_37 = FUNC_17(VAR_26, &VAR_29, VAR_20, VAR_22);
 if (!VAR_37) {
  VAR_36 = FUNC_19(VAR_26, VAR_29, VAR_19, VAR_20,
         &VAR_13, VAR_22, 0);
  if (VAR_36) {
   FUNC_18(VAR_26, VAR_29);
   return VAR_36;
  }
  VAR_36 = VAR_0;
 } else if (VAR_37 > 0) {
  if (VAR_22)
   return 0;
  if (!VAR_21) {
   FUNC_21(*VAR_20, VAR_22);
   return -VAR_3;
  }
 } else {
  return VAR_37;
 }

 VAR_37 = FUNC_14(VAR_33->action, VAR_24, &VAR_32, VAR_25);
 if (VAR_37 < 0)
  goto release_idr;

 VAR_34 = FUNC_22(*VAR_20);

 VAR_31 = FUNC_4(sizeof(*VAR_31), VAR_6);
 if (FUNC_23(!VAR_31)) {
  VAR_37 = -VAR_5;
  goto put_chain;
 }

 VAR_31->net = VAR_17;
 VAR_31->zone = VAR_30[VAR_12] ?
   FUNC_8(VAR_30[VAR_12]) : 0;
 if (VAR_27) {
  VAR_31->dscpmask = VAR_27;
  VAR_31->dscpmaskshift = VAR_35;
  VAR_31->dscpstatemask = VAR_28;
  VAR_31->mode |= VAR_2;
 }

 if (VAR_30[VAR_9]) {
  VAR_31->cpmarkmask =
    FUNC_9(VAR_30[VAR_9]);
  VAR_31->mode |= VAR_1;
 }

 FUNC_12(&VAR_34->tcf_lock);
 VAR_32 = FUNC_15(*VAR_20, VAR_33->action, VAR_32);
 FUNC_11(VAR_34->params, VAR_31,
      FUNC_5(&VAR_34->tcf_lock));
 FUNC_13(&VAR_34->tcf_lock);

 if (VAR_32)
  FUNC_16(VAR_32);
 if (VAR_31)
  FUNC_3(VAR_31, VAR_16);

 if (VAR_36 == VAR_0)
  FUNC_20(VAR_26, *VAR_20);

 return VAR_36;

put_chain:
 if (VAR_32)
  FUNC_16(VAR_32);
release_idr:
 FUNC_21(*VAR_20, VAR_22);
 return VAR_37;
}
