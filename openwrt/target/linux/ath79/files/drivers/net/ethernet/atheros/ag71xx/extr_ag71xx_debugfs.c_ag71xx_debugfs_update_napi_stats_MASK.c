
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ag71xx_napi_stats {int rx_packets; int rx_packets_max; int tx_packets; int tx_packets_max; int * tx; int tx_count; int * rx; int rx_count; } ;
struct TYPE_2__ {struct ag71xx_napi_stats napi_stats; } ;
struct ag71xx {TYPE_1__ debug; } ;


 int VAR_0 ;

void FUNC_0(struct ag71xx *VAR_1, int VAR_2, int VAR_3)
{
 struct ag71xx_napi_stats *VAR_4 = &VAR_1->debug.napi_stats;

 if (VAR_2) {
  VAR_4->rx_count++;
  VAR_4->rx_packets += VAR_2;
  if (VAR_2 <= VAR_0)
   VAR_4->rx[VAR_2]++;
  if (VAR_2 > VAR_4->rx_packets_max)
   VAR_4->rx_packets_max = VAR_2;
 }

 if (VAR_3) {
  VAR_4->tx_count++;
  VAR_4->tx_packets += VAR_3;
  if (VAR_3 <= VAR_0)
   VAR_4->tx[VAR_3]++;
  if (VAR_3 > VAR_4->tx_packets_max)
   VAR_4->tx_packets_max = VAR_3;
 }
}
