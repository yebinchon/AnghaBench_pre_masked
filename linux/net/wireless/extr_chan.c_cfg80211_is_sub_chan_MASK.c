
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_channel {scalar_t__ center_freq; } ;
struct cfg80211_chan_def {int center_freq1; int center_freq2; TYPE_1__* chan; } ;
struct TYPE_2__ {scalar_t__ center_freq; } ;


 int FUNC_0 (struct cfg80211_chan_def*) ;

bool FUNC_1(struct cfg80211_chan_def *VAR_0,
     struct ieee80211_channel *VAR_1)
{
 int VAR_2;
 u32 VAR_3;

 if (VAR_0->chan->center_freq == VAR_1->center_freq)
  return 1;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 <= 20)
  return 0;

 for (VAR_3 = VAR_0->center_freq1 - VAR_2 / 2 + 10;
      VAR_3 <= VAR_0->center_freq1 + VAR_2 / 2 - 10; VAR_3 += 20) {
  if (VAR_1->center_freq == VAR_3)
   return 1;
 }

 if (!VAR_0->center_freq2)
  return 0;

 for (VAR_3 = VAR_0->center_freq2 - VAR_2 / 2 + 10;
      VAR_3 <= VAR_0->center_freq2 + VAR_2 / 2 - 10; VAR_3 += 20) {
  if (VAR_1->center_freq == VAR_3)
   return 1;
 }

 return 0;
}
