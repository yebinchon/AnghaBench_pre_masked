
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nl_info {int portid; struct net* nl_net; struct nlmsghdr* nlh; } ;
struct nexthop {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 struct nexthop* FUNC_1 (struct net*,int ) ;
 int FUNC_2 (struct nlmsghdr*,int *,struct netlink_ext_ack*) ;
 int FUNC_3 (struct net*,struct nexthop*,struct nl_info*) ;
 struct net* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1, struct nlmsghdr *VAR_2,
      struct netlink_ext_ack *VAR_3)
{
 struct net *VAR_4 = FUNC_4(VAR_1->sk);
 struct nl_info VAR_5 = {
  .nlh = VAR_2,
  .nl_net = VAR_4,
  .portid = FUNC_0(VAR_1).portid,
 };
 struct nexthop *VAR_6;
 int VAR_7;
 u32 VAR_8;

 VAR_7 = FUNC_2(VAR_2, &VAR_8, VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_1(VAR_4, VAR_8);
 if (!VAR_6)
  return -VAR_0;

 FUNC_3(VAR_4, VAR_6, &VAR_5);

 return 0;
}
