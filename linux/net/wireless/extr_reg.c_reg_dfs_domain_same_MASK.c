
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int regd; } ;
struct ieee80211_regdomain {scalar_t__ dfs_region; } ;


 int VAR_0 ;
 struct ieee80211_regdomain* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

bool FUNC_3(struct wiphy *VAR_1, struct wiphy *VAR_2)
{
 const struct ieee80211_regdomain *VAR_3 = ((void*)0);
 const struct ieee80211_regdomain *VAR_4 = ((void*)0);
 const struct ieee80211_regdomain *VAR_5 = ((void*)0);
 bool VAR_6;

 FUNC_1();

 VAR_5 = FUNC_0(VAR_0);
 VAR_3 = FUNC_0(VAR_1->regd);
 if (!VAR_3)
  VAR_3 = VAR_5;

 VAR_4 = FUNC_0(VAR_2->regd);
 if (!VAR_4)
  VAR_4 = VAR_5;

 VAR_6 = VAR_3->dfs_region == VAR_4->dfs_region;

 FUNC_2();

 return VAR_6;
}
