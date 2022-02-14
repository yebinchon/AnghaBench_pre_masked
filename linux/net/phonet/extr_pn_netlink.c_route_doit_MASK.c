
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int sk; } ;
struct rtmsg {scalar_t__ rtm_table; scalar_t__ rtm_type; } ;
struct nlmsghdr {scalar_t__ nlmsg_type; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 struct net_device* FUNC_1 (struct net*,int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 struct rtmsg* FUNC_5 (struct nlmsghdr*) ;
 int FUNC_6 (struct nlmsghdr*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 int FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (struct net_device*,int) ;
 int FUNC_9 (scalar_t__,struct net_device*,int) ;
 int VAR_11 ;
 struct net* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_12, struct nlmsghdr *VAR_13,
        struct netlink_ext_ack *VAR_14)
{
 struct net *VAR_15 = FUNC_10(VAR_12->sk);
 struct nlattr *VAR_16[VAR_6+1];
 struct net_device *VAR_17;
 struct rtmsg *VAR_18;
 int VAR_19;
 u8 VAR_20;

 if (!FUNC_2(VAR_12, VAR_0))
  return -VAR_4;

 if (!FUNC_2(VAR_12, VAR_1))
  return -VAR_4;

 FUNC_0();

 VAR_19 = FUNC_6(VAR_13, sizeof(*VAR_18), VAR_16, VAR_6,
         VAR_11, VAR_14);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_18 = FUNC_5(VAR_13);
 if (VAR_18->rtm_table != VAR_10 || VAR_18->rtm_type != VAR_9)
  return -VAR_2;
 if (VAR_16[VAR_5] == ((void*)0) || VAR_16[VAR_7] == ((void*)0))
  return -VAR_2;
 VAR_20 = FUNC_4(VAR_16[VAR_5]);
 if (VAR_20 & 3)
  return -VAR_2;

 VAR_17 = FUNC_1(VAR_15, FUNC_3(VAR_16[VAR_7]));
 if (VAR_17 == ((void*)0))
  return -VAR_3;

 if (VAR_13->nlmsg_type == VAR_8)
  VAR_19 = FUNC_7(VAR_17, VAR_20);
 else
  VAR_19 = FUNC_8(VAR_17, VAR_20);
 if (!VAR_19)
  FUNC_9(VAR_13->nlmsg_type, VAR_17, VAR_20);
 return VAR_19;
}
