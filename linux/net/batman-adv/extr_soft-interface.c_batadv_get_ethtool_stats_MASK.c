
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct batadv_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct batadv_priv*,int) ;
 struct batadv_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1,
         struct ethtool_stats *VAR_2, u64 *VAR_3)
{
 struct batadv_priv *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_3[VAR_5] = FUNC_0(VAR_4, VAR_5);
}
