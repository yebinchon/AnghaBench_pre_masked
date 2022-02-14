
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nh_config {int dummy; } ;
struct nexthop {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 scalar_t__ FUNC_0 (struct nexthop*) ;
 int FUNC_1 (struct nexthop*) ;
 struct nexthop* FUNC_2 (struct net*,struct nh_config*,struct netlink_ext_ack*) ;
 int FUNC_3 (struct net*,struct sk_buff*,struct nlmsghdr*,struct nh_config*,struct netlink_ext_ack*) ;
 struct net* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_0, struct nlmsghdr *VAR_1,
      struct netlink_ext_ack *VAR_2)
{
 struct net *VAR_3 = FUNC_4(VAR_0->sk);
 struct nh_config VAR_4;
 struct nexthop *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_3, VAR_0, VAR_1, &VAR_4, VAR_2);
 if (!VAR_6) {
  VAR_5 = FUNC_2(VAR_3, &VAR_4, VAR_2);
  if (FUNC_0(VAR_5))
   VAR_6 = FUNC_1(VAR_5);
 }

 return VAR_6;
}
