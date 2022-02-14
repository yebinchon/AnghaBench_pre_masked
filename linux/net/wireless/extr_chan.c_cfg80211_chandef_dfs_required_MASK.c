
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct cfg80211_chan_def {int width; int center_freq2; int center_freq1; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct cfg80211_chan_def const*) ;
 int FUNC_3 (struct cfg80211_chan_def const*) ;
 int FUNC_4 (struct wiphy*,int ,int) ;

int FUNC_5(struct wiphy *VAR_1,
      const struct cfg80211_chan_def *VAR_2,
      enum nl80211_iftype VAR_3)
{
 int VAR_4;
 int VAR_5;

 if (FUNC_1(!FUNC_3(VAR_2)))
  return -VAR_0;

 switch (VAR_3) {
 case 141:
 case 140:
 case 132:
 case 138:
  VAR_4 = FUNC_2(VAR_2);
  if (VAR_4 < 0)
   return -VAR_0;

  VAR_5 = FUNC_4(VAR_1,
            VAR_2->center_freq1,
            VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
  else if (VAR_5 > 0)
   return FUNC_0(VAR_2->width);

  if (!VAR_2->center_freq2)
   return 0;

  VAR_5 = FUNC_4(VAR_1,
            VAR_2->center_freq2,
            VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
  else if (VAR_5 > 0)
   return FUNC_0(VAR_2->width);

  break;
 case 131:
 case 135:
 case 134:
 case 137:
 case 139:
 case 129:
 case 133:
 case 136:
  break;
 case 130:
 case 128:
  FUNC_1(1);
 }

 return 0;
}
