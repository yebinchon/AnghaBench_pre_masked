
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee80211_sub_if_data {int dfs_cac_timer_work; struct ieee80211_local* local; int needed_rx_chains; int smps_mode; } ;
struct ieee80211_local {int mtx; int hw; int rx_chains; scalar_t__ scanning; int roc_list; } ;
struct cfg80211_chan_def {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct cfg80211_chan_def*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct wiphy *VAR_3,
        struct net_device *VAR_4,
        struct cfg80211_chan_def *VAR_5,
        u32 VAR_6)
{
 struct ieee80211_sub_if_data *VAR_7 = FUNC_0(VAR_4);
 struct ieee80211_local *VAR_8 = VAR_7->local;
 int VAR_9;

 FUNC_5(&VAR_8->mtx);
 if (!FUNC_3(&VAR_8->roc_list) || VAR_8->scanning) {
  VAR_9 = -VAR_0;
  goto out_unlock;
 }


 VAR_7->smps_mode = VAR_2;
 VAR_7->needed_rx_chains = VAR_8->rx_chains;

 VAR_9 = FUNC_2(VAR_7, VAR_5,
     VAR_1);
 if (VAR_9)
  goto out_unlock;

 FUNC_1(&VAR_7->local->hw,
         &VAR_7->dfs_cac_timer_work,
         FUNC_4(VAR_6));

 out_unlock:
 FUNC_6(&VAR_8->mtx);
 return VAR_9;
}
