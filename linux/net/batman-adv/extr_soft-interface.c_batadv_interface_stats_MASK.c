
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {void* rx_bytes; void* rx_packets; void* tx_dropped; void* tx_bytes; void* tx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct batadv_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct batadv_priv*,int ) ;
 struct batadv_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_2(struct net_device *VAR_5)
{
 struct batadv_priv *VAR_6 = FUNC_1(VAR_5);
 struct net_device_stats *VAR_7 = &VAR_5->stats;

 VAR_7->tx_packets = FUNC_0(VAR_6, VAR_2);
 VAR_7->tx_bytes = FUNC_0(VAR_6, VAR_3);
 VAR_7->tx_dropped = FUNC_0(VAR_6, VAR_4);
 VAR_7->rx_packets = FUNC_0(VAR_6, VAR_0);
 VAR_7->rx_bytes = FUNC_0(VAR_6, VAR_1);
 return VAR_7;
}
