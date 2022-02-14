
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum nl80211_dfs_regions { ____Placeholder_nl80211_dfs_regions } nl80211_dfs_regions ;







__attribute__((used)) static const char *FUNC_0(enum nl80211_dfs_regions VAR_0)
{
 switch (VAR_0) {
 case 128:
  return "unset";
 case 130:
  return "FCC";
 case 131:
  return "ETSI";
 case 129:
  return "JP";
 }
 return "Unknown";
}
