
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtnl_link_stats64 {int tx_dropped; int rx_dropped; int tx_errors; int tx_aborted_errors; int rx_errors; int rx_crc_errors; int rx_over_errors; scalar_t__ rx_length_errors; int collisions; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct net_device {int stats; } ;
struct fe_priv {TYPE_2__* netdev; struct fe_hw_stats* hw_stats; } ;
struct fe_hw_stats {int tx_skip; int rx_checksum_errors; int rx_fcs_errors; int rx_overflow; scalar_t__ rx_long_errors; scalar_t__ rx_short_errors; int tx_collisions; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; int syncp; int stats_lock; } ;
struct TYPE_3__ {int tx_dropped; int rx_dropped; int tx_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 size_t VAR_0 ;
 unsigned int* VAR_1 ;
 int FUNC_0 (struct fe_priv*) ;
 struct fe_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct rtnl_link_stats64*,int *) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 unsigned int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_2,
    struct rtnl_link_stats64 *VAR_3)
{
 struct fe_priv *VAR_4 = FUNC_1(VAR_2);
 struct fe_hw_stats *VAR_5 = VAR_4->hw_stats;
 unsigned int VAR_6 = VAR_1[VAR_0];
 unsigned int VAR_7;

 if (!VAR_6) {
  FUNC_2(VAR_3, &VAR_2->stats);
  return;
 }

 if (FUNC_4(VAR_2) && FUNC_3(VAR_2)) {
  if (FUNC_5(&VAR_5->stats_lock)) {
   FUNC_0(VAR_4);
   FUNC_6(&VAR_5->stats_lock);
  }
 }

 do {
  VAR_7 = FUNC_7(&VAR_5->syncp);
  VAR_3->rx_packets = VAR_5->rx_packets;
  VAR_3->tx_packets = VAR_5->tx_packets;
  VAR_3->rx_bytes = VAR_5->rx_bytes;
  VAR_3->tx_bytes = VAR_5->tx_bytes;
  VAR_3->collisions = VAR_5->tx_collisions;
  VAR_3->rx_length_errors = VAR_5->rx_short_errors +
   VAR_5->rx_long_errors;
  VAR_3->rx_over_errors = VAR_5->rx_overflow;
  VAR_3->rx_crc_errors = VAR_5->rx_fcs_errors;
  VAR_3->rx_errors = VAR_5->rx_checksum_errors;
  VAR_3->tx_aborted_errors = VAR_5->tx_skip;
 } while (FUNC_8(&VAR_5->syncp, VAR_7));

 VAR_3->tx_errors = VAR_4->netdev->stats.tx_errors;
 VAR_3->rx_dropped = VAR_4->netdev->stats.rx_dropped;
 VAR_3->tx_dropped = VAR_4->netdev->stats.tx_dropped;
}
