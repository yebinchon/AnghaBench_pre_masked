
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {unsigned long driver_buffered_tids; unsigned long txq_buffered_tids; struct sk_buff_head* ps_tx_buf; struct sk_buff_head* tx_filtered; struct ieee80211_sub_if_data* sdata; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int total_ps_buffered; } ;
typedef enum ieee80211_frame_release_type { ____Placeholder_ieee80211_frame_release_type } ieee80211_frame_release_type ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff_head*,struct sk_buff*) ;
 int* VAR_1 ;
 unsigned long FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (struct sk_buff_head*) ;
 scalar_t__ FUNC_3 (struct sk_buff_head*) ;

__attribute__((used)) static void
FUNC_4(struct sta_info *VAR_2, int VAR_3, u8 VAR_4,
       enum ieee80211_frame_release_type VAR_5,
       struct sk_buff_head *VAR_6,
       unsigned long *VAR_7)
{
 struct ieee80211_sub_if_data *VAR_8 = VAR_2->sdata;
 struct ieee80211_local *VAR_9 = VAR_8->local;
 int VAR_10;


 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  unsigned long VAR_11;

  if (VAR_4 & VAR_1[VAR_10])
   continue;

  VAR_11 = FUNC_1(VAR_10);




  if (FUNC_3(VAR_6)) {
   *VAR_7 |=
    VAR_2->driver_buffered_tids & VAR_11;
   *VAR_7 |= VAR_2->txq_buffered_tids & VAR_11;
  }

  if (!*VAR_7) {
   struct sk_buff *VAR_12;

   while (VAR_3 > 0) {
    VAR_12 = FUNC_2(&VAR_2->tx_filtered[VAR_10]);
    if (!VAR_12) {
     VAR_12 = FUNC_2(
      &VAR_2->ps_tx_buf[VAR_10]);
     if (VAR_12)
      VAR_9->total_ps_buffered--;
    }
    if (!VAR_12)
     break;
    VAR_3--;
    FUNC_0(VAR_6, VAR_12);
   }
  }





  if (!FUNC_3(&VAR_2->tx_filtered[VAR_10]) ||
      !FUNC_3(&VAR_2->ps_tx_buf[VAR_10]))
   break;
 }
}
