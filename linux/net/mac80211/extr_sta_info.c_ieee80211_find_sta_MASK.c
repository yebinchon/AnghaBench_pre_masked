
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_sta {int dummy; } ;
struct sta_info {struct ieee80211_sta sta; int uploaded; } ;
struct ieee80211_vif {int dummy; } ;


 struct sta_info* FUNC_0 (int ,int const*) ;
 int FUNC_1 (struct ieee80211_vif*) ;

struct ieee80211_sta *FUNC_2(struct ieee80211_vif *VAR_0,
      const u8 *VAR_1)
{
 struct sta_info *VAR_2;

 if (!VAR_0)
  return ((void*)0);

 VAR_2 = FUNC_0(FUNC_1(VAR_0), VAR_1);
 if (!VAR_2)
  return ((void*)0);

 if (!VAR_2->uploaded)
  return ((void*)0);

 return &VAR_2->sta;
}
