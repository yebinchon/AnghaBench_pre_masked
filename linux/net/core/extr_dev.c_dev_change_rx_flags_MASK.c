
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_ops {int (* ndo_change_rx_flags ) (struct net_device*,int) ;} ;
struct net_device {struct net_device_ops* netdev_ops; } ;


 int FUNC_0 (struct net_device*,int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, int VAR_1)
{
 const struct net_device_ops *VAR_2 = VAR_0->netdev_ops;

 if (VAR_2->ndo_change_rx_flags)
  VAR_2->ndo_change_rx_flags(VAR_0, VAR_1);
}
