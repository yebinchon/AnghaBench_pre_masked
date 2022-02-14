
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_local {struct ieee80211_hw hw; } ;


 int FUNC_0 (int) ;
 struct ieee80211_local* FUNC_1 (struct wiphy*) ;

struct ieee80211_hw *FUNC_2(struct wiphy *VAR_0)
{
 struct ieee80211_local *VAR_1;
 FUNC_0(!VAR_0);

 VAR_1 = FUNC_1(VAR_0);
 return &VAR_1->hw;
}
