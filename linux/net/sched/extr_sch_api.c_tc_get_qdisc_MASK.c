
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcmsg {scalar_t__ tcm_parent; scalar_t__ tcm_handle; int tcm_ifindex; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {scalar_t__ nlmsg_type; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {struct Qdisc* qdisc; } ;
struct net {int user_ns; } ;
struct Qdisc {scalar_t__ handle; TYPE_1__* ops; } ;
struct TYPE_4__ {struct Qdisc* qdisc_sleeping; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 struct net_device* FUNC_2 (struct net*,int ) ;
 TYPE_2__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct nlattr*,int ) ;
 struct tcmsg* FUNC_6 (struct nlmsghdr*) ;
 int FUNC_7 (struct nlmsghdr*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 int FUNC_8 (struct net_device*,struct Qdisc*,struct sk_buff*,struct nlmsghdr*,scalar_t__,int *,struct Qdisc*,struct netlink_ext_ack*) ;
 struct Qdisc* FUNC_9 (struct Qdisc*,scalar_t__) ;
 struct Qdisc* FUNC_10 (struct net_device*,scalar_t__) ;
 int FUNC_11 (struct net*,struct sk_buff*,struct nlmsghdr*,scalar_t__,int *,struct Qdisc*) ;
 int VAR_11 ;
 struct net* FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_12, struct nlmsghdr *VAR_13,
   struct netlink_ext_ack *VAR_14)
{
 struct net *VAR_15 = FUNC_12(VAR_12->sk);
 struct tcmsg *VAR_16 = FUNC_6(VAR_13);
 struct nlattr *VAR_17[VAR_8 + 1];
 struct net_device *VAR_18;
 u32 VAR_19;
 struct Qdisc *VAR_20 = ((void*)0);
 struct Qdisc *VAR_21 = ((void*)0);
 int VAR_22;

 if ((VAR_13->nlmsg_type != VAR_6) &&
     !FUNC_4(VAR_12, VAR_15->user_ns, VAR_0))
  return -VAR_4;

 VAR_22 = FUNC_7(VAR_13, sizeof(*VAR_16), VAR_17, VAR_8,
         VAR_11, VAR_14);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_18 = FUNC_2(VAR_15, VAR_16->tcm_ifindex);
 if (!VAR_18)
  return -VAR_2;

 VAR_19 = VAR_16->tcm_parent;
 if (VAR_19) {
  if (VAR_19 != VAR_10) {
   if (FUNC_1(VAR_19) != FUNC_1(VAR_9)) {
    VAR_21 = FUNC_10(VAR_18, FUNC_1(VAR_19));
    if (!VAR_21) {
     FUNC_0(VAR_14, "Failed to find qdisc with specified classid");
     return -VAR_3;
    }
    VAR_20 = FUNC_9(VAR_21, VAR_19);
   } else if (FUNC_3(VAR_18)) {
    VAR_20 = FUNC_3(VAR_18)->qdisc_sleeping;
   }
  } else {
   VAR_20 = VAR_18->qdisc;
  }
  if (!VAR_20) {
   FUNC_0(VAR_14, "Cannot find specified qdisc on specified device");
   return -VAR_3;
  }

  if (VAR_16->tcm_handle && VAR_20->handle != VAR_16->tcm_handle) {
   FUNC_0(VAR_14, "Invalid handle");
   return -VAR_1;
  }
 } else {
  VAR_20 = FUNC_10(VAR_18, VAR_16->tcm_handle);
  if (!VAR_20) {
   FUNC_0(VAR_14, "Failed to find qdisc with specified handle");
   return -VAR_3;
  }
 }

 if (VAR_17[VAR_7] && FUNC_5(VAR_17[VAR_7], VAR_20->ops->id)) {
  FUNC_0(VAR_14, "Invalid qdisc name");
  return -VAR_1;
 }

 if (VAR_13->nlmsg_type == VAR_5) {
  if (!VAR_19) {
   FUNC_0(VAR_14, "Classid cannot be zero");
   return -VAR_1;
  }
  if (VAR_20->handle == 0) {
   FUNC_0(VAR_14, "Cannot delete qdisc with handle of zero");
   return -VAR_3;
  }
  VAR_22 = FUNC_8(VAR_18, VAR_21, VAR_12, VAR_13, VAR_19, ((void*)0), VAR_20, VAR_14);
  if (VAR_22 != 0)
   return VAR_22;
 } else {
  FUNC_11(VAR_15, VAR_12, VAR_13, VAR_19, ((void*)0), VAR_20);
 }
 return 0;
}
