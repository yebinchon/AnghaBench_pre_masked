
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_supported_band {scalar_t__ band; int n_bitrates; struct ieee80211_rate* bitrates; } ;
struct ieee80211_rate {int flags; } ;
typedef enum nl80211_bss_scan_width { ____Placeholder_nl80211_bss_scan_width } nl80211_bss_scan_width ;
typedef enum ieee80211_rate_flags { ____Placeholder_ieee80211_rate_flags } ieee80211_rate_flags ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;

u32 FUNC_2(struct ieee80211_supported_band *VAR_6,
         enum nl80211_bss_scan_width VAR_7)
{
 struct ieee80211_rate *VAR_8;
 u32 VAR_9 = 0;
 enum ieee80211_rate_flags VAR_10;
 int VAR_11;

 if (FUNC_1(!VAR_6))
  return 1;

 if (VAR_6->band == VAR_3) {
  if (VAR_7 == VAR_5 ||
      VAR_7 == VAR_4)
   VAR_10 = VAR_2;
  else
   VAR_10 = VAR_1;
 } else {
  VAR_10 = VAR_0;
 }

 VAR_8 = VAR_6->bitrates;
 for (VAR_11 = 0; VAR_11 < VAR_6->n_bitrates; VAR_11++)
  if (VAR_8[VAR_11].flags & VAR_10)
   VAR_9 |= FUNC_0(VAR_11);
 return VAR_9;
}
