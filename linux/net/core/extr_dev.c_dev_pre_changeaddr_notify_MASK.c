
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {struct netlink_ext_ack* extack; struct net_device* dev; } ;
struct netdev_notifier_pre_changeaddr_info {char const* dev_addr; TYPE_1__ info; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int) ;

int FUNC_2(struct net_device *VAR_1, const char *VAR_2,
         struct netlink_ext_ack *VAR_3)
{
 struct netdev_notifier_pre_changeaddr_info VAR_4 = {
  .info.dev = VAR_1,
  .info.extack = VAR_3,
  .dev_addr = VAR_2,
 };
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, &VAR_4.info);
 return FUNC_1(VAR_5);
}
