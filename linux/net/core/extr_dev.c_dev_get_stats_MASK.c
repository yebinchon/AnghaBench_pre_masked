
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {unsigned long rx_dropped; unsigned long tx_dropped; unsigned long rx_nohandler; } ;
struct net_device_ops {int * (* ndo_get_stats ) (struct net_device*) ;int (* ndo_get_stats64 ) (struct net_device*,struct rtnl_link_stats64*) ;} ;
struct net_device {int rx_nohandler; int tx_dropped; int rx_dropped; int stats; struct net_device_ops* netdev_ops; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct rtnl_link_stats64*,int ,int) ;
 int FUNC_2 (struct rtnl_link_stats64*,int *) ;
 int FUNC_3 (struct net_device*,struct rtnl_link_stats64*) ;
 int * FUNC_4 (struct net_device*) ;

struct rtnl_link_stats64 *FUNC_5(struct net_device *VAR_0,
     struct rtnl_link_stats64 *VAR_1)
{
 const struct net_device_ops *VAR_2 = VAR_0->netdev_ops;

 if (VAR_2->ndo_get_stats64) {
  FUNC_1(VAR_1, 0, sizeof(*VAR_1));
  VAR_2->ndo_get_stats64(VAR_0, VAR_1);
 } else if (VAR_2->ndo_get_stats) {
  FUNC_2(VAR_1, VAR_2->ndo_get_stats(VAR_0));
 } else {
  FUNC_2(VAR_1, &VAR_0->stats);
 }
 VAR_1->rx_dropped += (unsigned long)FUNC_0(&VAR_0->rx_dropped);
 VAR_1->tx_dropped += (unsigned long)FUNC_0(&VAR_0->tx_dropped);
 VAR_1->rx_nohandler += (unsigned long)FUNC_0(&VAR_0->rx_nohandler);
 return VAR_1;
}
