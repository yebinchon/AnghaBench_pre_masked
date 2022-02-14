
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int * ps_tx_buf; int * tx_filtered; } ;
typedef enum ieee80211_frame_release_type { ____Placeholder_ieee80211_frame_release_type } ieee80211_frame_release_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int* VAR_2 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool
FUNC_2(struct sta_info *VAR_3, u8 VAR_4,
      enum ieee80211_frame_release_type VAR_5,
      unsigned long VAR_6)
{
 int VAR_7;






 if (VAR_5 == VAR_0 &&
     FUNC_0(VAR_6) > 1)
  return 1;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (VAR_4 & VAR_2[VAR_7])
   continue;

  if (!FUNC_1(&VAR_3->tx_filtered[VAR_7]) ||
      !FUNC_1(&VAR_3->ps_tx_buf[VAR_7]))
   return 1;
 }

 return 0;
}
