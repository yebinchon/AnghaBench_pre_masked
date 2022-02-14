
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcf_proto {int dummy; } ;
struct tcf_block {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; int nlmsg_seq; } ;
struct net {int rtnl; } ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct net*,int ,int ,int) ;
 scalar_t__ FUNC_5 (struct net*,struct sk_buff*,struct tcf_proto*,struct tcf_block*,struct Qdisc*,int ,void*,int ,int ,int,int,int) ;

__attribute__((used)) static int FUNC_6(struct net *VAR_7, struct sk_buff *VAR_8,
     struct nlmsghdr *VAR_9, struct tcf_proto *VAR_10,
     struct tcf_block *VAR_11, struct Qdisc *VAR_12,
     u32 VAR_13, void *VAR_14, int VAR_15, bool VAR_16,
     bool VAR_17)
{
 struct sk_buff *VAR_18;
 u32 VAR_19 = VAR_8 ? FUNC_0(VAR_8).portid : 0;
 int VAR_20 = 0;

 VAR_18 = FUNC_1(VAR_4, VAR_2);
 if (!VAR_18)
  return -VAR_1;

 if (FUNC_5(VAR_7, VAR_18, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_19,
     VAR_9->nlmsg_seq, VAR_9->nlmsg_flags, VAR_15,
     VAR_17) <= 0) {
  FUNC_2(VAR_18);
  return -VAR_0;
 }

 if (VAR_16)
  VAR_20 = FUNC_3(VAR_7->rtnl, VAR_18, VAR_19, VAR_3);
 else
  VAR_20 = FUNC_4(VAR_18, VAR_7, VAR_19, VAR_6,
         VAR_9->nlmsg_flags & VAR_5);

 if (VAR_20 > 0)
  VAR_20 = 0;
 return VAR_20;
}
