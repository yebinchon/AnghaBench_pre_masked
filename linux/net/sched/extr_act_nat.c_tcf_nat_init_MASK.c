
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_proto {int dummy; } ;
struct tcf_nat {int tcf_lock; int flags; int mask; int new_addr; int old_addr; } ;
struct tcf_chain {int dummy; } ;
struct tc_nat {int action; int flags; int mask; int new_addr; int old_addr; int index; } ;
struct tc_action_net {int dummy; } ;
struct tc_action {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct tc_action_net* FUNC_0 (struct net*,int ) ;
 struct tc_nat* FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct tcf_proto*,struct tcf_chain**,struct netlink_ext_ack*) ;
 struct tcf_chain* FUNC_6 (struct tc_action*,int ,struct tcf_chain*) ;
 int FUNC_7 (struct tcf_chain*) ;
 int FUNC_8 (struct tc_action_net*,int *,struct tc_action**,int) ;
 int FUNC_9 (struct tc_action_net*,int ) ;
 int FUNC_10 (struct tc_action_net*,int ,struct nlattr*,struct tc_action**,int *,int,int) ;
 int FUNC_11 (struct tc_action_net*,struct tc_action*) ;
 int FUNC_12 (struct tc_action*,int) ;
 struct tcf_nat* FUNC_13 (struct tc_action*) ;

__attribute__((used)) static int FUNC_14(struct net *VAR_8, struct nlattr *VAR_9, struct nlattr *VAR_10,
   struct tc_action **VAR_11, int VAR_12, int VAR_13,
   bool VAR_14, struct tcf_proto *VAR_15,
   struct netlink_ext_ack *VAR_16)
{
 struct tc_action_net *VAR_17 = FUNC_0(VAR_8, VAR_6);
 struct nlattr *VAR_18[VAR_3 + 1];
 struct tcf_chain *VAR_19 = ((void*)0);
 struct tc_nat *VAR_20;
 int VAR_21 = 0, VAR_22;
 struct tcf_nat *VAR_23;
 u32 VAR_24;

 if (VAR_9 == ((void*)0))
  return -VAR_2;

 VAR_22 = FUNC_2(VAR_18, VAR_3, VAR_9, VAR_7,
       ((void*)0));
 if (VAR_22 < 0)
  return VAR_22;

 if (VAR_18[VAR_4] == ((void*)0))
  return -VAR_2;
 VAR_20 = FUNC_1(VAR_18[VAR_4]);
 VAR_24 = VAR_20->index;
 VAR_22 = FUNC_8(VAR_17, &VAR_24, VAR_11, VAR_13);
 if (!VAR_22) {
  VAR_21 = FUNC_10(VAR_17, VAR_24, VAR_10, VAR_11,
         &VAR_5, VAR_13, 0);
  if (VAR_21) {
   FUNC_9(VAR_17, VAR_24);
   return VAR_21;
  }
  VAR_21 = VAR_0;
 } else if (VAR_22 > 0) {
  if (VAR_13)
   return 0;
  if (!VAR_12) {
   FUNC_12(*VAR_11, VAR_13);
   return -VAR_1;
  }
 } else {
  return VAR_22;
 }
 VAR_22 = FUNC_5(VAR_20->action, VAR_15, &VAR_19, VAR_16);
 if (VAR_22 < 0)
  goto release_idr;
 VAR_23 = FUNC_13(*VAR_11);

 FUNC_3(&VAR_23->tcf_lock);
 VAR_23->old_addr = VAR_20->old_addr;
 VAR_23->new_addr = VAR_20->new_addr;
 VAR_23->mask = VAR_20->mask;
 VAR_23->flags = VAR_20->flags;

 VAR_19 = FUNC_6(*VAR_11, VAR_20->action, VAR_19);
 FUNC_4(&VAR_23->tcf_lock);
 if (VAR_19)
  FUNC_7(VAR_19);

 if (VAR_21 == VAR_0)
  FUNC_11(VAR_17, *VAR_11);

 return VAR_21;
release_idr:
 FUNC_12(*VAR_11, VAR_13);
 return VAR_22;
}
