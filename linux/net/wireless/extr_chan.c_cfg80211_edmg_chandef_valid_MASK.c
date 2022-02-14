
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int channels; int bw_config; } ;
struct cfg80211_chan_def {TYPE_2__ edmg; TYPE_1__* chan; } ;
struct TYPE_3__ {int center_freq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static bool FUNC_3(const struct cfg80211_chan_def *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2 = 0;
 int VAR_3 = 0;
 int VAR_4;

 if (!VAR_0->edmg.channels || !VAR_0->edmg.bw_config)
  return 0;

 if (!FUNC_1(VAR_0->chan->center_freq))
  return 0;

 for (VAR_4 = 0; VAR_4 < 6; VAR_4++) {
  if (VAR_0->edmg.channels & FUNC_0(VAR_4)) {
   VAR_3++;
   VAR_2++;
  } else {
   VAR_3 = 0;
  }

  VAR_1 = FUNC_2(VAR_3, VAR_1);
 }




 switch (VAR_0->edmg.bw_config) {
 case 133:
 case 129:
 case 137:
  if (VAR_1 < 1)
   return 0;
  break;
 case 132:
 case 128:
 case 136:
  if (VAR_1 < 2)
   return 0;
  break;
 case 131:
 case 139:
 case 135:
  if (VAR_1 < 3)
   return 0;
  break;
 case 130:
 case 138:
 case 134:
  if (VAR_1 < 4)
   return 0;
  break;

 default:
  return 0;
 }


 switch (VAR_0->edmg.bw_config) {
 case 133:
 case 132:
 case 131:
 case 130:
  break;
 case 129:
 case 128:
 case 139:
 case 138:
  if (VAR_2 < 2)
   return 0;
  break;
 case 137:
 case 136:
 case 135:
 case 134:
  if (VAR_2 < 4 || VAR_1 < 2)
   return 0;
  break;
 default:
  return 0;
 }

 return 1;
}
