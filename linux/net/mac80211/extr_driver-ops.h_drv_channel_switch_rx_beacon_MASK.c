
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int vif; struct ieee80211_local* local; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct ieee80211_channel_switch {int dummy; } ;
struct TYPE_2__ {int (* channel_switch_rx_beacon ) (int *,int *,struct ieee80211_channel_switch*) ;} ;


 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 (int *,int *,struct ieee80211_channel_switch*) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct ieee80211_channel_switch*) ;

__attribute__((used)) static inline void
FUNC_3(struct ieee80211_sub_if_data *VAR_0,
        struct ieee80211_channel_switch *VAR_1)
{
 struct ieee80211_local *VAR_2 = VAR_0->local;

 if (!FUNC_0(VAR_0))
  return;

 FUNC_2(VAR_2, VAR_0, VAR_1);
 if (VAR_2->ops->channel_switch_rx_beacon)
  VAR_2->ops->channel_switch_rx_beacon(&VAR_2->hw, &VAR_0->vif,
           VAR_1);
}
