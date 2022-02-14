
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_3__ {int mc_autojoin_sk; } ;
struct net {TYPE_1__ ipv4; } ;
struct in_ifaddr {int ifa_flags; scalar_t__ ifa_rt_priority; } ;
typedef int __u32 ;
struct TYPE_4__ {int portid; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct in_ifaddr*) ;
 TYPE_2__ FUNC_2 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct in_ifaddr*) ;
 int VAR_5 ;
 int FUNC_4 (struct in_ifaddr*,struct nlmsghdr*,int ,struct netlink_ext_ack*) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int FUNC_6 (struct in_ifaddr*,scalar_t__) ;
 struct in_ifaddr* FUNC_7 (struct in_ifaddr*) ;
 int FUNC_8 (struct in_ifaddr*) ;
 int FUNC_9 (int ,int,struct in_ifaddr*) ;
 int FUNC_10 (int ,int *,int ) ;
 struct in_ifaddr* FUNC_11 (struct net*,struct nlmsghdr*,int *,int *,struct netlink_ext_ack*) ;
 int FUNC_12 (int ,struct in_ifaddr*,struct nlmsghdr*,int ) ;
 int FUNC_13 (struct in_ifaddr*,int ,int ) ;
 struct net* FUNC_14 (int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_8, struct nlmsghdr *VAR_9,
       struct netlink_ext_ack *VAR_10)
{
 struct net *VAR_11 = FUNC_14(VAR_8->sk);
 struct in_ifaddr *VAR_12;
 struct in_ifaddr *VAR_13;
 __u32 VAR_14 = VAR_2;
 __u32 VAR_15 = VAR_2;

 FUNC_0();

 VAR_12 = FUNC_11(VAR_11, VAR_9, &VAR_14, &VAR_15, VAR_10);
 if (FUNC_1(VAR_12))
  return FUNC_3(VAR_12);

 VAR_13 = FUNC_7(VAR_12);
 if (!VAR_13) {



  FUNC_13(VAR_12, VAR_14, VAR_15);
  if (VAR_12->ifa_flags & VAR_1) {
   int VAR_16 = FUNC_9(VAR_11->ipv4.mc_autojoin_sk,
            1, VAR_12);

   if (VAR_16 < 0) {
    FUNC_8(VAR_12);
    return VAR_16;
   }
  }
  return FUNC_4(VAR_12, VAR_9, FUNC_2(VAR_8).portid,
      VAR_10);
 } else {
  u32 VAR_17 = VAR_12->ifa_rt_priority;

  FUNC_8(VAR_12);

  if (VAR_9->nlmsg_flags & VAR_3 ||
      !(VAR_9->nlmsg_flags & VAR_4))
   return -VAR_0;
  VAR_12 = VAR_13;

  if (VAR_12->ifa_rt_priority != VAR_17) {
   FUNC_6(VAR_12, VAR_17);
   VAR_12->ifa_rt_priority = VAR_17;
  }

  FUNC_13(VAR_12, VAR_14, VAR_15);
  FUNC_5(&VAR_6);
  FUNC_10(VAR_7,
    &VAR_6, 0);
  FUNC_12(VAR_5, VAR_12, VAR_9, FUNC_2(VAR_8).portid);
 }
 return 0;
}
