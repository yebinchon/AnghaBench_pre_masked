
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int vif; struct ieee80211_local* local; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* abort_channel_switch ) (int *,int *) ;} ;


 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;

__attribute__((used)) static inline void
FUNC_3(struct ieee80211_sub_if_data *VAR_0)
{
 struct ieee80211_local *VAR_1 = VAR_0->local;

 if (!FUNC_0(VAR_0))
  return;

 FUNC_2(VAR_1, VAR_0);

 if (VAR_1->ops->abort_channel_switch)
  VAR_1->ops->abort_channel_switch(&VAR_1->hw, &VAR_0->vif);
}
