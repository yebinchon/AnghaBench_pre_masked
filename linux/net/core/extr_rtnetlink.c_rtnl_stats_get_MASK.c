
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct if_stats_msg {scalar_t__ ifindex; int filter_mask; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 struct net_device* FUNC_2 (struct net*,scalar_t__) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct if_stats_msg* FUNC_6 (struct nlmsghdr*) ;
 struct sk_buff* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct sk_buff*,struct net_device*,int ,int ,int ,int ,int ,int ,int*,int*) ;
 int FUNC_9 (struct sk_buff*,struct net*,int ) ;
 int FUNC_10 (struct nlmsghdr*,int ,int,struct netlink_ext_ack*) ;
 struct net* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_6, struct nlmsghdr *VAR_7,
     struct netlink_ext_ack *VAR_8)
{
 struct net *VAR_9 = FUNC_11(VAR_6->sk);
 struct net_device *VAR_10 = ((void*)0);
 int VAR_11 = 0, VAR_12 = 0;
 struct if_stats_msg *VAR_13;
 struct sk_buff *VAR_14;
 u32 VAR_15;
 int VAR_16;

 VAR_16 = FUNC_10(VAR_7, FUNC_5(VAR_6),
       0, VAR_8);
 if (VAR_16)
  return VAR_16;

 VAR_13 = FUNC_6(VAR_7);
 if (VAR_13->ifindex > 0)
  VAR_10 = FUNC_2(VAR_9, VAR_13->ifindex);
 else
  return -VAR_0;

 if (!VAR_10)
  return -VAR_3;

 VAR_15 = VAR_13->filter_mask;
 if (!VAR_15)
  return -VAR_0;

 VAR_14 = FUNC_7(FUNC_3(VAR_10, VAR_15), VAR_4);
 if (!VAR_14)
  return -VAR_2;

 VAR_16 = FUNC_8(VAR_14, VAR_10, VAR_5,
      FUNC_0(VAR_6).portid, VAR_7->nlmsg_seq, 0,
      0, VAR_15, &VAR_11, &VAR_12);
 if (VAR_16 < 0) {

  FUNC_1(VAR_16 == -VAR_1);
  FUNC_4(VAR_14);
 } else {
  VAR_16 = FUNC_9(VAR_14, VAR_9, FUNC_0(VAR_6).portid);
 }

 return VAR_16;
}
