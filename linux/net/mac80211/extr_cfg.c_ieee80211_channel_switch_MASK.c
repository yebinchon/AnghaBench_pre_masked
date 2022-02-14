
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int mtx; } ;
struct cfg80211_csa_settings {int dummy; } ;


 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct wiphy*,struct net_device*,struct cfg80211_csa_settings*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct wiphy *VAR_0, struct net_device *VAR_1,
        struct cfg80211_csa_settings *VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 = FUNC_0(VAR_1);
 struct ieee80211_local *VAR_4 = VAR_3->local;
 int VAR_5;

 FUNC_2(&VAR_4->mtx);
 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);
 FUNC_3(&VAR_4->mtx);

 return VAR_5;
}
