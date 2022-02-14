
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct l2cap_ctrl {int retries; int txseq; scalar_t__ reqseq; } ;
struct l2cap_chan {scalar_t__ fcs; int frames_sent; int next_tx_seq; int tx_q; } ;
struct TYPE_2__ {struct l2cap_ctrl l2cap; } ;


 int FUNC_0 (char*,struct l2cap_chan*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_chan*,int ) ;
 int FUNC_3 (struct l2cap_chan*,struct l2cap_ctrl*,struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (struct l2cap_chan*,struct sk_buff*) ;
 int FUNC_7 (int ,int ) ;
 struct sk_buff* FUNC_8 (int *) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct sk_buff_head*,int *) ;

__attribute__((used)) static void FUNC_12(struct l2cap_chan *VAR_2,
     struct sk_buff_head *VAR_3)
{
 struct sk_buff *VAR_4;
 struct l2cap_ctrl *VAR_5;

 FUNC_0("chan %p, skbs %p", VAR_2, VAR_3);

 if (FUNC_1(VAR_2))
  return;

 FUNC_11(VAR_3, &VAR_2->tx_q);

 while (!FUNC_10(&VAR_2->tx_q)) {

  VAR_4 = FUNC_8(&VAR_2->tx_q);

  FUNC_4(VAR_4)->l2cap.retries = 1;
  VAR_5 = &FUNC_4(VAR_4)->l2cap;

  VAR_5->reqseq = 0;
  VAR_5->txseq = VAR_2->next_tx_seq;

  FUNC_3(VAR_2, VAR_5, VAR_4);

  if (VAR_2->fcs == VAR_0) {
   u16 VAR_6 = FUNC_5(0, (u8 *) VAR_4->data, VAR_4->len);
   FUNC_7(VAR_6, FUNC_9(VAR_4, VAR_1));
  }

  FUNC_6(VAR_2, VAR_4);

  FUNC_0("Sent txseq %u", VAR_5->txseq);

  VAR_2->next_tx_seq = FUNC_2(VAR_2, VAR_2->next_tx_seq);
  VAR_2->frames_sent++;
 }
}
