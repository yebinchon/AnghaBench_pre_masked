
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tc_action {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; int nlmsg_seq; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_1 (size_t,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct net*,int ,int ,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct tc_action**,int ,int ,int,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct net *VAR_7, struct nlmsghdr *VAR_8, struct tc_action *VAR_9[],
        u32 VAR_10, size_t VAR_11, struct netlink_ext_ack *VAR_12)
{
 struct sk_buff *VAR_13;
 int VAR_14 = 0;

 VAR_13 = FUNC_1(VAR_11 <= VAR_3 ? VAR_3 : VAR_11,
   VAR_2);
 if (!VAR_13)
  return -VAR_1;

 if (FUNC_4(VAR_13, VAR_9, VAR_10, VAR_8->nlmsg_seq, VAR_8->nlmsg_flags,
    VAR_5, 0, 0) <= 0) {
  FUNC_0(VAR_12, "Failed to fill netlink attributes while adding TC action");
  FUNC_2(VAR_13);
  return -VAR_0;
 }

 VAR_14 = FUNC_3(VAR_13, VAR_7, VAR_10, VAR_6,
        VAR_8->nlmsg_flags & VAR_4);
 if (VAR_14 > 0)
  VAR_14 = 0;
 return VAR_14;
}
