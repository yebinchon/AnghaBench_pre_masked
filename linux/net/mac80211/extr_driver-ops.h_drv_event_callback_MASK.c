
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct ieee80211_event {int dummy; } ;
struct TYPE_2__ {int (* event_callback ) (int *,int *,struct ieee80211_event const*) ;} ;


 int FUNC_0 (int *,int *,struct ieee80211_event const*) ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct ieee80211_event const*) ;
 int FUNC_2 (struct ieee80211_local*) ;

__attribute__((used)) static inline void FUNC_3(struct ieee80211_local *VAR_0,
          struct ieee80211_sub_if_data *VAR_1,
          const struct ieee80211_event *VAR_2)
{
 FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_0->ops->event_callback)
  VAR_0->ops->event_callback(&VAR_0->hw, &VAR_1->vif, VAR_2);
 FUNC_2(VAR_0);
}
