
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int regd; } ;
struct ieee80211_regdomain {scalar_t__ dfs_region; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ieee80211_regdomain* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

bool FUNC_3(struct wiphy *VAR_2)
{
 const struct ieee80211_regdomain *VAR_3 = ((void*)0);
 const struct ieee80211_regdomain *VAR_4 = ((void*)0);
 bool VAR_5 = 0;

 FUNC_1();

 VAR_3 = FUNC_0(VAR_1);
 VAR_4 = FUNC_0(VAR_2->regd);
 if (!VAR_4) {
  if (VAR_3->dfs_region == VAR_0)
   VAR_5 = 1;

  FUNC_2();

  return VAR_5;
 }

 if (VAR_3->dfs_region == VAR_4->dfs_region &&
     VAR_4->dfs_region == VAR_0)
  VAR_5 = 1;

 FUNC_2();

 return VAR_5;
}
