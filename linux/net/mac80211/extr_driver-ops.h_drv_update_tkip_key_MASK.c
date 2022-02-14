
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ieee80211_sta {int dummy; } ;
struct sta_info {struct ieee80211_sta sta; } ;
struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct ieee80211_key_conf {int dummy; } ;
struct TYPE_2__ {int (* update_tkip_key ) (int *,int *,struct ieee80211_key_conf*,struct ieee80211_sta*,int ,int *) ;} ;


 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 struct ieee80211_sub_if_data* FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 (int *,int *,struct ieee80211_key_conf*,struct ieee80211_sta*,int ,int *) ;
 int FUNC_3 (struct ieee80211_local*) ;
 int FUNC_4 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct ieee80211_key_conf*,struct ieee80211_sta*,int ) ;

__attribute__((used)) static inline void FUNC_5(struct ieee80211_local *VAR_0,
           struct ieee80211_sub_if_data *VAR_1,
           struct ieee80211_key_conf *VAR_2,
           struct sta_info *VAR_3, u32 VAR_4,
           u16 *VAR_5)
{
 struct ieee80211_sta *VAR_6 = ((void*)0);

 if (VAR_3)
  VAR_6 = &VAR_3->sta;

 VAR_1 = FUNC_1(VAR_1);
 if (!FUNC_0(VAR_1))
  return;

 FUNC_4(VAR_0, VAR_1, VAR_2, VAR_6, VAR_4);
 if (VAR_0->ops->update_tkip_key)
  VAR_0->ops->update_tkip_key(&VAR_0->hw, &VAR_1->vif, VAR_2,
         VAR_6, VAR_4, VAR_5);
 FUNC_3(VAR_0);
}
