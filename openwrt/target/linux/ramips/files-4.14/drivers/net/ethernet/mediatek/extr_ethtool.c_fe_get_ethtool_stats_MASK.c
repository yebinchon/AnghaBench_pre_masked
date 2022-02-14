
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct fe_priv {struct fe_hw_stats* hw_stats; } ;
struct fe_hw_stats {int syncp; int tx_bytes; int stats_lock; } ;
struct ethtool_stats {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct fe_priv*) ;
 struct fe_priv* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 unsigned int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_1,
     struct ethtool_stats *VAR_2, u64 *VAR_3)
{
 struct fe_priv *VAR_4 = FUNC_2(VAR_1);
 struct fe_hw_stats *VAR_5 = VAR_4->hw_stats;
 u64 *VAR_6, *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 if (FUNC_4(VAR_1) && FUNC_3(VAR_1)) {
  if (FUNC_5(&VAR_5->stats_lock)) {
   FUNC_1(VAR_4);
   FUNC_6(&VAR_5->stats_lock);
  }
 }

 do {
  VAR_6 = &VAR_5->tx_bytes;
  VAR_7 = VAR_3;
  VAR_8 = FUNC_7(&VAR_5->syncp);

  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_0); VAR_9++)
   *VAR_7++ = *VAR_6++;

 } while (FUNC_8(&VAR_5->syncp, VAR_8));
}
