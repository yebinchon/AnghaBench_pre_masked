
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ disable_ipv6; } ;
struct inet6_dev {TYPE_1__ cnf; } ;


 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 struct inet6_dev* FUNC_1 (struct net_device const*) ;

__attribute__((used)) static bool FUNC_2(const struct net_device *VAR_0,
       struct netlink_ext_ack *VAR_1)
{
 struct inet6_dev *VAR_2 = FUNC_1(VAR_0);

 if (!VAR_2 || VAR_2->cnf.disable_ipv6) {
  FUNC_0(VAR_1, "IPv6 is disabled on this device");
  return 0;
 }

 return 1;
}
