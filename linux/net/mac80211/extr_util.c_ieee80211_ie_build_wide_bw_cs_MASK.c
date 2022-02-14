
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cfg80211_chan_def {int width; scalar_t__ center_freq2; scalar_t__ center_freq1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 void* FUNC_0 (scalar_t__) ;

void FUNC_1(u8 *VAR_5,
       const struct cfg80211_chan_def *VAR_6)
{
 *VAR_5++ = VAR_4;
 *VAR_5++ = 3;

 switch (VAR_6->width) {
 case 129:
  *VAR_5++ = VAR_1;
  break;
 case 130:
  *VAR_5++ = VAR_0;
  break;
 case 128:
  *VAR_5++ = VAR_2;
  break;
 default:
  *VAR_5++ = VAR_3;
 }


 *VAR_5++ = FUNC_0(VAR_6->center_freq1);

 if (VAR_6->center_freq2)
  *VAR_5++ = FUNC_0(VAR_6->center_freq2);
 else
  *VAR_5++ = 0;
}
