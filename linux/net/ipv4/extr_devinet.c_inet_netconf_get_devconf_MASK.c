
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
struct TYPE_3__ {struct ipv4_devconf* devconf_dflt; struct ipv4_devconf* devconf_all; } ;
struct net {TYPE_1__ ipv4; } ;
struct ipv4_devconf {int dummy; } ;
struct in_device {struct ipv4_devconf cnf; } ;
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
 struct in_device* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*,int,struct ipv4_devconf*,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,struct nlmsghdr*,struct nlattr**,struct netlink_ext_ack*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct nlattr*) ;
 struct sk_buff* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct sk_buff*,struct net*,int ) ;
 struct net* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_8,
        struct nlmsghdr *VAR_9,
        struct netlink_ext_ack *VAR_10)
{
 struct net *VAR_11 = FUNC_11(VAR_8->sk);
 struct nlattr *VAR_12[VAR_6+1];
 struct sk_buff *VAR_13;
 struct ipv4_devconf *VAR_14;
 struct in_device *VAR_15;
 struct net_device *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_18 = FUNC_6(VAR_8, VAR_9, VAR_12, VAR_10);
 if (VAR_18)
  goto errout;

 VAR_18 = -VAR_0;
 if (!VAR_12[VAR_5])
  goto errout;

 VAR_17 = FUNC_8(VAR_12[VAR_5]);
 switch (VAR_17) {
 case 129:
  VAR_14 = VAR_11->ipv4.devconf_all;
  break;
 case 128:
  VAR_14 = VAR_11->ipv4.devconf_dflt;
  break;
 default:
  VAR_16 = FUNC_2(VAR_11, VAR_17);
  if (!VAR_16)
   goto errout;
  VAR_15 = FUNC_3(VAR_16);
  if (!VAR_15)
   goto errout;
  VAR_14 = &VAR_15->cnf;
  break;
 }

 VAR_18 = -VAR_2;
 VAR_13 = FUNC_9(FUNC_5(VAR_4), VAR_3);
 if (!VAR_13)
  goto errout;

 VAR_18 = FUNC_4(VAR_13, VAR_17, VAR_14,
     FUNC_0(VAR_8).portid,
     VAR_9->nlmsg_seq, VAR_7, 0,
     VAR_4);
 if (VAR_18 < 0) {

  FUNC_1(VAR_18 == -VAR_1);
  FUNC_7(VAR_13);
  goto errout;
 }
 VAR_18 = FUNC_10(VAR_13, VAR_11, FUNC_0(VAR_8).portid);
errout:
 return VAR_18;
}
