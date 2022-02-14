
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* ieee80211_ptr; } ;
struct ieee80211_local {int dummy; } ;
struct ethtool_ringparam {scalar_t__ rx_mini_pending; scalar_t__ rx_jumbo_pending; int rx_pending; int tx_pending; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_local*,int ,int ) ;
 struct ieee80211_local* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
       struct ethtool_ringparam *VAR_2)
{
 struct ieee80211_local *VAR_3 = FUNC_1(VAR_1->ieee80211_ptr->wiphy);

 if (VAR_2->rx_mini_pending != 0 || VAR_2->rx_jumbo_pending != 0)
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_2->tx_pending, VAR_2->rx_pending);
}
