
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum nl80211_dfs_regions { ____Placeholder_nl80211_dfs_regions } nl80211_dfs_regions ;






 int FUNC_0 (char*,int) ;

bool FUNC_1(enum nl80211_dfs_regions VAR_0)
{
 switch (VAR_0) {
 case 128:
 case 130:
 case 131:
 case 129:
  return 1;
 default:
  FUNC_0("Ignoring unknown DFS master region: %d\n", VAR_0);
  return 0;
 }
}
