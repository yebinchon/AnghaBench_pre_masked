
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ieee80211_supported_band {int n_bitrates; TYPE_1__* bitrates; } ;
struct TYPE_2__ {int bitrate; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;

int FUNC_1(struct ieee80211_supported_band *VAR_2,
      const u8 *VAR_3, unsigned int VAR_4,
      u32 *VAR_5)
{
 int VAR_6, VAR_7;

 if (!VAR_2)
  return -VAR_0;

 if (VAR_4 == 0 || VAR_4 > VAR_1)
  return -VAR_0;

 *VAR_5 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  int VAR_8 = (VAR_3[VAR_6] & 0x7f) * 5;
  bool VAR_9 = 0;

  for (VAR_7 = 0; VAR_7 < VAR_2->n_bitrates; VAR_7++) {
   if (VAR_2->bitrates[VAR_7].bitrate == VAR_8) {
    VAR_9 = 1;
    *VAR_5 |= FUNC_0(VAR_7);
    break;
   }
  }
  if (!VAR_9)
   return -VAR_0;
 }







 return 0;
}
