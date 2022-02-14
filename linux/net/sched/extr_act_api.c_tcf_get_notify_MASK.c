
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tc_action {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct net*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct tc_action**,int ,int ,int ,int,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct net *VAR_4, u32 VAR_5, struct nlmsghdr *VAR_6,
        struct tc_action *VAR_7[], int VAR_8,
        struct netlink_ext_ack *VAR_9)
{
 struct sk_buff *VAR_10;

 VAR_10 = FUNC_1(VAR_3, VAR_2);
 if (!VAR_10)
  return -VAR_1;
 if (FUNC_4(VAR_10, VAR_7, VAR_5, VAR_6->nlmsg_seq, 0, VAR_8,
    0, 1) <= 0) {
  FUNC_0(VAR_9, "Failed to fill netlink attributes while adding TC action");
  FUNC_2(VAR_10);
  return -VAR_0;
 }

 return FUNC_3(VAR_10, VAR_4, VAR_5);
}
