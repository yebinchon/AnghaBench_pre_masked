
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {TYPE_1__* netdev_ops; } ;
typedef int __be16 ;
struct TYPE_2__ {int (* ndo_vlan_rx_kill_vid ) (struct net_device*,int ,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 int FUNC_2 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, __be16 VAR_2, u16 VAR_3)
{
 if (!FUNC_2(VAR_1, VAR_2))
  return 0;

 if (FUNC_0(VAR_1))
  return VAR_1->netdev_ops->ndo_vlan_rx_kill_vid(VAR_1, VAR_2, VAR_3);
 else
  return -VAR_0;
}
