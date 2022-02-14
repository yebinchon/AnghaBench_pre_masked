
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_ampdu_rx {int reorder_buf_filtered; struct sk_buff_head* reorder_buf; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_rx_status {int flag; } ;


 int FUNC_0 (int) ;
 struct ieee80211_rx_status* FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;
 struct sk_buff* FUNC_2 (struct sk_buff_head*) ;

__attribute__((used)) static inline bool FUNC_3(struct tid_ampdu_rx *VAR_1,
           int VAR_2)
{
 struct sk_buff_head *VAR_3 = &VAR_1->reorder_buf[VAR_2];
 struct sk_buff *VAR_4 = FUNC_2(VAR_3);
 struct ieee80211_rx_status *VAR_5;

 if (VAR_1->reorder_buf_filtered & FUNC_0(VAR_2))
  return 1;

 if (!VAR_4)
  return 0;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5->flag & VAR_0)
  return 0;

 return 1;
}
