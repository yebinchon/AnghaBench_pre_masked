
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct l2cap_ctrl {void* txseq; } ;
struct l2cap_chan {void* expected_tx_seq; void* last_acked_seq; scalar_t__ sdu_len; int * sdu_last_frag; struct sk_buff* sdu; void* buffer_seq; int rx_state; } ;


 int FUNC_0 (char*,struct l2cap_chan*,...) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (struct l2cap_chan*,void*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct l2cap_chan*,void*) ;
 int FUNC_4 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_5 (struct l2cap_chan*,struct sk_buff*,struct l2cap_ctrl*) ;

__attribute__((used)) static int FUNC_6(struct l2cap_chan *VAR_1, struct l2cap_ctrl *VAR_2,
      struct sk_buff *VAR_3)
{
 FUNC_0("chan %p, control %p, skb %p, state %d", VAR_1, VAR_2, VAR_3,
        VAR_1->rx_state);

 if (FUNC_3(VAR_1, VAR_2->txseq) ==
     VAR_0) {
  FUNC_4(VAR_1, VAR_2);

  FUNC_0("buffer_seq %d->%d", VAR_1->buffer_seq,
         FUNC_1(VAR_1, VAR_1->buffer_seq));

  VAR_1->buffer_seq = FUNC_1(VAR_1, VAR_1->buffer_seq);

  FUNC_5(VAR_1, VAR_3, VAR_2);
 } else {
  if (VAR_1->sdu) {
   FUNC_2(VAR_1->sdu);
   VAR_1->sdu = ((void*)0);
  }
  VAR_1->sdu_last_frag = ((void*)0);
  VAR_1->sdu_len = 0;

  if (VAR_3) {
   FUNC_0("Freeing %p", VAR_3);
   FUNC_2(VAR_3);
  }
 }

 VAR_1->last_acked_seq = VAR_2->txseq;
 VAR_1->expected_tx_seq = FUNC_1(VAR_1, VAR_2->txseq);

 return 0;
}
