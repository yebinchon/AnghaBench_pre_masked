
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {struct sk_buff* sk_tx_skb_cache; int sk_write_queue; } ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {scalar_t__ icsk_backoff; } ;
struct TYPE_4__ {scalar_t__ packets_out; int tsorted_sent_queue; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;
 int FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct sock*) ;
 TYPE_1__* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sk_buff*) ;

void FUNC_11(struct sock *VAR_1)
{
 struct sk_buff *VAR_2;

 FUNC_6(VAR_1, VAR_0);
 while ((VAR_2 = FUNC_2(&VAR_1->sk_write_queue)) != ((void*)0)) {
  FUNC_10(VAR_2);
  FUNC_5(VAR_1, VAR_2);
 }
 FUNC_8(VAR_1);
 VAR_2 = VAR_1->sk_tx_skb_cache;
 if (VAR_2) {
  FUNC_1(VAR_2);
  VAR_1->sk_tx_skb_cache = ((void*)0);
 }
 FUNC_0(&FUNC_9(VAR_1)->tsorted_sent_queue);
 FUNC_4(VAR_1);
 FUNC_7(FUNC_9(VAR_1));
 FUNC_9(VAR_1)->packets_out = 0;
 FUNC_3(VAR_1)->icsk_backoff = 0;
}
