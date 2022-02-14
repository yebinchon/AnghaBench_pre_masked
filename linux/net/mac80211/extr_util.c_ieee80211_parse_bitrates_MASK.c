
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ieee80211_supported_band {int n_bitrates; struct ieee80211_rate* bitrates; } ;
struct ieee80211_rate {int flags; int bitrate; } ;
struct cfg80211_chan_def {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct cfg80211_chan_def*) ;
 int FUNC_3 (struct cfg80211_chan_def*) ;

int FUNC_4(struct cfg80211_chan_def *VAR_0,
        const struct ieee80211_supported_band *VAR_1,
        const u8 *VAR_2, int VAR_3, u32 *VAR_4)
{
 u32 VAR_5 = FUNC_3(VAR_0);
 int VAR_6 = FUNC_2(VAR_0);
 struct ieee80211_rate *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12 = 0;

 *VAR_4 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  VAR_9 = VAR_2[VAR_10] & 0x7f;

  for (VAR_11 = 0; VAR_11 < VAR_1->n_bitrates; VAR_11++) {
   VAR_7 = &VAR_1->bitrates[VAR_11];
   if ((VAR_5 & VAR_7->flags) != VAR_5)
    continue;

   VAR_8 = FUNC_1(VAR_7->bitrate, (1 << VAR_6) * 5);
   if (VAR_8 == VAR_9) {
    *VAR_4 |= FUNC_0(VAR_11);
    VAR_12++;
    break;
   }
  }
 }
 return VAR_12;
}
