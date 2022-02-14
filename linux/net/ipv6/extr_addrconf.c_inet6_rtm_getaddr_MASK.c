
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct inet6_ifaddr {int dummy; } ;
struct inet6_fill_args {int netnsid; int flags; int event; int seq; int portid; } ;
struct in6_addr {int dummy; } ;
struct ifaddrmsg {scalar_t__ ifa_index; } ;
struct TYPE_2__ {int portid; int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ FUNC_0 (struct net*) ;
 TYPE_1__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct net*) ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 struct net_device* FUNC_4 (struct net*,scalar_t__) ;
 int FUNC_5 (struct net_device*) ;
 struct in6_addr* FUNC_6 (struct nlattr*,struct nlattr*,struct in6_addr**) ;
 int FUNC_7 (struct inet6_ifaddr*) ;
 int FUNC_8 (struct sk_buff*,struct inet6_ifaddr*,struct inet6_fill_args*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct sk_buff*,struct nlmsghdr*,struct nlattr**,struct netlink_ext_ack*) ;
 struct inet6_ifaddr* FUNC_11 (struct net*,struct in6_addr*,struct net_device*,int) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct nlattr*) ;
 struct ifaddrmsg* FUNC_14 (struct nlmsghdr*) ;
 struct sk_buff* FUNC_15 (int ,int ) ;
 int FUNC_16 (struct net*) ;
 struct net* FUNC_17 (int ,int) ;
 int FUNC_18 (struct sk_buff*,struct net*,int ) ;
 struct net* FUNC_19 (int ) ;

__attribute__((used)) static int FUNC_20(struct sk_buff *VAR_10, struct nlmsghdr *VAR_11,
        struct netlink_ext_ack *VAR_12)
{
 struct net *VAR_13 = FUNC_19(VAR_10->sk);
 struct inet6_fill_args VAR_14 = {
  .portid = FUNC_1(VAR_10).portid,
  .seq = VAR_11->nlmsg_seq,
  .event = VAR_9,
  .flags = 0,
  .netnsid = -1,
 };
 struct net *VAR_15 = VAR_13;
 struct ifaddrmsg *VAR_16;
 struct nlattr *VAR_17[VAR_7+1];
 struct in6_addr *VAR_18 = ((void*)0), *VAR_19;
 struct net_device *VAR_20 = ((void*)0);
 struct inet6_ifaddr *VAR_21;
 struct sk_buff *VAR_22;
 int VAR_23;

 VAR_23 = FUNC_10(VAR_10, VAR_11, VAR_17, VAR_12);
 if (VAR_23 < 0)
  return VAR_23;

 if (VAR_17[VAR_8]) {
  VAR_14.netnsid = FUNC_13(VAR_17[VAR_8]);

  VAR_15 = FUNC_17(FUNC_1(VAR_10).sk,
        VAR_14.netnsid);
  if (FUNC_0(VAR_15))
   return FUNC_2(VAR_15);
 }

 VAR_18 = FUNC_6(VAR_17[VAR_5], VAR_17[VAR_6], &VAR_19);
 if (!VAR_18)
  return -VAR_1;

 VAR_16 = FUNC_14(VAR_11);
 if (VAR_16->ifa_index)
  VAR_20 = FUNC_4(VAR_15, VAR_16->ifa_index);

 VAR_21 = FUNC_11(VAR_15, VAR_18, VAR_20, 1);
 if (!VAR_21) {
  VAR_23 = -VAR_0;
  goto errout;
 }

 VAR_22 = FUNC_15(FUNC_9(), VAR_4);
 if (!VAR_22) {
  VAR_23 = -VAR_3;
  goto errout_ifa;
 }

 VAR_23 = FUNC_8(VAR_22, VAR_21, &VAR_14);
 if (VAR_23 < 0) {

  FUNC_3(VAR_23 == -VAR_2);
  FUNC_12(VAR_22);
  goto errout_ifa;
 }
 VAR_23 = FUNC_18(VAR_22, VAR_15, FUNC_1(VAR_10).portid);
errout_ifa:
 FUNC_7(VAR_21);
errout:
 if (VAR_20)
  FUNC_5(VAR_20);
 if (VAR_14.netnsid >= 0)
  FUNC_16(VAR_15);

 return VAR_23;
}
