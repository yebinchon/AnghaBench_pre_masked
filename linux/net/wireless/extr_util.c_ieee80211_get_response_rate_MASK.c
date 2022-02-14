
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_supported_band {int n_bitrates; struct ieee80211_rate* bitrates; } ;
struct ieee80211_rate {int bitrate; } ;


 int FUNC_0 (int) ;

struct ieee80211_rate *
FUNC_1(struct ieee80211_supported_band *VAR_0,
       u32 VAR_1, int VAR_2)
{
 struct ieee80211_rate *VAR_3 = &VAR_0->bitrates[0];
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->n_bitrates; VAR_4++) {
  if (!(VAR_1 & FUNC_0(VAR_4)))
   continue;
  if (VAR_0->bitrates[VAR_4].bitrate > VAR_2)
   continue;
  VAR_3 = &VAR_0->bitrates[VAR_4];
 }

 return VAR_3;
}
