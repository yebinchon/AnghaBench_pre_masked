
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct tid_ampdu_tx {int state; } ;
struct TYPE_2__ {int work; } ;
struct sta_info {TYPE_1__ ampdu_mlme; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int hw; } ;


 int VAR_0 ;
 struct tid_ampdu_tx* FUNC_0 (struct ieee80211_sub_if_data*,int const*,int ,struct sta_info**) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,int const*,int ) ;
 struct ieee80211_sub_if_data* FUNC_6 (struct ieee80211_vif*) ;

void FUNC_7(struct ieee80211_vif *VAR_1,
         const u8 *VAR_2, u16 VAR_3)
{
 struct ieee80211_sub_if_data *VAR_4 = FUNC_6(VAR_1);
 struct ieee80211_local *VAR_5 = VAR_4->local;
 struct sta_info *VAR_6;
 struct tid_ampdu_tx *VAR_7;

 FUNC_5(VAR_4, VAR_2, VAR_3);

 FUNC_2();
 VAR_7 = FUNC_0(VAR_4, VAR_2, VAR_3, &VAR_6);
 if (!VAR_7)
  goto out;

 FUNC_4(VAR_0, &VAR_7->state);
 FUNC_1(&VAR_5->hw, &VAR_6->ampdu_mlme.work);
 out:
 FUNC_3();
}
