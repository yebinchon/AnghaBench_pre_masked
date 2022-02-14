
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef void* u16 ;
struct tcf_skbedit_params {int flags; int priority; int mark; int mask; void* ptype; void* queue_mapping; } ;
struct tcf_skbedit {int tcf_lock; int params; } ;
struct tcf_proto {int dummy; } ;
struct tcf_chain {int dummy; } ;
struct tc_skbedit {int index; int action; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct tcf_skbedit_params*,int ) ;
 struct tcf_skbedit_params* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 struct tc_action_net* FUNC_3 (struct net*,int ) ;
 void* FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int VAR_20 ;
 int FUNC_6 (int ,struct tcf_skbedit_params*,int ) ;
 int FUNC_7 (void*) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,struct tcf_proto*,struct tcf_chain**,struct netlink_ext_ack*) ;
 struct tcf_chain* FUNC_11 (struct tc_action*,int ,struct tcf_chain*) ;
 int FUNC_12 (struct tcf_chain*) ;
 int FUNC_13 (struct tc_action_net*,int*,struct tc_action**,int) ;
 int FUNC_14 (struct tc_action_net*,int) ;
 int FUNC_15 (struct tc_action_net*,int,struct nlattr*,struct tc_action**,int *,int,int) ;
 int FUNC_16 (struct tc_action_net*,struct tc_action*) ;
 int FUNC_17 (struct tc_action*,int) ;
 struct tcf_skbedit* FUNC_18 (struct tc_action*) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static int FUNC_20(struct net *VAR_23, struct nlattr *VAR_24,
       struct nlattr *VAR_25, struct tc_action **VAR_26,
       int VAR_27, int VAR_28, bool VAR_29,
       struct tcf_proto *VAR_30,
       struct netlink_ext_ack *VAR_31)
{
 struct tc_action_net *VAR_32 = FUNC_3(VAR_23, VAR_21);
 struct tcf_skbedit_params *VAR_33;
 struct nlattr *VAR_34[VAR_14 + 1];
 struct tcf_chain *VAR_35 = ((void*)0);
 struct tc_skbedit *VAR_36;
 struct tcf_skbedit *VAR_37;
 u32 VAR_38 = 0, *VAR_39 = ((void*)0), *VAR_40 = ((void*)0), *VAR_41 = ((void*)0);
 u16 *VAR_42 = ((void*)0), *VAR_43 = ((void*)0);
 bool VAR_44 = 0;
 int VAR_45 = 0, VAR_46;
 u32 VAR_47;

 if (VAR_24 == ((void*)0))
  return -VAR_2;

 VAR_46 = FUNC_5(VAR_34, VAR_14, VAR_24,
       VAR_22, ((void*)0));
 if (VAR_46 < 0)
  return VAR_46;

 if (VAR_34[VAR_15] == ((void*)0))
  return -VAR_2;

 if (VAR_34[VAR_16] != ((void*)0)) {
  VAR_38 |= VAR_8;
  VAR_39 = FUNC_4(VAR_34[VAR_16]);
 }

 if (VAR_34[VAR_18] != ((void*)0)) {
  VAR_38 |= VAR_10;
  VAR_42 = FUNC_4(VAR_34[VAR_18]);
 }

 if (VAR_34[VAR_17] != ((void*)0)) {
  VAR_43 = FUNC_4(VAR_34[VAR_17]);
  if (!FUNC_7(*VAR_43))
   return -VAR_2;
  VAR_38 |= VAR_9;
 }

 if (VAR_34[VAR_12] != ((void*)0)) {
  VAR_38 |= VAR_6;
  VAR_40 = FUNC_4(VAR_34[VAR_12]);
 }

 if (VAR_34[VAR_13] != ((void*)0)) {
  VAR_38 |= VAR_7;
  VAR_41 = FUNC_4(VAR_34[VAR_13]);
 }

 if (VAR_34[VAR_11] != ((void*)0)) {
  u64 *VAR_48 = FUNC_4(VAR_34[VAR_11]);

  if (*VAR_48 & VAR_5)
   VAR_38 |= VAR_5;
 }

 VAR_36 = FUNC_4(VAR_34[VAR_15]);
 VAR_47 = VAR_36->index;
 VAR_46 = FUNC_13(VAR_32, &VAR_47, VAR_26, VAR_28);
 if (VAR_46 < 0)
  return VAR_46;
 VAR_44 = VAR_46;
 if (VAR_44 && VAR_28)
  return 0;

 if (!VAR_38) {
  if (VAR_44)
   FUNC_17(*VAR_26, VAR_28);
  else
   FUNC_14(VAR_32, VAR_47);
  return -VAR_2;
 }

 if (!VAR_44) {
  VAR_45 = FUNC_15(VAR_32, VAR_47, VAR_25, VAR_26,
         &VAR_19, VAR_28, 1);
  if (VAR_45) {
   FUNC_14(VAR_32, VAR_47);
   return VAR_45;
  }

  VAR_37 = FUNC_18(*VAR_26);
  VAR_45 = VAR_0;
 } else {
  VAR_37 = FUNC_18(*VAR_26);
  if (!VAR_27) {
   FUNC_17(*VAR_26, VAR_28);
   return -VAR_1;
  }
 }
 VAR_46 = FUNC_10(VAR_36->action, VAR_30, &VAR_35, VAR_31);
 if (VAR_46 < 0)
  goto release_idr;

 VAR_33 = FUNC_1(sizeof(*VAR_33), VAR_4);
 if (FUNC_19(!VAR_33)) {
  VAR_46 = -VAR_3;
  goto put_chain;
 }

 VAR_33->flags = VAR_38;
 if (VAR_38 & VAR_8)
  VAR_33->priority = *VAR_39;
 if (VAR_38 & VAR_10)
  VAR_33->queue_mapping = *VAR_42;
 if (VAR_38 & VAR_6)
  VAR_33->mark = *VAR_40;
 if (VAR_38 & VAR_9)
  VAR_33->ptype = *VAR_43;

 VAR_33->mask = 0xffffffff;
 if (VAR_38 & VAR_7)
  VAR_33->mask = *VAR_41;

 FUNC_8(&VAR_37->tcf_lock);
 VAR_35 = FUNC_11(*VAR_26, VAR_36->action, VAR_35);
 FUNC_6(VAR_37->params, VAR_33,
      FUNC_2(&VAR_37->tcf_lock));
 FUNC_9(&VAR_37->tcf_lock);
 if (VAR_33)
  FUNC_0(VAR_33, VAR_20);
 if (VAR_35)
  FUNC_12(VAR_35);

 if (VAR_45 == VAR_0)
  FUNC_16(VAR_32, *VAR_26);
 return VAR_45;
put_chain:
 if (VAR_35)
  FUNC_12(VAR_35);
release_idr:
 FUNC_17(*VAR_26, VAR_28);
 return VAR_46;
}
