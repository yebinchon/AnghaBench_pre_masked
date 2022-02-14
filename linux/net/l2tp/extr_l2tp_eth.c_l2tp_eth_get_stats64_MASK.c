
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {unsigned long tx_bytes; unsigned long tx_packets; unsigned long tx_dropped; unsigned long rx_bytes; unsigned long rx_packets; unsigned long rx_errors; } ;
struct net_device {int dummy; } ;
struct l2tp_eth {int rx_errors; int rx_packets; int rx_bytes; int tx_dropped; int tx_packets; int tx_bytes; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct l2tp_eth* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
     struct rtnl_link_stats64 *VAR_1)
{
 struct l2tp_eth *VAR_2 = FUNC_1(VAR_0);

 VAR_1->tx_bytes = (unsigned long) FUNC_0(&VAR_2->tx_bytes);
 VAR_1->tx_packets = (unsigned long) FUNC_0(&VAR_2->tx_packets);
 VAR_1->tx_dropped = (unsigned long) FUNC_0(&VAR_2->tx_dropped);
 VAR_1->rx_bytes = (unsigned long) FUNC_0(&VAR_2->rx_bytes);
 VAR_1->rx_packets = (unsigned long) FUNC_0(&VAR_2->rx_packets);
 VAR_1->rx_errors = (unsigned long) FUNC_0(&VAR_2->rx_errors);

}
