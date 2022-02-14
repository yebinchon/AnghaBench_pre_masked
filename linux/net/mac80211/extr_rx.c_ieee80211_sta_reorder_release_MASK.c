
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_ampdu_rx {int head_seq_num; int buf_size; int reorder_timer; scalar_t__* reorder_time; int removed; scalar_t__ stored_mpdu_num; int * reorder_buf; int reorder_lock; } ;
struct sk_buff_head {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,char*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct tid_ampdu_rx*,int,struct sk_buff_head*) ;
 scalar_t__ FUNC_4 (struct tid_ampdu_rx*,int) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_sub_if_data *VAR_3,
       struct tid_ampdu_rx *VAR_4,
       struct sk_buff_head *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 FUNC_5(&VAR_4->reorder_lock);


 VAR_6 = VAR_4->head_seq_num % VAR_4->buf_size;
 if (!FUNC_4(VAR_4, VAR_6) &&
     VAR_4->stored_mpdu_num) {




  int VAR_9 = 1;
  for (VAR_8 = (VAR_6 + 1) % VAR_4->buf_size; VAR_8 != VAR_6;
       VAR_8 = (VAR_8 + 1) % VAR_4->buf_size) {
   if (!FUNC_4(VAR_4, VAR_8)) {
    VAR_9++;
    continue;
   }
   if (VAR_9 &&
       !FUNC_7(VAR_2, VAR_4->reorder_time[VAR_8] +
     VAR_0))
    goto set_release_timer;


   for (VAR_7 = (VAR_6 + 1) % VAR_4->buf_size; VAR_7 != VAR_8;
        VAR_7 = (VAR_7 + 1) % VAR_4->buf_size)
    FUNC_0(&VAR_4->reorder_buf[VAR_7]);

   FUNC_2(VAR_3,
        "release an RX reorder frame due to timeout on earlier frames\n");
   FUNC_3(VAR_3, VAR_4, VAR_8,
       VAR_5);




   VAR_4->head_seq_num =
    (VAR_4->head_seq_num +
     VAR_9) & VAR_1;
   VAR_9 = 0;
  }
 } else while (FUNC_4(VAR_4, VAR_6)) {
  FUNC_3(VAR_3, VAR_4, VAR_6,
      VAR_5);
  VAR_6 = VAR_4->head_seq_num % VAR_4->buf_size;
 }

 if (VAR_4->stored_mpdu_num) {
  VAR_8 = VAR_6 = VAR_4->head_seq_num % VAR_4->buf_size;

  for (; VAR_8 != (VAR_6 - 1) % VAR_4->buf_size;
       VAR_8 = (VAR_8 + 1) % VAR_4->buf_size) {
   if (FUNC_4(VAR_4, VAR_8))
    break;
  }

 set_release_timer:

  if (!VAR_4->removed)
   FUNC_6(&VAR_4->reorder_timer,
      VAR_4->reorder_time[VAR_8] + 1 +
      VAR_0);
 } else {
  FUNC_1(&VAR_4->reorder_timer);
 }
}
