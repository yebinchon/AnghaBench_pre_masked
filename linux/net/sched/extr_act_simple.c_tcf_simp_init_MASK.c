
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_proto {int dummy; } ;
struct tcf_defact {int dummy; } ;
struct tcf_chain {int dummy; } ;
struct tc_defact {int action; int index; } ;
struct tc_action_net {int dummy; } ;
struct tc_action {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct tcf_defact*,struct nlattr*) ;
 struct tc_action_net* FUNC_1 (struct net*,int ) ;
 struct tc_defact* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int FUNC_4 (struct tc_action*,struct nlattr*,struct tc_defact*,struct tcf_proto*,struct netlink_ext_ack*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,struct tcf_proto*,struct tcf_chain**,struct netlink_ext_ack*) ;
 int FUNC_6 (struct tc_action*,int ,struct tcf_chain*) ;
 int FUNC_7 (struct tcf_chain*) ;
 int FUNC_8 (struct tc_action_net*,int *,struct tc_action**,int) ;
 int FUNC_9 (struct tc_action_net*,int ) ;
 int FUNC_10 (struct tc_action_net*,int ,struct nlattr*,struct tc_action**,int *,int,int) ;
 int FUNC_11 (struct tc_action_net*,struct tc_action*) ;
 int FUNC_12 (struct tc_action*,int) ;
 struct tcf_defact* FUNC_13 (struct tc_action*) ;

__attribute__((used)) static int FUNC_14(struct net *VAR_9, struct nlattr *VAR_10,
    struct nlattr *VAR_11, struct tc_action **VAR_12,
    int VAR_13, int VAR_14, bool VAR_15,
    struct tcf_proto *VAR_16, struct netlink_ext_ack *VAR_17)
{
 struct tc_action_net *VAR_18 = FUNC_1(VAR_9, VAR_7);
 struct nlattr *VAR_19[VAR_4 + 1];
 struct tcf_chain *VAR_20 = ((void*)0);
 struct tc_defact *VAR_21;
 struct tcf_defact *VAR_22;
 bool VAR_23 = 0;
 int VAR_24 = 0, VAR_25;
 u32 VAR_26;

 if (VAR_10 == ((void*)0))
  return -VAR_2;

 VAR_25 = FUNC_3(VAR_19, VAR_4, VAR_10, VAR_8,
       ((void*)0));
 if (VAR_25 < 0)
  return VAR_25;

 if (VAR_19[VAR_5] == ((void*)0))
  return -VAR_2;

 VAR_21 = FUNC_2(VAR_19[VAR_5]);
 VAR_26 = VAR_21->index;
 VAR_25 = FUNC_8(VAR_18, &VAR_26, VAR_12, VAR_14);
 if (VAR_25 < 0)
  return VAR_25;
 VAR_23 = VAR_25;
 if (VAR_23 && VAR_14)
  return 0;

 if (VAR_19[VAR_3] == ((void*)0)) {
  if (VAR_23)
   FUNC_12(*VAR_12, VAR_14);
  else
   FUNC_9(VAR_18, VAR_26);
  return -VAR_2;
 }

 if (!VAR_23) {
  VAR_24 = FUNC_10(VAR_18, VAR_26, VAR_11, VAR_12,
         &VAR_6, VAR_14, 0);
  if (VAR_24) {
   FUNC_9(VAR_18, VAR_26);
   return VAR_24;
  }

  VAR_22 = FUNC_13(*VAR_12);
  VAR_25 = FUNC_5(VAR_21->action, VAR_16, &VAR_20,
            VAR_17);
  if (VAR_25 < 0)
   goto release_idr;

  VAR_25 = FUNC_0(VAR_22, VAR_19[VAR_3]);
  if (VAR_25 < 0)
   goto put_chain;

  FUNC_6(*VAR_12, VAR_21->action, VAR_20);
  VAR_24 = VAR_0;
 } else {
  if (!VAR_13) {
   VAR_25 = -VAR_1;
   goto release_idr;
  }

  VAR_25 = FUNC_4(*VAR_12, VAR_19[VAR_3], VAR_21, VAR_16, VAR_17);
  if (VAR_25)
   goto release_idr;
 }

 if (VAR_24 == VAR_0)
  FUNC_11(VAR_18, *VAR_12);
 return VAR_24;
put_chain:
 if (VAR_20)
  FUNC_7(VAR_20);
release_idr:
 FUNC_12(*VAR_12, VAR_14);
 return VAR_25;
}
