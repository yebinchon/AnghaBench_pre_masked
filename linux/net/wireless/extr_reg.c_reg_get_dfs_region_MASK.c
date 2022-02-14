
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dev; } ;
struct ieee80211_regdomain {scalar_t__ dfs_region; } ;
typedef enum nl80211_dfs_regions { ____Placeholder_nl80211_dfs_regions } nl80211_dfs_regions ;


 int FUNC_0 (int *) ;
 struct ieee80211_regdomain* FUNC_1 () ;
 struct ieee80211_regdomain* FUNC_2 (struct wiphy*) ;
 int FUNC_3 (char*,int ,int ,int ) ;
 int FUNC_4 (scalar_t__) ;

enum nl80211_dfs_regions FUNC_5(struct wiphy *VAR_0)
{
 const struct ieee80211_regdomain *VAR_1 = ((void*)0);
 const struct ieee80211_regdomain *VAR_2 = ((void*)0);

 VAR_1 = FUNC_1();
 if (!VAR_0)
  goto out;

 VAR_2 = FUNC_2(VAR_0);
 if (!VAR_2)
  goto out;

 if (VAR_2->dfs_region == VAR_1->dfs_region)
  goto out;

 FUNC_3("%s: device specific dfs_region (%s) disagrees with cfg80211's central dfs_region (%s)\n",
   FUNC_0(&VAR_0->dev),
   FUNC_4(VAR_2->dfs_region),
   FUNC_4(VAR_1->dfs_region));

out:
 return VAR_1->dfs_region;
}
