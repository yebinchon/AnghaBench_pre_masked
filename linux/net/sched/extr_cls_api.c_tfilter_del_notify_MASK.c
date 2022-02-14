
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tcf_proto {TYPE_1__* ops; } ;
struct tcf_block {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; int nlmsg_seq; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int rtnl; } ;
struct Qdisc {int dummy; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int (* delete ) (struct tcf_proto*,void*,int*,int,struct netlink_ext_ack*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct net*,int ,int ,int) ;
 int FUNC_6 (struct tcf_proto*,void*,int*,int,struct netlink_ext_ack*) ;
 scalar_t__ FUNC_7 (struct net*,struct sk_buff*,struct tcf_proto*,struct tcf_block*,struct Qdisc*,int ,void*,int ,int ,int,int ,int) ;

__attribute__((used)) static int FUNC_8(struct net *VAR_8, struct sk_buff *VAR_9,
         struct nlmsghdr *VAR_10, struct tcf_proto *VAR_11,
         struct tcf_block *VAR_12, struct Qdisc *VAR_13,
         u32 VAR_14, void *VAR_15, bool VAR_16, bool *VAR_17,
         bool VAR_18, struct netlink_ext_ack *VAR_19)
{
 struct sk_buff *VAR_20;
 u32 VAR_21 = VAR_9 ? FUNC_0(VAR_9).portid : 0;
 int VAR_22;

 VAR_20 = FUNC_2(VAR_4, VAR_2);
 if (!VAR_20)
  return -VAR_1;

 if (FUNC_7(VAR_8, VAR_20, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_21,
     VAR_10->nlmsg_seq, VAR_10->nlmsg_flags, VAR_6,
     VAR_18) <= 0) {
  FUNC_1(VAR_19, "Failed to build del event notification");
  FUNC_3(VAR_20);
  return -VAR_0;
 }

 VAR_22 = VAR_11->ops->delete(VAR_11, VAR_15, VAR_17, VAR_18, VAR_19);
 if (VAR_22) {
  FUNC_3(VAR_20);
  return VAR_22;
 }

 if (VAR_16)
  VAR_22 = FUNC_4(VAR_8->rtnl, VAR_20, VAR_21, VAR_3);
 else
  VAR_22 = FUNC_5(VAR_20, VAR_8, VAR_21, VAR_7,
         VAR_10->nlmsg_flags & VAR_5);
 if (VAR_22 < 0)
  FUNC_1(VAR_19, "Failed to send filter delete notification");

 if (VAR_22 > 0)
  VAR_22 = 0;
 return VAR_22;
}
