
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_proto {int dummy; } ;
struct tcf_gact {scalar_t__ tcfg_ptype; int tcf_lock; int tcfg_pval; int tcfg_paction; } ;
struct tcf_chain {int dummy; } ;
struct tc_gact_p {scalar_t__ ptype; int pval; int paction; } ;
struct tc_gact {int action; int index; } ;
struct tc_action_net {int dummy; } ;
struct tc_action {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,int,int ) ;
 struct tc_action_net* FUNC_3 (struct net*,int ) ;
 void* FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int FUNC_6 () ;
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
 struct tcf_gact* FUNC_17 (struct tc_action*) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_18(struct net *VAR_13, struct nlattr *VAR_14,
    struct nlattr *VAR_15, struct tc_action **VAR_16,
    int VAR_17, int VAR_18, bool VAR_19,
    struct tcf_proto *VAR_20, struct netlink_ext_ack *VAR_21)
{
 struct tc_action_net *VAR_22 = FUNC_3(VAR_13, VAR_10);
 struct nlattr *VAR_23[VAR_5 + 1];
 struct tcf_chain *VAR_24 = ((void*)0);
 struct tc_gact *VAR_25;
 struct tcf_gact *VAR_26;
 int VAR_27 = 0;
 u32 VAR_28;
 int VAR_29;




 if (VAR_14 == ((void*)0))
  return -VAR_2;

 VAR_29 = FUNC_5(VAR_23, VAR_5, VAR_14, VAR_11,
       ((void*)0));
 if (VAR_29 < 0)
  return VAR_29;

 if (VAR_23[VAR_6] == ((void*)0))
  return -VAR_2;
 VAR_25 = FUNC_4(VAR_23[VAR_6]);
 VAR_28 = VAR_25->index;


 if (VAR_23[VAR_7] != ((void*)0))
  return -VAR_3;
 VAR_29 = FUNC_12(VAR_22, &VAR_28, VAR_16, VAR_18);
 if (!VAR_29) {
  VAR_27 = FUNC_14(VAR_22, VAR_28, VAR_15, VAR_16,
         &VAR_9, VAR_18, 1);
  if (VAR_27) {
   FUNC_13(VAR_22, VAR_28);
   return VAR_27;
  }
  VAR_27 = VAR_0;
 } else if (VAR_29 > 0) {
  if (VAR_18)
   return 0;
  if (!VAR_17) {
   FUNC_16(*VAR_16, VAR_18);
   return -VAR_1;
  }
 } else {
  return VAR_29;
 }

 VAR_29 = FUNC_9(VAR_25->action, VAR_20, &VAR_24, VAR_21);
 if (VAR_29 < 0)
  goto release_idr;
 VAR_26 = FUNC_17(*VAR_16);

 FUNC_7(&VAR_26->tcf_lock);
 VAR_24 = FUNC_10(*VAR_16, VAR_25->action, VAR_24);
 FUNC_8(&VAR_26->tcf_lock);

 if (VAR_24)
  FUNC_11(VAR_24);

 if (VAR_27 == VAR_0)
  FUNC_15(VAR_22, *VAR_16);
 return VAR_27;
release_idr:
 FUNC_16(*VAR_16, VAR_18);
 return VAR_29;
}
