
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int dummy; } ;


 struct ieee80211_sub_if_data* FUNC_0 (struct wireless_dev*) ;
 int FUNC_1 (struct ieee80211_local*,int ,int) ;

int FUNC_2(struct wiphy *VAR_0,
           struct wireless_dev *VAR_1, u64 VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 = FUNC_0(VAR_1);
 struct ieee80211_local *VAR_4 = VAR_3->local;

 return FUNC_1(VAR_4, VAR_2, 0);
}
