
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {scalar_t__ nlmsg_type; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ifaddrmsg {int ifa_index; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct net_device* FUNC_1 (struct net*,int ) ;
 int VAR_8 ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct nlattr*) ;
 struct ifaddrmsg* FUNC_4 (struct nlmsghdr*) ;
 int FUNC_5 (struct nlmsghdr*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 int FUNC_6 (struct net_device*,int) ;
 int FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (scalar_t__,struct net_device*,int) ;
 struct net* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_9, struct nlmsghdr *VAR_10,
       struct netlink_ext_ack *VAR_11)
{
 struct net *VAR_12 = FUNC_9(VAR_9->sk);
 struct nlattr *VAR_13[VAR_6+1];
 struct net_device *VAR_14;
 struct ifaddrmsg *VAR_15;
 int VAR_16;
 u8 VAR_17;

 if (!FUNC_2(VAR_9, VAR_0))
  return -VAR_4;

 if (!FUNC_2(VAR_9, VAR_1))
  return -VAR_4;

 FUNC_0();

 VAR_16 = FUNC_5(VAR_10, sizeof(*VAR_15), VAR_13, VAR_6,
         VAR_8, VAR_11);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_15 = FUNC_4(VAR_10);
 if (VAR_13[VAR_5] == ((void*)0))
  return -VAR_2;
 VAR_17 = FUNC_3(VAR_13[VAR_5]);
 if (VAR_17 & 3)

  return -VAR_2;

 VAR_14 = FUNC_1(VAR_12, VAR_15->ifa_index);
 if (VAR_14 == ((void*)0))
  return -VAR_3;

 if (VAR_10->nlmsg_type == VAR_7)
  VAR_16 = FUNC_6(VAR_14, VAR_17);
 else
  VAR_16 = FUNC_7(VAR_14, VAR_17);
 if (!VAR_16)
  FUNC_8(VAR_10->nlmsg_type, VAR_14, VAR_17);
 return VAR_16;
}
