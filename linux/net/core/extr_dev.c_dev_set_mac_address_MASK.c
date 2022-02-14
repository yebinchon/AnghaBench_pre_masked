
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_family; int sa_data; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device_ops {int (* ndo_set_mac_address ) (struct net_device*,struct sockaddr*) ;} ;
struct net_device {scalar_t__ type; int addr_len; int dev_addr; int addr_assign_type; struct net_device_ops* netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,struct netlink_ext_ack*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,struct sockaddr*) ;

int FUNC_5(struct net_device *VAR_5, struct sockaddr *VAR_6,
   struct netlink_ext_ack *VAR_7)
{
 const struct net_device_ops *VAR_8 = VAR_5->netdev_ops;
 int VAR_9;

 if (!VAR_8->ndo_set_mac_address)
  return -VAR_2;
 if (VAR_6->sa_family != VAR_5->type)
  return -VAR_0;
 if (!FUNC_3(VAR_5))
  return -VAR_1;
 VAR_9 = FUNC_2(VAR_5, VAR_6->sa_data, VAR_7);
 if (VAR_9)
  return VAR_9;
 VAR_9 = VAR_8->ndo_set_mac_address(VAR_5, VAR_6);
 if (VAR_9)
  return VAR_9;
 VAR_5->addr_assign_type = VAR_4;
 FUNC_1(VAR_3, VAR_5);
 FUNC_0(VAR_5->dev_addr, VAR_5->addr_len);
 return 0;
}
