
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_proto {int dummy; } ;
struct tcf_csum_params {int update_flags; } ;
struct tcf_csum {int tcf_lock; int params; } ;
struct tcf_chain {int dummy; } ;
struct tc_csum {int action; int update_flags; int index; } ;
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
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct tcf_csum_params*,int ) ;
 struct tcf_csum_params* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 struct tc_action_net* FUNC_3 (struct net*,int ) ;
 struct tc_csum* FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int VAR_10 ;
 int FUNC_6 (int ,struct tcf_csum_params*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,struct tcf_proto*,struct tcf_chain**,struct netlink_ext_ack*) ;
 struct tcf_chain* FUNC_10 (struct tc_action*,int ,struct tcf_chain*) ;
 int FUNC_11 (struct tcf_chain*) ;
 int FUNC_12 (struct tc_action_net*,int *,struct tc_action**,int) ;
 int FUNC_13 (struct tc_action_net*,int ) ;
 int FUNC_14 (struct tc_action_net*,int ,struct nlattr*,struct tc_action**,int *,int,int) ;
 int FUNC_15 (struct tc_action_net*,struct tc_action*) ;
 int FUNC_16 (struct tc_action*,int) ;
 struct tcf_csum* FUNC_17 (struct tc_action*) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(struct net *VAR_11, struct nlattr *VAR_12,
    struct nlattr *VAR_13, struct tc_action **VAR_14, int VAR_15,
    int VAR_16, bool VAR_17, struct tcf_proto *VAR_18,
    struct netlink_ext_ack *VAR_19)
{
 struct tc_action_net *VAR_20 = FUNC_3(VAR_11, VAR_8);
 struct tcf_csum_params *VAR_21;
 struct nlattr *VAR_22[VAR_5 + 1];
 struct tcf_chain *VAR_23 = ((void*)0);
 struct tc_csum *VAR_24;
 struct tcf_csum *VAR_25;
 int VAR_26 = 0, VAR_27;
 u32 VAR_28;

 if (VAR_12 == ((void*)0))
  return -VAR_2;

 VAR_27 = FUNC_5(VAR_22, VAR_5, VAR_12, VAR_9,
       ((void*)0));
 if (VAR_27 < 0)
  return VAR_27;

 if (VAR_22[VAR_6] == ((void*)0))
  return -VAR_2;
 VAR_24 = FUNC_4(VAR_22[VAR_6]);
 VAR_28 = VAR_24->index;
 VAR_27 = FUNC_12(VAR_20, &VAR_28, VAR_14, VAR_16);
 if (!VAR_27) {
  VAR_26 = FUNC_14(VAR_20, VAR_28, VAR_13, VAR_14,
         &VAR_7, VAR_16, 1);
  if (VAR_26) {
   FUNC_13(VAR_20, VAR_28);
   return VAR_26;
  }
  VAR_26 = VAR_0;
 } else if (VAR_27 > 0) {
  if (VAR_16)
   return 0;
  if (!VAR_15) {
   FUNC_16(*VAR_14, VAR_16);
   return -VAR_1;
  }
 } else {
  return VAR_27;
 }

 VAR_27 = FUNC_9(VAR_24->action, VAR_18, &VAR_23, VAR_19);
 if (VAR_27 < 0)
  goto release_idr;

 VAR_25 = FUNC_17(*VAR_14);

 VAR_21 = FUNC_1(sizeof(*VAR_21), VAR_4);
 if (FUNC_18(!VAR_21)) {
  VAR_27 = -VAR_3;
  goto put_chain;
 }
 VAR_21->update_flags = VAR_24->update_flags;

 FUNC_7(&VAR_25->tcf_lock);
 VAR_23 = FUNC_10(*VAR_14, VAR_24->action, VAR_23);
 FUNC_6(VAR_25->params, VAR_21,
      FUNC_2(&VAR_25->tcf_lock));
 FUNC_8(&VAR_25->tcf_lock);

 if (VAR_23)
  FUNC_11(VAR_23);
 if (VAR_21)
  FUNC_0(VAR_21, VAR_10);

 if (VAR_26 == VAR_0)
  FUNC_15(VAR_20, *VAR_14);

 return VAR_26;
put_chain:
 if (VAR_23)
  FUNC_11(VAR_23);
release_idr:
 FUNC_16(*VAR_14, VAR_16);
 return VAR_27;
}
