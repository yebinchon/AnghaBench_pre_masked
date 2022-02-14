
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tid_ampdu_rx {int auto_seq; int ssn; int head_seq_num; int buf_size; int started; scalar_t__ stored_mpdu_num; int reorder_lock; int * reorder_time; int * reorder_buf; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_hdr {int seq_ctrl; } ;


 int VAR_0 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct tid_ampdu_rx*,int,struct sk_buff_head*) ;
 scalar_t__ FUNC_4 (struct tid_ampdu_rx*,int) ;
 void* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct ieee80211_sub_if_data*,struct tid_ampdu_rx*,struct sk_buff_head*) ;
 int VAR_2 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static bool FUNC_13(struct ieee80211_sub_if_data *VAR_3,
          struct tid_ampdu_rx *VAR_4,
          struct sk_buff *VAR_5,
          struct sk_buff_head *VAR_6)
{
 struct ieee80211_hdr *VAR_7 = (struct ieee80211_hdr *) VAR_5->data;
 struct ieee80211_rx_status *VAR_8 = FUNC_0(VAR_5);
 u16 VAR_9 = FUNC_9(VAR_7->seq_ctrl);
 u16 VAR_10 = (VAR_9 & VAR_0) >> 4;
 u16 VAR_11, VAR_12;
 int VAR_13;
 bool VAR_14 = 1;

 FUNC_10(&VAR_4->reorder_lock);





 if (FUNC_12(VAR_4->auto_seq)) {
  VAR_4->auto_seq = 0;
  VAR_4->ssn = VAR_10;
  VAR_4->head_seq_num = VAR_10;
 }

 VAR_12 = VAR_4->buf_size;
 VAR_11 = VAR_4->head_seq_num;





 if (FUNC_12(!VAR_4->started)) {
  if (FUNC_6(VAR_10, VAR_11)) {
   VAR_14 = 0;
   goto out;
  }
  VAR_4->started = 1;
 }


 if (FUNC_6(VAR_10, VAR_11)) {
  FUNC_2(VAR_5);
  goto out;
 }





 if (!FUNC_6(VAR_10, VAR_11 + VAR_12)) {
  VAR_11 = FUNC_5(
    FUNC_7(VAR_10, VAR_12));

  FUNC_3(VAR_3, VAR_4,
       VAR_11, VAR_6);
 }



 VAR_13 = VAR_10 % VAR_4->buf_size;


 if (FUNC_4(VAR_4, VAR_13)) {
  FUNC_2(VAR_5);
  goto out;
 }







 if (VAR_10 == VAR_4->head_seq_num &&
     VAR_4->stored_mpdu_num == 0) {
  if (!(VAR_8->flag & VAR_1))
   VAR_4->head_seq_num =
    FUNC_5(VAR_4->head_seq_num);
  VAR_14 = 0;
  goto out;
 }


 FUNC_1(&VAR_4->reorder_buf[VAR_13], VAR_5);
 if (!(VAR_8->flag & VAR_1)) {
  VAR_4->reorder_time[VAR_13] = VAR_2;
  VAR_4->stored_mpdu_num++;
  FUNC_8(VAR_3, VAR_4, VAR_6);
 }

 out:
 FUNC_11(&VAR_4->reorder_lock);
 return VAR_14;
}
