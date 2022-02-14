
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_proto {int dummy; } ;
struct tcf_mirred {int tcfm_mac_header_xmit; int tcfm_eaction; int tcfm_list; int tcf_lock; int tcfm_dev; } ;
struct tcf_chain {int dummy; } ;
struct tc_mirred {int eaction; int action; scalar_t__ ifindex; int index; } ;
struct tc_action_net {int dummy; } ;
struct tc_action {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;




 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 struct net_device* FUNC_2 (struct net*,scalar_t__) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct tc_action_net* FUNC_7 (struct net*,int ) ;
 struct tc_mirred* FUNC_8 (struct nlattr*) ;
 int FUNC_9 (struct nlattr**,int ,struct nlattr*,int ,struct netlink_ext_ack*) ;
 int FUNC_10 (int ,struct net_device*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,struct tcf_proto*,struct tcf_chain**,struct netlink_ext_ack*) ;
 struct tcf_chain* FUNC_16 (struct tc_action*,int ,struct tcf_chain*) ;
 int FUNC_17 (struct tcf_chain*) ;
 int FUNC_18 (struct tc_action_net*,int *,struct tc_action**,int) ;
 int FUNC_19 (struct tc_action_net*,int ) ;
 int FUNC_20 (struct tc_action_net*,int ,struct nlattr*,struct tc_action**,int *,int,int) ;
 int FUNC_21 (struct tc_action_net*,struct tc_action*) ;
 int FUNC_22 (struct tc_action*,int) ;
 struct tcf_mirred* FUNC_23 (struct tc_action*) ;

__attribute__((used)) static int FUNC_24(struct net *VAR_11, struct nlattr *VAR_12,
      struct nlattr *VAR_13, struct tc_action **VAR_14,
      int VAR_15, int VAR_16, bool VAR_17,
      struct tcf_proto *VAR_18,
      struct netlink_ext_ack *VAR_19)
{
 struct tc_action_net *VAR_20 = FUNC_7(VAR_11, VAR_9);
 struct nlattr *VAR_21[VAR_4 + 1];
 struct tcf_chain *VAR_22 = ((void*)0);
 bool VAR_23 = 0;
 struct tc_mirred *VAR_24;
 struct tcf_mirred *VAR_25;
 struct net_device *VAR_26;
 bool VAR_27 = 0;
 int VAR_28, VAR_29;
 u32 VAR_30;

 if (!VAR_12) {
  FUNC_1(VAR_19, "Mirred requires attributes to be passed");
  return -VAR_2;
 }
 VAR_28 = FUNC_9(VAR_21, VAR_4, VAR_12,
       VAR_10, VAR_19);
 if (VAR_28 < 0)
  return VAR_28;
 if (!VAR_21[VAR_5]) {
  FUNC_1(VAR_19, "Missing required mirred parameters");
  return -VAR_2;
 }
 VAR_24 = FUNC_8(VAR_21[VAR_5]);
 VAR_30 = VAR_24->index;
 VAR_29 = FUNC_18(VAR_20, &VAR_30, VAR_14, VAR_16);
 if (VAR_29 < 0)
  return VAR_29;
 VAR_27 = VAR_29;
 if (VAR_27 && VAR_16)
  return 0;

 switch (VAR_24->eaction) {
 case 131:
 case 130:
 case 128:
 case 129:
  break;
 default:
  if (VAR_27)
   FUNC_22(*VAR_14, VAR_16);
  else
   FUNC_19(VAR_20, VAR_30);
  FUNC_1(VAR_19, "Unknown mirred option");
  return -VAR_2;
 }

 if (!VAR_27) {
  if (!VAR_24->ifindex) {
   FUNC_19(VAR_20, VAR_30);
   FUNC_1(VAR_19, "Specified device does not exist");
   return -VAR_2;
  }
  VAR_28 = FUNC_20(VAR_20, VAR_30, VAR_13, VAR_14,
         &VAR_6, VAR_16, 1);
  if (VAR_28) {
   FUNC_19(VAR_20, VAR_30);
   return VAR_28;
  }
  VAR_28 = VAR_0;
 } else if (!VAR_15) {
  FUNC_22(*VAR_14, VAR_16);
  return -VAR_1;
 }

 VAR_25 = FUNC_23(*VAR_14);
 if (VAR_28 == VAR_0)
  FUNC_0(&VAR_25->tcfm_list);

 VAR_29 = FUNC_15(VAR_24->action, VAR_18, &VAR_22, VAR_19);
 if (VAR_29 < 0)
  goto release_idr;

 FUNC_12(&VAR_25->tcf_lock);

 if (VAR_24->ifindex) {
  VAR_26 = FUNC_2(VAR_11, VAR_24->ifindex);
  if (!VAR_26) {
   FUNC_14(&VAR_25->tcf_lock);
   VAR_29 = -VAR_3;
   goto put_chain;
  }
  VAR_23 = FUNC_3(VAR_26);
  FUNC_10(VAR_25->tcfm_dev, VAR_26,
       FUNC_6(&VAR_25->tcf_lock));
  if (VAR_26)
   FUNC_4(VAR_26);
  VAR_25->tcfm_mac_header_xmit = VAR_23;
 }
 VAR_22 = FUNC_16(*VAR_14, VAR_24->action, VAR_22);
 VAR_25->tcfm_eaction = VAR_24->eaction;
 FUNC_14(&VAR_25->tcf_lock);
 if (VAR_22)
  FUNC_17(VAR_22);

 if (VAR_28 == VAR_0) {
  FUNC_11(&VAR_8);
  FUNC_5(&VAR_25->tcfm_list, &VAR_7);
  FUNC_13(&VAR_8);

  FUNC_21(VAR_20, *VAR_14);
 }

 return VAR_28;
put_chain:
 if (VAR_22)
  FUNC_17(VAR_22);
release_idr:
 FUNC_22(*VAR_14, VAR_16);
 return VAR_29;
}
