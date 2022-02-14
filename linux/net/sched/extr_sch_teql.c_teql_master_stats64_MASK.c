
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct teql_master {int tx_dropped; int tx_errors; int tx_bytes; int tx_packets; } ;
struct rtnl_link_stats64 {int tx_dropped; int tx_errors; int tx_bytes; int tx_packets; } ;
struct net_device {int dummy; } ;


 struct teql_master* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
    struct rtnl_link_stats64 *VAR_1)
{
 struct teql_master *VAR_2 = FUNC_0(VAR_0);

 VAR_1->tx_packets = VAR_2->tx_packets;
 VAR_1->tx_bytes = VAR_2->tx_bytes;
 VAR_1->tx_errors = VAR_2->tx_errors;
 VAR_1->tx_dropped = VAR_2->tx_dropped;
}
