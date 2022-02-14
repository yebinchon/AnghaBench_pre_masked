
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct netdev_notifier_changeupper_info {scalar_t__ linking; int upper_dev; int info; } ;
struct net_device {int dummy; } ;
struct dsa_port {int bridge_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 struct dsa_port* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 struct netlink_ext_ack* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct net_device* FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_2,
          struct netdev_notifier_changeupper_info *
          VAR_3)
{
 struct netlink_ext_ack *VAR_4;
 struct net_device *VAR_5;
 struct dsa_port *VAR_6;

 VAR_4 = FUNC_5(&VAR_3->info);

 if (!FUNC_4(VAR_2))
  return VAR_1;

 VAR_5 = FUNC_8(VAR_2);
 if (!FUNC_2(VAR_5))
  return VAR_1;

 VAR_6 = FUNC_3(VAR_5);
 if (!VAR_6->bridge_dev)
  return VAR_1;


 if (FUNC_1(VAR_6->bridge_dev) &&
     FUNC_6(VAR_3->upper_dev) && VAR_3->linking) {
  FUNC_0(VAR_4,
       "Cannot enslave VLAN device into VLAN aware bridge");
  return FUNC_7(-VAR_0);
 }

 return VAR_1;
}
