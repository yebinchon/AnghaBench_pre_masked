
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int vif; struct ieee80211_local* local; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct cfg80211_chan_def {int dummy; } ;
struct TYPE_2__ {int (* channel_switch_beacon ) (int *,int *,struct cfg80211_chan_def*) ;} ;


 int FUNC_0 (int *,int *,struct cfg80211_chan_def*) ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct cfg80211_chan_def*) ;

__attribute__((used)) static inline void
FUNC_2(struct ieee80211_sub_if_data *VAR_0,
     struct cfg80211_chan_def *VAR_1)
{
 struct ieee80211_local *VAR_2 = VAR_0->local;

 if (VAR_2->ops->channel_switch_beacon) {
  FUNC_1(VAR_2, VAR_0, VAR_1);
  VAR_2->ops->channel_switch_beacon(&VAR_2->hw, &VAR_0->vif,
        VAR_1);
 }
}
