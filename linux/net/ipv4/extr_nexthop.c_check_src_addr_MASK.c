
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct in6_addr const*) ;

__attribute__((used)) static int FUNC_2(const struct in6_addr *VAR_1,
     struct netlink_ext_ack *VAR_2)
{
 if (!FUNC_1(VAR_1)) {
  FUNC_0(VAR_2, "IPv6 routes using source address can not use nexthop objects");
  return -VAR_0;
 }
 return 0;
}
