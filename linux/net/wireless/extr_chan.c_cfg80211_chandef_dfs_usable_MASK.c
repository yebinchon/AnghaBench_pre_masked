
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct cfg80211_chan_def {int center_freq1; int width; int center_freq2; } ;



 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct cfg80211_chan_def const*) ;
 int FUNC_2 (struct cfg80211_chan_def const*) ;
 int FUNC_3 (struct wiphy*,int,int) ;

bool FUNC_4(struct wiphy *VAR_0,
     const struct cfg80211_chan_def *VAR_1)
{
 int VAR_2;
 int VAR_3, VAR_4 = 0;

 if (FUNC_0(!FUNC_2(VAR_1)))
  return 0;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 < 0)
  return 0;

 VAR_3 = FUNC_3(VAR_0, VAR_1->center_freq1,
       VAR_2);

 if (VAR_3 < 0)
  return 0;

 switch (VAR_1->width) {
 case 128:
  FUNC_0(!VAR_1->center_freq2);
  VAR_4 = FUNC_3(VAR_0,
         VAR_1->center_freq2,
         VAR_2);
  if (VAR_4 < 0)
   return 0;
  break;
 default:
  FUNC_0(VAR_1->center_freq2);
  break;
 }

 return (VAR_3 + VAR_4 > 0);
}
