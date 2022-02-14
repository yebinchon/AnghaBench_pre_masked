
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_freq_range {int start_freq_khz; int end_freq_khz; } ;



bool FUNC_0(const struct ieee80211_freq_range *VAR_0,
    u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3, VAR_4;

 VAR_3 = VAR_1 - (VAR_2 / 2);
 VAR_4 = VAR_1 + (VAR_2 / 2);

 if (VAR_3 >= VAR_0->start_freq_khz &&
     VAR_4 <= VAR_0->end_freq_khz)
  return 1;

 return 0;
}
