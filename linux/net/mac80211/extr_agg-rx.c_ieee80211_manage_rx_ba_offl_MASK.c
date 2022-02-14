
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int work; int tid_rx_manage_offl; } ;
struct sta_info {TYPE_1__ ampdu_mlme; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int hw; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int,int ) ;
 struct sta_info* FUNC_4 (struct ieee80211_sub_if_data*,int const*) ;
 struct ieee80211_sub_if_data* FUNC_5 (struct ieee80211_vif*) ;

void FUNC_6(struct ieee80211_vif *VAR_0,
     const u8 *VAR_1, unsigned int VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 = FUNC_5(VAR_0);
 struct ieee80211_local *VAR_4 = VAR_3->local;
 struct sta_info *VAR_5;

 FUNC_1();
 VAR_5 = FUNC_4(VAR_3, VAR_1);
 if (!VAR_5)
  goto unlock;

 FUNC_3(VAR_2, VAR_5->ampdu_mlme.tid_rx_manage_offl);
 FUNC_0(&VAR_4->hw, &VAR_5->ampdu_mlme.work);
 unlock:
 FUNC_2();
}
