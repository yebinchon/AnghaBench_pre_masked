
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int ifindex; TYPE_1__* netdev_ops; } ;
struct TYPE_2__ {int (* ndo_get_iflink ) (struct net_device const*) ;} ;


 int FUNC_0 (struct net_device const*) ;

int FUNC_1(const struct net_device *VAR_0)
{
 if (VAR_0->netdev_ops && VAR_0->netdev_ops->ndo_get_iflink)
  return VAR_0->netdev_ops->ndo_get_iflink(VAR_0);

 return VAR_0->ifindex;
}
