
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct netdev_notifier_info {struct netlink_ext_ack* extack; struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (unsigned long,struct netdev_notifier_info*) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_0,
        struct net_device *VAR_1,
        struct netlink_ext_ack *VAR_2)
{
 struct netdev_notifier_info VAR_3 = {
  .dev = VAR_1,
  .extack = VAR_2,
 };

 return FUNC_0(VAR_0, &VAR_3);
}
