
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcmsg {scalar_t__ tcm_parent; scalar_t__ tcm_handle; int tcm_ifindex; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct netdev_queue {struct Qdisc* qdisc_sleeping; } ;
struct net_device {struct Qdisc* qdisc; } ;
struct net {int user_ns; } ;
struct Qdisc {scalar_t__ handle; struct netdev_queue* dev_queue; TYPE_2__* ops; } ;
struct TYPE_4__ {TYPE_1__* cl_ops; int id; } ;
struct TYPE_3__ {struct netdev_queue* (* select_queue ) (struct Qdisc*,struct tcmsg*) ;} ;


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
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 size_t VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_14 ;
 struct net_device* FUNC_3 (struct net*,int ) ;
 scalar_t__ FUNC_4 (struct Qdisc*,struct Qdisc*,int ) ;
 struct netdev_queue* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 struct netdev_queue* FUNC_7 (struct net_device*,int ) ;
 int FUNC_8 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_9 (struct nlattr*,int ) ;
 struct tcmsg* FUNC_10 (struct nlmsghdr*) ;
 int FUNC_11 (struct nlmsghdr*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 int FUNC_12 (struct Qdisc*,struct nlattr**,struct netlink_ext_ack*) ;
 struct Qdisc* FUNC_13 (struct net_device*,struct netdev_queue*,struct Qdisc*,scalar_t__,scalar_t__,struct nlattr**,int*,struct netlink_ext_ack*) ;
 int FUNC_14 (struct net_device*,struct Qdisc*,struct sk_buff*,struct nlmsghdr*,scalar_t__,struct Qdisc*,int *,struct netlink_ext_ack*) ;
 struct Qdisc* FUNC_15 (struct Qdisc*,scalar_t__) ;
 struct Qdisc* FUNC_16 (struct net_device*,scalar_t__) ;
 int FUNC_17 (struct net*,struct sk_buff*,struct nlmsghdr*,scalar_t__,int *,struct Qdisc*) ;
 int FUNC_18 (struct Qdisc*) ;
 int FUNC_19 (struct Qdisc*) ;
 int VAR_15 ;
 struct net* FUNC_20 (int ) ;
 struct netdev_queue* FUNC_21 (struct Qdisc*,struct tcmsg*) ;

__attribute__((used)) static int FUNC_22(struct sk_buff *VAR_16, struct nlmsghdr *VAR_17,
      struct netlink_ext_ack *VAR_18)
{
 struct net *VAR_19 = FUNC_20(VAR_16->sk);
 struct tcmsg *VAR_20;
 struct nlattr *VAR_21[VAR_12 + 1];
 struct net_device *VAR_22;
 u32 VAR_23;
 struct Qdisc *VAR_24, *VAR_25;
 int VAR_26;

 if (!FUNC_8(VAR_16, VAR_19->user_ns, VAR_0))
  return -VAR_7;

replay:

 VAR_26 = FUNC_11(VAR_17, sizeof(*VAR_20), VAR_21, VAR_12,
         VAR_15, VAR_18);
 if (VAR_26 < 0)
  return VAR_26;

 VAR_20 = FUNC_10(VAR_17);
 VAR_23 = VAR_20->tcm_parent;
 VAR_24 = VAR_25 = ((void*)0);

 VAR_22 = FUNC_3(VAR_19, VAR_20->tcm_ifindex);
 if (!VAR_22)
  return -VAR_5;


 if (VAR_23) {
  if (VAR_23 != VAR_14) {
   if (VAR_23 != VAR_13) {
    VAR_25 = FUNC_16(VAR_22, FUNC_1(VAR_23));
    if (!VAR_25) {
     FUNC_0(VAR_18, "Failed to find specified qdisc");
     return -VAR_6;
    }
    VAR_24 = FUNC_15(VAR_25, VAR_23);
   } else if (FUNC_6(VAR_22)) {
    VAR_24 = FUNC_5(VAR_22)->qdisc_sleeping;
   }
  } else {
   VAR_24 = VAR_22->qdisc;
  }


  if (VAR_24 && VAR_24->handle == 0)
   VAR_24 = ((void*)0);

  if (!VAR_24 || !VAR_20->tcm_handle || VAR_24->handle != VAR_20->tcm_handle) {
   if (VAR_20->tcm_handle) {
    if (VAR_24 && !(VAR_17->nlmsg_flags & VAR_10)) {
     FUNC_0(VAR_18, "NLM_F_REPLACE needed to override");
     return -VAR_2;
    }
    if (FUNC_2(VAR_20->tcm_handle)) {
     FUNC_0(VAR_18, "Invalid minor handle");
     return -VAR_3;
    }
    VAR_24 = FUNC_16(VAR_22, VAR_20->tcm_handle);
    if (!VAR_24)
     goto create_n_graft;
    if (VAR_17->nlmsg_flags & VAR_9) {
     FUNC_0(VAR_18, "Exclusivity flag on, cannot override");
     return -VAR_2;
    }
    if (VAR_21[VAR_11] &&
        FUNC_9(VAR_21[VAR_11], VAR_24->ops->id)) {
     FUNC_0(VAR_18, "Invalid qdisc name");
     return -VAR_3;
    }
    if (VAR_24 == VAR_25 ||
        (VAR_25 && FUNC_4(VAR_24, VAR_25, 0))) {
     FUNC_0(VAR_18, "Qdisc parent/child loop detected");
     return -VAR_4;
    }
    FUNC_19(VAR_24);
    goto graft;
   } else {
    if (!VAR_24)
     goto create_n_graft;
    if ((VAR_17->nlmsg_flags & VAR_8) &&
        (VAR_17->nlmsg_flags & VAR_10) &&
        ((VAR_17->nlmsg_flags & VAR_9) ||
         (VAR_21[VAR_11] &&
          FUNC_9(VAR_21[VAR_11], VAR_24->ops->id))))
     goto create_n_graft;
   }
  }
 } else {
  if (!VAR_20->tcm_handle) {
   FUNC_0(VAR_18, "Handle cannot be zero");
   return -VAR_3;
  }
  VAR_24 = FUNC_16(VAR_22, VAR_20->tcm_handle);
 }


 if (!VAR_24) {
  FUNC_0(VAR_18, "Specified qdisc not found");
  return -VAR_6;
 }
 if (VAR_17->nlmsg_flags & VAR_9) {
  FUNC_0(VAR_18, "Exclusivity flag on, cannot modify");
  return -VAR_2;
 }
 if (VAR_21[VAR_11] && FUNC_9(VAR_21[VAR_11], VAR_24->ops->id)) {
  FUNC_0(VAR_18, "Invalid qdisc name");
  return -VAR_3;
 }
 VAR_26 = FUNC_12(VAR_24, VAR_21, VAR_18);
 if (VAR_26 == 0)
  FUNC_17(VAR_19, VAR_16, VAR_17, VAR_23, ((void*)0), VAR_24);
 return VAR_26;

create_n_graft:
 if (!(VAR_17->nlmsg_flags & VAR_8)) {
  FUNC_0(VAR_18, "Qdisc not found. To create specify NLM_F_CREATE flag");
  return -VAR_6;
 }
 if (VAR_23 == VAR_13) {
  if (FUNC_5(VAR_22)) {
   VAR_24 = FUNC_13(VAR_22, FUNC_5(VAR_22), VAR_25,
      VAR_20->tcm_parent, VAR_20->tcm_parent,
      VAR_21, &VAR_26, VAR_18);
  } else {
   FUNC_0(VAR_18, "Cannot find ingress queue for specified device");
   VAR_26 = -VAR_6;
  }
 } else {
  struct netdev_queue *VAR_27;

  if (VAR_25 && VAR_25->ops->cl_ops && VAR_25->ops->cl_ops->select_queue)
   VAR_27 = VAR_25->ops->cl_ops->select_queue(VAR_25, VAR_20);
  else if (VAR_25)
   VAR_27 = VAR_25->dev_queue;
  else
   VAR_27 = FUNC_7(VAR_22, 0);

  VAR_24 = FUNC_13(VAR_22, VAR_27, VAR_25,
     VAR_20->tcm_parent, VAR_20->tcm_handle,
     VAR_21, &VAR_26, VAR_18);
 }
 if (VAR_24 == ((void*)0)) {
  if (VAR_26 == -VAR_1)
   goto replay;
  return VAR_26;
 }

graft:
 VAR_26 = FUNC_14(VAR_22, VAR_25, VAR_16, VAR_17, VAR_23, VAR_24, ((void*)0), VAR_18);
 if (VAR_26) {
  if (VAR_24)
   FUNC_18(VAR_24);
  return VAR_26;
 }

 return 0;
}
