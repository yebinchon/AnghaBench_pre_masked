
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int dummy; } ;
typedef enum nl80211_ext_feature_index { ____Placeholder_nl80211_ext_feature_index } nl80211_ext_feature_index ;


 scalar_t__ FUNC_0 (struct wiphy*,int) ;

__attribute__((used)) static bool FUNC_1(struct wiphy *VAR_0, u32 VAR_1, u32 VAR_2,
        enum nl80211_ext_feature_index VAR_3)
{
 if (!(VAR_1 & VAR_2))
  return 1;
 if (FUNC_0(VAR_0, VAR_3))
  return 1;
 return 0;
}
