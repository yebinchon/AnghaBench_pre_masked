
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* ieee80211_ptr; } ;
struct ieee80211_local {int dummy; } ;
struct ethtool_ringparam {int rx_max_pending; int rx_pending; int tx_max_pending; int tx_pending; } ;
struct TYPE_2__ {int wiphy; } ;


 int FUNC_0 (struct ieee80211_local*,int *,int *,int *,int *) ;
 int FUNC_1 (struct ethtool_ringparam*,int ,int) ;
 struct ieee80211_local* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
        struct ethtool_ringparam *VAR_1)
{
 struct ieee80211_local *VAR_2 = FUNC_2(VAR_0->ieee80211_ptr->wiphy);

 FUNC_1(VAR_1, 0, sizeof(*VAR_1));

 FUNC_0(VAR_2, &VAR_1->tx_pending, &VAR_1->tx_max_pending,
     &VAR_1->rx_pending, &VAR_1->rx_max_pending);
}
