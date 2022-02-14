
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {struct ipv6_devconf* devconf_dflt; struct ipv6_devconf* devconf_all; } ;
struct net {TYPE_1__ ipv6; } ;
struct ipv6_devconf {int dummy; } ;
struct inet6_dev {struct ipv6_devconf cnf; } ;
struct TYPE_4__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;


 int VAR_6 ;
 TYPE_2__ FUNC_0 (struct sk_buff*) ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 struct net_device* FUNC_2 (struct net*,int) ;
 int FUNC_3 (struct net_device*) ;
 struct inet6_dev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct inet6_dev*) ;
 int FUNC_6 (struct sk_buff*,int,struct ipv6_devconf*,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*,struct nlmsghdr*,struct nlattr**,struct netlink_ext_ack*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct nlattr*) ;
 struct sk_buff* FUNC_11 (int ,int ) ;
 int FUNC_12 (struct sk_buff*,struct net*,int ) ;
 struct net* FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_8,
         struct nlmsghdr *VAR_9,
         struct netlink_ext_ack *VAR_10)
{
 struct net *VAR_11 = FUNC_13(VAR_8->sk);
 struct nlattr *VAR_12[VAR_6+1];
 struct inet6_dev *VAR_13 = ((void*)0);
 struct net_device *VAR_14 = ((void*)0);
 struct sk_buff *VAR_15;
 struct ipv6_devconf *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_18 = FUNC_8(VAR_8, VAR_9, VAR_12, VAR_10);
 if (VAR_18 < 0)
  return VAR_18;

 if (!VAR_12[VAR_5])
  return -VAR_0;

 VAR_18 = -VAR_0;
 VAR_17 = FUNC_10(VAR_12[VAR_5]);
 switch (VAR_17) {
 case 129:
  VAR_16 = VAR_11->ipv6.devconf_all;
  break;
 case 128:
  VAR_16 = VAR_11->ipv6.devconf_dflt;
  break;
 default:
  VAR_14 = FUNC_2(VAR_11, VAR_17);
  if (!VAR_14)
   return -VAR_0;
  VAR_13 = FUNC_4(VAR_14);
  if (!VAR_13)
   goto errout;
  VAR_16 = &VAR_13->cnf;
  break;
 }

 VAR_18 = -VAR_2;
 VAR_15 = FUNC_11(FUNC_7(VAR_4), VAR_3);
 if (!VAR_15)
  goto errout;

 VAR_18 = FUNC_6(VAR_15, VAR_17, VAR_16,
      FUNC_0(VAR_8).portid,
      VAR_9->nlmsg_seq, VAR_7, 0,
      VAR_4);
 if (VAR_18 < 0) {

  FUNC_1(VAR_18 == -VAR_1);
  FUNC_9(VAR_15);
  goto errout;
 }
 VAR_18 = FUNC_12(VAR_15, VAR_11, FUNC_0(VAR_8).portid);
errout:
 if (VAR_13)
  FUNC_5(VAR_13);
 if (VAR_14)
  FUNC_3(VAR_14);
 return VAR_18;
}
