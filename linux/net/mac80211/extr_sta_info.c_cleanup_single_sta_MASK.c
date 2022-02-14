
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {struct ieee80211_sub_if_data* sdata; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int dummy; } ;


 int FUNC_0 (struct sta_info*) ;
 int FUNC_1 (struct ieee80211_local*,struct sta_info*) ;

__attribute__((used)) static void FUNC_2(struct sta_info *VAR_0)
{
 struct ieee80211_sub_if_data *VAR_1 = VAR_0->sdata;
 struct ieee80211_local *VAR_2 = VAR_1->local;

 FUNC_0(VAR_0);
 FUNC_1(VAR_2, VAR_0);
}
