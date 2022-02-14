
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {TYPE_3__* netdev_ops; } ;
struct TYPE_5__ {void* rx_ring_size; } ;
struct TYPE_4__ {void* tx_ring_size; } ;
struct fe_priv {TYPE_2__ rx_ring; TYPE_1__ tx_ring; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; } ;
struct TYPE_6__ {int (* ndo_open ) (struct net_device*) ;int (* ndo_stop ) (struct net_device*) ;} ;


 void* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 struct fe_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2,
       struct ethtool_ringparam *VAR_3)
{
 struct fe_priv *VAR_4 = FUNC_2(VAR_2);

 if ((VAR_3->tx_pending < 2) ||
     (VAR_3->rx_pending < 2) ||
     (VAR_3->rx_pending > VAR_1) ||
     (VAR_3->tx_pending > VAR_1))
  return -VAR_0;

 VAR_2->netdev_ops->ndo_stop(VAR_2);

 VAR_4->tx_ring.tx_ring_size = FUNC_0(FUNC_1(VAR_3->tx_pending) - 1);
 VAR_4->rx_ring.rx_ring_size = FUNC_0(FUNC_1(VAR_3->rx_pending) - 1);

 VAR_2->netdev_ops->ndo_open(VAR_2);

 return 0;
}
