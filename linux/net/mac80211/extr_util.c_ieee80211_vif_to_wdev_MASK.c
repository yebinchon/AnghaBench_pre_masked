
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sub_if_data {int flags; struct wireless_dev wdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 struct ieee80211_sub_if_data* FUNC_1 (struct ieee80211_vif*) ;

struct wireless_dev *FUNC_2(struct ieee80211_vif *VAR_1)
{
 struct ieee80211_sub_if_data *VAR_2;

 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_1);

 if (!FUNC_0(VAR_2) ||
     !(VAR_2->flags & VAR_0))
  return ((void*)0);

 return &VAR_2->wdev;
}
