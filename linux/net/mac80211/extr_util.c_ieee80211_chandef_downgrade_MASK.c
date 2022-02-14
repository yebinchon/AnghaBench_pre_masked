
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cfg80211_chan_def {int width; int center_freq1; TYPE_1__* chan; int center_freq2; } ;
struct TYPE_2__ {int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cfg80211_chan_def*) ;

u32 FUNC_2(struct cfg80211_chan_def *VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 switch (VAR_5->width) {
 case 133:
  VAR_5->width = 132;
  VAR_6 = VAR_3 | VAR_4;
  break;
 case 131:
  VAR_5->width = 133;
  VAR_5->center_freq1 = VAR_5->chan->center_freq;
  VAR_6 = VAR_1 |
        VAR_4;
  break;
 case 129:
  VAR_7 = (30 + VAR_5->chan->center_freq - VAR_5->center_freq1)/20;

  VAR_7 /= 2;

  VAR_5->center_freq1 = VAR_5->center_freq1 - 20 + 40 * VAR_7;
  VAR_5->width = 131;
  VAR_6 = VAR_4;
  break;
 case 128:
  VAR_5->center_freq2 = 0;
  VAR_5->width = 129;
  VAR_6 = VAR_2 |
        VAR_0;
  break;
 case 134:

  VAR_7 = (70 + VAR_5->chan->center_freq - VAR_5->center_freq1)/20;

  VAR_7 /= 4;
  VAR_5->center_freq1 = VAR_5->center_freq1 - 40 + 80 * VAR_7;
  VAR_5->width = 129;
  VAR_6 = VAR_2 |
        VAR_0;
  break;
 default:
 case 132:
  FUNC_0(1);
  VAR_5->width = 132;
  VAR_6 = VAR_3 | VAR_4;
  break;
 case 130:
 case 135:
  FUNC_0(1);

  VAR_6 = VAR_3 | VAR_4;
  break;
 }

 FUNC_0(!FUNC_1(VAR_5));

 return VAR_6;
}
