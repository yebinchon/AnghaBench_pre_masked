
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_local {int dummy; } ;
struct cfg80211_ftm_responder_stats {int dummy; } ;


 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct cfg80211_ftm_responder_stats*) ;
 struct ieee80211_local* FUNC_2 (struct wiphy*) ;

__attribute__((used)) static int
FUNC_3(struct wiphy *VAR_0,
      struct net_device *VAR_1,
      struct cfg80211_ftm_responder_stats *VAR_2)
{
 struct ieee80211_local *VAR_3 = FUNC_2(VAR_0);
 struct ieee80211_sub_if_data *VAR_4 = FUNC_0(VAR_1);

 return FUNC_1(VAR_3, VAR_4, VAR_2);
}
