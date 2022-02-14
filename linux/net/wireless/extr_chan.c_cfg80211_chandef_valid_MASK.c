
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cfg80211_chan_def {int width; int center_freq1; int center_freq2; TYPE_1__* chan; } ;
struct TYPE_2__ {int center_freq; } ;
 scalar_t__ FUNC_0 (struct cfg80211_chan_def const*) ;
 int FUNC_1 (struct cfg80211_chan_def const*) ;

bool FUNC_2(const struct cfg80211_chan_def *VAR_0)
{
 u32 VAR_1;

 if (!VAR_0->chan)
  return 0;

 VAR_1 = VAR_0->chan->center_freq;

 switch (VAR_0->width) {
 case 130:
 case 135:
 case 133:
 case 132:
  if (VAR_0->center_freq1 != VAR_1)
   return 0;
  if (VAR_0->center_freq2)
   return 0;
  break;
 case 131:
  if (VAR_0->center_freq1 != VAR_1 + 10 &&
      VAR_0->center_freq1 != VAR_1 - 10)
   return 0;
  if (VAR_0->center_freq2)
   return 0;
  break;
 case 128:
  if (VAR_0->center_freq1 != VAR_1 + 30 &&
      VAR_0->center_freq1 != VAR_1 + 10 &&
      VAR_0->center_freq1 != VAR_1 - 10 &&
      VAR_0->center_freq1 != VAR_1 - 30)
   return 0;
  if (!VAR_0->center_freq2)
   return 0;

  if (VAR_0->center_freq1 - VAR_0->center_freq2 == 80 ||
      VAR_0->center_freq2 - VAR_0->center_freq1 == 80)
   return 0;
  break;
 case 129:
  if (VAR_0->center_freq1 != VAR_1 + 30 &&
      VAR_0->center_freq1 != VAR_1 + 10 &&
      VAR_0->center_freq1 != VAR_1 - 10 &&
      VAR_0->center_freq1 != VAR_1 - 30)
   return 0;
  if (VAR_0->center_freq2)
   return 0;
  break;
 case 134:
  if (VAR_0->center_freq1 != VAR_1 + 70 &&
      VAR_0->center_freq1 != VAR_1 + 50 &&
      VAR_0->center_freq1 != VAR_1 + 30 &&
      VAR_0->center_freq1 != VAR_1 + 10 &&
      VAR_0->center_freq1 != VAR_1 - 10 &&
      VAR_0->center_freq1 != VAR_1 - 30 &&
      VAR_0->center_freq1 != VAR_1 - 50 &&
      VAR_0->center_freq1 != VAR_1 - 70)
   return 0;
  if (VAR_0->center_freq2)
   return 0;
  break;
 default:
  return 0;
 }


 if (VAR_0->center_freq1 == 2484 &&
     VAR_0->width != 132)
  return 0;

 if (FUNC_0(VAR_0) &&
     !FUNC_1(VAR_0))
  return 0;

 return 1;
}
