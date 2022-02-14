
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tcp_skb_cb {int txstamp_ack; scalar_t__ seq; } ;
struct sock {int dummy; } ;
struct skb_shared_info {scalar_t__ tskey; int tx_flags; } ;
struct sk_buff {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tcp_skb_cb* FUNC_0 (struct sk_buff*) ;
 struct skb_shared_info* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sock*,int,int *) ;
 struct sk_buff* FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_2, u16 VAR_3)
{
 struct sk_buff *VAR_4 = FUNC_3(VAR_2);

 if (VAR_3 && VAR_4) {
  struct skb_shared_info *VAR_5 = FUNC_1(VAR_4);
  struct tcp_skb_cb *VAR_6 = FUNC_0(VAR_4);

  FUNC_2(VAR_2, VAR_3, &VAR_5->tx_flags);
  if (VAR_3 & VAR_0)
   VAR_6->txstamp_ack = 1;
  if (VAR_3 & VAR_1)
   VAR_5->tskey = FUNC_0(VAR_4)->seq + VAR_4->len - 1;
 }
}
