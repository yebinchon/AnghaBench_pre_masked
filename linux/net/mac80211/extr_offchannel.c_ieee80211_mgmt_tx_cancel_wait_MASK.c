
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct ieee80211_local {int dummy; } ;


 int FUNC_0 (struct ieee80211_local*,int ,int) ;
 struct ieee80211_local* FUNC_1 (struct wiphy*) ;

int FUNC_2(struct wiphy *VAR_0,
      struct wireless_dev *VAR_1, u64 VAR_2)
{
 struct ieee80211_local *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3, VAR_2, 1);
}
