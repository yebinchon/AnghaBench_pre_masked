
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* netdev_ops; } ;
struct TYPE_2__ {scalar_t__ ndo_start_xmit; } ;


 scalar_t__ VAR_0 ;

inline bool FUNC_0(struct net_device *VAR_1)
{
 return (VAR_1->netdev_ops->ndo_start_xmit == VAR_0);
}
