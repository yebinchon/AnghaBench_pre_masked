
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int dummy; } ;
struct ieee80211_freq_range {int dummy; } ;
struct ieee80211_channel {int center_freq; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ieee80211_freq_range*,int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct wiphy *VAR_0,
      struct ieee80211_freq_range *VAR_1,
      unsigned int VAR_2,
      struct ieee80211_channel *VAR_3)
{
 u32 VAR_4 = FUNC_0(20);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  struct ieee80211_freq_range *VAR_6 = &VAR_1[VAR_5];

  if (FUNC_1(VAR_6,
            FUNC_0(VAR_3->center_freq),
            VAR_4))
   return 1;
 }

 return 0;
}
