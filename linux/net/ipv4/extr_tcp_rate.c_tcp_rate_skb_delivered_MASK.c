
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int first_tx_mstamp; } ;
struct TYPE_2__ {scalar_t__ delivered_mstamp; int first_tx_mstamp; int is_app_limited; int delivered; } ;
struct tcp_skb_cb {int sacked; TYPE_1__ tx; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct rate_sample {int is_retrans; int interval_us; int is_app_limited; scalar_t__ prior_mstamp; int prior_delivered; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tcp_skb_cb* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(struct sock *VAR_2, struct sk_buff *VAR_3,
       struct rate_sample *VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_2(VAR_2);
 struct tcp_skb_cb *VAR_6 = FUNC_0(VAR_3);

 if (!VAR_6->tx.delivered_mstamp)
  return;

 if (!VAR_4->prior_delivered ||
     FUNC_1(VAR_6->tx.delivered, VAR_4->prior_delivered)) {
  VAR_4->prior_delivered = VAR_6->tx.delivered;
  VAR_4->prior_mstamp = VAR_6->tx.delivered_mstamp;
  VAR_4->is_app_limited = VAR_6->tx.is_app_limited;
  VAR_4->is_retrans = VAR_6->sacked & VAR_0;


  VAR_5->first_tx_mstamp = FUNC_3(VAR_3);

  VAR_4->interval_us = FUNC_4(VAR_5->first_tx_mstamp,
           VAR_6->tx.first_tx_mstamp);

 }




 if (VAR_6->sacked & VAR_1)
  VAR_6->tx.delivered_mstamp = 0;
}
