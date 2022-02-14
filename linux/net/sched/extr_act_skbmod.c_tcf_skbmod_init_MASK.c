
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct tcf_skbmod_params {int flags; int eth_type; int eth_src; int eth_dst; } ;
struct tcf_skbmod {int tcf_lock; int skbmod_p; } ;
struct tcf_proto {int dummy; } ;
struct tcf_chain {int dummy; } ;
struct tc_skbmod {int index; int flags; int action; } ;
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
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tcf_skbmod_params*,int ) ;
 struct tcf_skbmod_params* FUNC_3 (int,int ) ;
 struct tc_action_net* FUNC_4 (struct net*,int ) ;
 void* FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int VAR_15 ;
 int FUNC_8 (int ,struct tcf_skbmod_params*) ;
 struct tcf_skbmod_params* FUNC_9 (int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,struct tcf_proto*,struct tcf_chain**,struct netlink_ext_ack*) ;
 struct tcf_chain* FUNC_13 (struct tc_action*,int ,struct tcf_chain*) ;
 int FUNC_14 (struct tcf_chain*) ;
 int FUNC_15 (struct tc_action_net*,int*,struct tc_action**,int) ;
 int FUNC_16 (struct tc_action_net*,int) ;
 int FUNC_17 (struct tc_action_net*,int,struct nlattr*,struct tc_action**,int *,int,int) ;
 int FUNC_18 (struct tc_action_net*,struct tc_action*) ;
 int FUNC_19 (struct tc_action*,int) ;
 struct tcf_skbmod* FUNC_20 (struct tc_action*) ;
 scalar_t__ FUNC_21 (int) ;

__attribute__((used)) static int FUNC_22(struct net *VAR_18, struct nlattr *VAR_19,
      struct nlattr *VAR_20, struct tc_action **VAR_21,
      int VAR_22, int VAR_23, bool VAR_24,
      struct tcf_proto *VAR_25,
      struct netlink_ext_ack *VAR_26)
{
 struct tc_action_net *VAR_27 = FUNC_4(VAR_18, VAR_16);
 struct nlattr *VAR_28[VAR_11 + 1];
 struct tcf_skbmod_params *VAR_29, *VAR_30;
 struct tcf_chain *VAR_31 = ((void*)0);
 struct tc_skbmod *VAR_32;
 u32 VAR_33 = 0, VAR_34;
 struct tcf_skbmod *VAR_35;
 bool VAR_36 = 0;
 u8 *VAR_37 = ((void*)0);
 u8 *VAR_38 = ((void*)0);
 u16 VAR_39 = 0;
 int VAR_40 = 0, VAR_41;

 if (!VAR_19)
  return -VAR_2;

 VAR_41 = FUNC_7(VAR_28, VAR_11, VAR_19,
       VAR_17, ((void*)0));
 if (VAR_41 < 0)
  return VAR_41;

 if (!VAR_28[VAR_12])
  return -VAR_2;

 if (VAR_28[VAR_9]) {
  VAR_37 = FUNC_5(VAR_28[VAR_9]);
  VAR_33 |= VAR_5;
 }

 if (VAR_28[VAR_13]) {
  VAR_38 = FUNC_5(VAR_28[VAR_13]);
  VAR_33 |= VAR_7;
 }

 if (VAR_28[VAR_10]) {
  VAR_39 = FUNC_6(VAR_28[VAR_10]);
  VAR_33 |= VAR_6;
 }

 VAR_32 = FUNC_5(VAR_28[VAR_12]);
 VAR_34 = VAR_32->index;
 if (VAR_32->flags & VAR_8)
  VAR_33 = VAR_8;

 VAR_41 = FUNC_15(VAR_27, &VAR_34, VAR_21, VAR_23);
 if (VAR_41 < 0)
  return VAR_41;
 VAR_36 = VAR_41;
 if (VAR_36 && VAR_23)
  return 0;

 if (!VAR_33) {
  if (VAR_36)
   FUNC_19(*VAR_21, VAR_23);
  else
   FUNC_16(VAR_27, VAR_34);
  return -VAR_2;
 }

 if (!VAR_36) {
  VAR_40 = FUNC_17(VAR_27, VAR_34, VAR_20, VAR_21,
         &VAR_14, VAR_23, 1);
  if (VAR_40) {
   FUNC_16(VAR_27, VAR_34);
   return VAR_40;
  }

  VAR_40 = VAR_0;
 } else if (!VAR_22) {
  FUNC_19(*VAR_21, VAR_23);
  return -VAR_1;
 }
 VAR_41 = FUNC_12(VAR_32->action, VAR_25, &VAR_31, VAR_26);
 if (VAR_41 < 0)
  goto release_idr;

 VAR_35 = FUNC_20(*VAR_21);

 VAR_29 = FUNC_3(sizeof(struct tcf_skbmod_params), VAR_4);
 if (FUNC_21(!VAR_29)) {
  VAR_41 = -VAR_3;
  goto put_chain;
 }

 VAR_29->flags = VAR_33;

 if (VAR_22)
  FUNC_10(&VAR_35->tcf_lock);

 VAR_31 = FUNC_13(*VAR_21, VAR_32->action, VAR_31);
 VAR_30 = FUNC_9(VAR_35->skbmod_p, 1);

 if (VAR_33 & VAR_5)
  FUNC_0(VAR_29->eth_dst, VAR_37);
 if (VAR_33 & VAR_7)
  FUNC_0(VAR_29->eth_src, VAR_38);
 if (VAR_33 & VAR_6)
  VAR_29->eth_type = FUNC_1(VAR_39);

 FUNC_8(VAR_35->skbmod_p, VAR_29);
 if (VAR_22)
  FUNC_11(&VAR_35->tcf_lock);

 if (VAR_30)
  FUNC_2(VAR_30, VAR_15);
 if (VAR_31)
  FUNC_14(VAR_31);

 if (VAR_40 == VAR_0)
  FUNC_18(VAR_27, *VAR_21);
 return VAR_40;
put_chain:
 if (VAR_31)
  FUNC_14(VAR_31);
release_idr:
 FUNC_19(*VAR_21, VAR_23);
 return VAR_41;
}
