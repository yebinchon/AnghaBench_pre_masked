
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct station_info {int dummy; } ;
struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* sta_statistics ) (int *,int *,struct ieee80211_sta*,struct station_info*) ;} ;


 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 struct ieee80211_sub_if_data* FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 (int *,int *,struct ieee80211_sta*,struct station_info*) ;
 int FUNC_3 (struct ieee80211_local*) ;
 int FUNC_4 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct ieee80211_sta*) ;

__attribute__((used)) static inline void FUNC_5(struct ieee80211_local *VAR_0,
          struct ieee80211_sub_if_data *VAR_1,
          struct ieee80211_sta *VAR_2,
          struct station_info *VAR_3)
{
 VAR_1 = FUNC_1(VAR_1);
 if (!FUNC_0(VAR_1))
  return;

 FUNC_4(VAR_0, VAR_1, VAR_2);
 if (VAR_0->ops->sta_statistics)
  VAR_0->ops->sta_statistics(&VAR_0->hw, &VAR_1->vif, VAR_2, VAR_3);
 FUNC_3(VAR_0);
}
