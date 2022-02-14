
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cfg80211_chan_def {int width; int center_freq1; TYPE_1__* chan; } ;
struct TYPE_2__ {int center_freq; } ;






 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(const struct cfg80211_chan_def *VAR_0,
      u32 *VAR_1, u32 *VAR_2)
{
 int VAR_3;

 switch (VAR_0->width) {
 case 130:
  *VAR_1 = VAR_0->center_freq1;
  *VAR_2 = 0;
  break;
 case 129:
 case 128:
  *VAR_2 = VAR_0->center_freq1;

  VAR_3 = (30 + VAR_0->chan->center_freq - VAR_0->center_freq1)/20;

  VAR_3 /= 2;

  *VAR_1 = VAR_0->center_freq1 - 20 + 40 * VAR_3;
  break;
 case 131:

  VAR_3 = (70 + VAR_0->chan->center_freq - VAR_0->center_freq1)/20;

  VAR_3 /= 2;

  *VAR_1 = VAR_0->center_freq1 - 60 + 40 * VAR_3;

  VAR_3 /= 2;
  *VAR_2 = VAR_0->center_freq1 - 40 + 80 * VAR_3;
  break;
 default:
  FUNC_0(1);
 }
}
