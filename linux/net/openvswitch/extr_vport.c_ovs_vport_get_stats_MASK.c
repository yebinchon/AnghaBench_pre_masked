
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport {int dev; } ;
struct rtnl_link_stats64 {int tx_packets; int tx_bytes; int rx_packets; int rx_bytes; int rx_dropped; int tx_dropped; int tx_errors; int rx_errors; } ;
struct ovs_vport_stats {int tx_packets; int tx_bytes; int rx_packets; int rx_bytes; int rx_dropped; int tx_dropped; int tx_errors; int rx_errors; } ;


 struct rtnl_link_stats64* FUNC_0 (int ,struct rtnl_link_stats64*) ;

void FUNC_1(struct vport *VAR_0, struct ovs_vport_stats *VAR_1)
{
 const struct rtnl_link_stats64 *VAR_2;
 struct rtnl_link_stats64 VAR_3;

 VAR_2 = FUNC_0(VAR_0->dev, &VAR_3);
 VAR_1->rx_errors = VAR_2->rx_errors;
 VAR_1->tx_errors = VAR_2->tx_errors;
 VAR_1->tx_dropped = VAR_2->tx_dropped;
 VAR_1->rx_dropped = VAR_2->rx_dropped;

 VAR_1->rx_bytes = VAR_2->rx_bytes;
 VAR_1->rx_packets = VAR_2->rx_packets;
 VAR_1->tx_bytes = VAR_2->tx_bytes;
 VAR_1->tx_packets = VAR_2->tx_packets;
}
