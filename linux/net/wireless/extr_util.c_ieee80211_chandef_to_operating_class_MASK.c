
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct cfg80211_chan_def {int center_freq1; int width; TYPE_1__* chan; } ;
struct TYPE_2__ {int center_freq; } ;




 int VAR_0 ;
 int VAR_1 ;




bool FUNC_0(struct cfg80211_chan_def *VAR_2,
       u8 *VAR_3)
{
 u8 VAR_4;
 u32 VAR_5 = VAR_2->center_freq1;

 if (VAR_5 >= 2412 && VAR_5 <= 2472) {
  if (VAR_2->width > VAR_1)
   return 0;


  if (VAR_2->width == VAR_1) {
   if (VAR_5 > VAR_2->chan->center_freq)
    *VAR_3 = 83;
   else
    *VAR_3 = 84;
  } else {
   *VAR_3 = 81;
  }

  return 1;
 }

 if (VAR_5 == 2484) {

  if (VAR_2->width != VAR_0)
   return 0;

  *VAR_3 = 82;
  return 1;
 }

 switch (VAR_2->width) {
 case 129:
  VAR_4 = 128;
  break;
 case 131:
  VAR_4 = 129;
  break;
 case 128:
  VAR_4 = 130;
  break;
 case 132:
 case 130:
  return 0;
 default:
  VAR_4 = 0;
  break;
 }


 if (VAR_5 >= 5180 && VAR_5 <= 5240) {
  if (VAR_4) {
   *VAR_3 = VAR_4;
  } else if (VAR_2->width == VAR_1) {
   if (VAR_5 > VAR_2->chan->center_freq)
    *VAR_3 = 116;
   else
    *VAR_3 = 117;
  } else {
   *VAR_3 = 115;
  }

  return 1;
 }


 if (VAR_5 >= 5260 && VAR_5 <= 5320) {
  if (VAR_4) {
   *VAR_3 = VAR_4;
  } else if (VAR_2->width == VAR_1) {
   if (VAR_5 > VAR_2->chan->center_freq)
    *VAR_3 = 119;
   else
    *VAR_3 = 120;
  } else {
   *VAR_3 = 118;
  }

  return 1;
 }


 if (VAR_5 >= 5500 && VAR_5 <= 5720) {
  if (VAR_4) {
   *VAR_3 = VAR_4;
  } else if (VAR_2->width == VAR_1) {
   if (VAR_5 > VAR_2->chan->center_freq)
    *VAR_3 = 122;
   else
    *VAR_3 = 123;
  } else {
   *VAR_3 = 121;
  }

  return 1;
 }


 if (VAR_5 >= 5745 && VAR_5 <= 5845) {
  if (VAR_4) {
   *VAR_3 = VAR_4;
  } else if (VAR_2->width == VAR_1) {
   if (VAR_5 > VAR_2->chan->center_freq)
    *VAR_3 = 126;
   else
    *VAR_3 = 127;
  } else if (VAR_5 <= 5805) {
   *VAR_3 = 124;
  } else {
   *VAR_3 = 125;
  }

  return 1;
 }


 if (VAR_5 >= 56160 + 2160 * 1 && VAR_5 <= 56160 + 2160 * 6) {
  if (VAR_2->width >= VAR_1)
   return 0;

  *VAR_3 = 180;
  return 1;
 }


 return 0;
}
