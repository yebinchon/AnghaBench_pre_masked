
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct ieee80211_supported_band {int n_bitrates; struct ieee80211_rate* bitrates; } ;
struct ieee80211_rate {int bitrate; } ;



__attribute__((used)) static u32 FUNC_0(struct ieee80211_supported_band *VAR_0,
      u8 *VAR_1, u8 VAR_2)
{
 u8 VAR_3;
 u32 VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  int VAR_5 = (VAR_1[VAR_3] & 0x7f) * 5;
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_0->n_bitrates; VAR_6++) {
   struct ieee80211_rate *VAR_7 =
    &VAR_0->bitrates[VAR_6];
   if (VAR_5 == VAR_7->bitrate) {
    VAR_4 |= 1 << VAR_6;
    break;
   }
  }
  if (VAR_6 == VAR_0->n_bitrates)
   return 0;
 }

 return VAR_4;
}
