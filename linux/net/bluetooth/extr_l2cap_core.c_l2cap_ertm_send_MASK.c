
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct l2cap_ctrl {int retries; int final; int txseq; int reqseq; } ;
struct l2cap_chan {scalar_t__ state; scalar_t__ tx_state; scalar_t__ fcs; int tx_q; int unacked_frames; struct sk_buff* tx_send_head; int frames_sent; int next_tx_seq; int buffer_seq; int last_acked_seq; int conn_state; int remote_tx_win; } ;
struct TYPE_2__ {struct l2cap_ctrl l2cap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_chan*,int ) ;
 int FUNC_3 (struct l2cap_chan*,struct l2cap_ctrl*,struct sk_buff*) ;
 int FUNC_4 (struct l2cap_chan*) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (struct l2cap_chan*,struct sk_buff*) ;
 int FUNC_8 (int ,int ) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_11 (int *,struct sk_buff*) ;
 int FUNC_12 (int *) ;
 struct sk_buff* FUNC_13 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (int ,int *) ;

__attribute__((used)) static int FUNC_16(struct l2cap_chan *VAR_8)
{
 struct sk_buff *VAR_9, *VAR_10;
 struct l2cap_ctrl *VAR_11;
 int VAR_12 = 0;

 FUNC_0("chan %p", VAR_8);

 if (VAR_8->state != VAR_0)
  return -VAR_3;

 if (FUNC_15(VAR_1, &VAR_8->conn_state))
  return 0;

 if (FUNC_1(VAR_8))
  return 0;

 while (VAR_8->tx_send_head &&
        VAR_8->unacked_frames < VAR_8->remote_tx_win &&
        VAR_8->tx_state == VAR_7) {

  VAR_9 = VAR_8->tx_send_head;

  FUNC_5(VAR_9)->l2cap.retries = 1;
  VAR_11 = &FUNC_5(VAR_9)->l2cap;

  if (FUNC_14(VAR_2, &VAR_8->conn_state))
   VAR_11->final = 1;

  VAR_11->reqseq = VAR_8->buffer_seq;
  VAR_8->last_acked_seq = VAR_8->buffer_seq;
  VAR_11->txseq = VAR_8->next_tx_seq;

  FUNC_3(VAR_8, VAR_11, VAR_9);

  if (VAR_8->fcs == VAR_5) {
   u16 VAR_13 = FUNC_6(0, (u8 *) VAR_9->data, VAR_9->len);
   FUNC_8(VAR_13, FUNC_10(VAR_9, VAR_6));
  }




  VAR_10 = FUNC_9(VAR_9, VAR_4);

  if (!VAR_10)
   break;

  FUNC_4(VAR_8);

  VAR_8->next_tx_seq = FUNC_2(VAR_8, VAR_8->next_tx_seq);
  VAR_8->unacked_frames++;
  VAR_8->frames_sent++;
  VAR_12++;

  if (FUNC_11(&VAR_8->tx_q, VAR_9))
   VAR_8->tx_send_head = ((void*)0);
  else
   VAR_8->tx_send_head = FUNC_13(&VAR_8->tx_q, VAR_9);

  FUNC_7(VAR_8, VAR_10);
  FUNC_0("Sent txseq %u", VAR_11->txseq);
 }

 FUNC_0("Sent %d, %u unacked, %u in ERTM queue", VAR_12,
        VAR_8->unacked_frames, FUNC_12(&VAR_8->tx_q));

 return VAR_12;
}
