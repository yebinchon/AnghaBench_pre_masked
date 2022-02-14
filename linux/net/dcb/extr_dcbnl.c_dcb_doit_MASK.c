
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int sk; } ;
struct reply_func {int (* cb ) (struct net_device*,struct nlmsghdr*,int ,struct nlattr**,struct sk_buff*) ;int type; } ;
struct nlmsghdr {scalar_t__ nlmsg_type; int nlmsg_seq; int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dcbnl_ops; } ;
struct net {int dummy; } ;
struct dcbmsg {size_t cmd; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_9 ;
 struct net_device* FUNC_1 (struct net*,int ) ;
 struct sk_buff* FUNC_2 (int ,size_t,int ,int ,int ,struct nlmsghdr**) ;
 int VAR_10 ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct nlattr*) ;
 struct dcbmsg* FUNC_5 (struct nlmsghdr*) ;
 int FUNC_6 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct nlmsghdr*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 struct reply_func* VAR_11 ;
 int FUNC_9 (struct sk_buff*,struct net*,int ) ;
 struct net* FUNC_10 (int ) ;
 int FUNC_11 (struct net_device*,struct nlmsghdr*,int ,struct nlattr**,struct sk_buff*) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_12, struct nlmsghdr *VAR_13,
      struct netlink_ext_ack *VAR_14)
{
 struct net *VAR_15 = FUNC_10(VAR_12->sk);
 struct net_device *VAR_16;
 struct dcbmsg *VAR_17 = FUNC_5(VAR_13);
 struct nlattr *VAR_18[VAR_2 + 1];
 u32 VAR_19 = VAR_12 ? FUNC_0(VAR_12).portid : 0;
 int VAR_20 = -VAR_4;
 struct sk_buff *VAR_21;
 struct nlmsghdr *VAR_22 = ((void*)0);
 const struct reply_func *VAR_23;

 if ((VAR_13->nlmsg_type == VAR_9) && !FUNC_3(VAR_12, VAR_0))
  return -VAR_8;

 VAR_20 = FUNC_8(VAR_13, sizeof(*VAR_17), VAR_18, VAR_2,
         VAR_10, VAR_14);
 if (VAR_20 < 0)
  return VAR_20;

 if (VAR_17->cmd > VAR_3)
  return -VAR_4;


 VAR_23 = &VAR_11[VAR_17->cmd];
 if (!VAR_23->cb)
  return -VAR_7;

 if (!VAR_18[VAR_1])
  return -VAR_4;

 VAR_16 = FUNC_1(VAR_15, FUNC_4(VAR_18[VAR_1]));
 if (!VAR_16)
  return -VAR_6;

 if (!VAR_16->dcbnl_ops)
  return -VAR_7;

 VAR_21 = FUNC_2(VAR_23->type, VAR_17->cmd, VAR_19, VAR_13->nlmsg_seq,
     VAR_13->nlmsg_flags, &VAR_22);
 if (!VAR_21)
  return -VAR_5;

 VAR_20 = VAR_23->cb(VAR_16, VAR_13, VAR_13->nlmsg_seq, VAR_18, VAR_21);
 if (VAR_20 < 0) {
  FUNC_7(VAR_21);
  goto out;
 }

 FUNC_6(VAR_21, VAR_22);

 VAR_20 = FUNC_9(VAR_21, VAR_15, VAR_19);
out:
 return VAR_20;
}
