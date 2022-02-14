
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device_ops {int (* ndo_fdb_get ) (struct sk_buff*,struct nlattr**,struct net_device*,int*,int ,int ,int ,struct netlink_ext_ack*) ;} ;
struct net_device {int priv_flags; struct net_device_ops* netdev_ops; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_7 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 struct net_device* FUNC_2 (struct net*,int) ;
 int FUNC_3 (struct sk_buff*) ;
 struct net_device* FUNC_4 (struct net_device*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct sk_buff*,struct net*,int ) ;
 struct net* FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*,struct nlattr**,struct net_device*,int*,int ,int ,int ,struct netlink_ext_ack*) ;
 int FUNC_9 (struct nlmsghdr*,struct nlattr**,int*,int*,int*,int**,int *,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_10, struct nlmsghdr *VAR_11,
   struct netlink_ext_ack *VAR_12)
{
 struct net_device *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 const struct net_device_ops *VAR_15 = ((void*)0);
 struct net *VAR_16 = FUNC_7(VAR_10->sk);
 struct nlattr *VAR_17[VAR_6 + 1];
 struct sk_buff *VAR_18;
 int VAR_19 = 0;
 u8 VAR_20 = 0;
 int VAR_21 = 0;
 u8 *VAR_22 = ((void*)0);
 u16 VAR_23 = 0;
 int VAR_24;

 VAR_24 = FUNC_9(VAR_11, VAR_17, &VAR_20, &VAR_21,
       &VAR_19, &VAR_22, &VAR_23, VAR_12);
 if (VAR_24 < 0)
  return VAR_24;

 if (!VAR_22) {
  FUNC_1(VAR_12, "Missing lookup address for fdb get request");
  return -VAR_0;
 }

 if (VAR_19) {
  VAR_13 = FUNC_2(VAR_16, VAR_19);
  if (!VAR_13) {
   FUNC_1(VAR_12, "Unknown device ifindex");
   return -VAR_2;
  }
 }

 if (VAR_21) {
  if (VAR_13) {
   FUNC_1(VAR_12, "Master and device are mutually exclusive");
   return -VAR_0;
  }

  VAR_14 = FUNC_2(VAR_16, VAR_21);
  if (!VAR_14) {
   FUNC_1(VAR_12, "Invalid master ifindex");
   return -VAR_0;
  }
  VAR_15 = VAR_14->netdev_ops;
 }

 if (VAR_13) {
  if (!VAR_20 || (VAR_20 & VAR_8)) {
   if (!(VAR_13->priv_flags & VAR_5)) {
    FUNC_1(VAR_12, "Device is not a bridge port");
    return -VAR_0;
   }
   VAR_14 = FUNC_4(VAR_13);
   if (!VAR_14) {
    FUNC_1(VAR_12, "Master of device not found");
    return -VAR_0;
   }
   VAR_15 = VAR_14->netdev_ops;
  } else {
   if (!(VAR_20 & VAR_9)) {
    FUNC_1(VAR_12, "Missing NTF_SELF");
    return -VAR_0;
   }
   VAR_15 = VAR_13->netdev_ops;
  }
 }

 if (!VAR_14 && !VAR_13) {
  FUNC_1(VAR_12, "No device specified");
  return -VAR_2;
 }

 if (!VAR_15 || !VAR_15->ndo_fdb_get) {
  FUNC_1(VAR_12, "Fdb get operation not supported by device");
  return -VAR_3;
 }

 VAR_18 = FUNC_5(VAR_7, VAR_4);
 if (!VAR_18)
  return -VAR_1;

 if (VAR_14)
  VAR_13 = VAR_14;
 VAR_24 = VAR_15->ndo_fdb_get(VAR_18, VAR_17, VAR_13, VAR_22, VAR_23,
          FUNC_0(VAR_10).portid,
          VAR_11->nlmsg_seq, VAR_12);
 if (VAR_24)
  goto out;

 return FUNC_6(VAR_18, VAR_16, FUNC_0(VAR_10).portid);
out:
 FUNC_3(VAR_18);
 return VAR_24;
}
