
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct l2cap_ctrl {int reqseq; scalar_t__ final; scalar_t__ poll; } ;
struct l2cap_chan {scalar_t__ tx_state; int srej_save_reqseq; int conn_state; int max_tx; int tx_q; int next_tx_seq; } ;
struct TYPE_3__ {int retries; } ;
struct TYPE_4__ {TYPE_1__ l2cap; } ;


 int FUNC_0 (char*,struct l2cap_chan*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct l2cap_chan*) ;
 struct sk_buff* FUNC_4 (int *,int ) ;
 int FUNC_5 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_6 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_7 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_8 (struct l2cap_chan*,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct l2cap_chan *VAR_5,
         struct l2cap_ctrl *VAR_6)
{
 struct sk_buff *VAR_7;

 FUNC_0("chan %p, control %p", VAR_5, VAR_6);

 if (VAR_6->reqseq == VAR_5->next_tx_seq) {
  FUNC_0("Invalid reqseq %d, disconnecting", VAR_6->reqseq);
  FUNC_8(VAR_5, VAR_3);
  return;
 }

 VAR_7 = FUNC_4(&VAR_5->tx_q, VAR_6->reqseq);

 if (VAR_7 == ((void*)0)) {
  FUNC_0("Seq %d not available for retransmission",
         VAR_6->reqseq);
  return;
 }

 if (VAR_5->max_tx != 0 && FUNC_1(VAR_7)->l2cap.retries >= VAR_5->max_tx) {
  FUNC_0("Retry limit exceeded (%d)", VAR_5->max_tx);
  FUNC_8(VAR_5, VAR_3);
  return;
 }

 FUNC_2(VAR_0, &VAR_5->conn_state);

 if (VAR_6->poll) {
  FUNC_5(VAR_5, VAR_6);

  FUNC_9(VAR_1, &VAR_5->conn_state);
  FUNC_7(VAR_5, VAR_6);
  FUNC_3(VAR_5);

  if (VAR_5->tx_state == VAR_4) {
   FUNC_9(VAR_2, &VAR_5->conn_state);
   VAR_5->srej_save_reqseq = VAR_6->reqseq;
  }
 } else {
  FUNC_6(VAR_5, VAR_6);

  if (VAR_6->final) {
   if (VAR_5->srej_save_reqseq != VAR_6->reqseq ||
       !FUNC_10(VAR_2,
      &VAR_5->conn_state))
    FUNC_7(VAR_5, VAR_6);
  } else {
   FUNC_7(VAR_5, VAR_6);
   if (VAR_5->tx_state == VAR_4) {
    FUNC_9(VAR_2, &VAR_5->conn_state);
    VAR_5->srej_save_reqseq = VAR_6->reqseq;
   }
  }
 }
}
