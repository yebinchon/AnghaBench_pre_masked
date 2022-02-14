
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct l2cap_ctrl {scalar_t__ reqseq; scalar_t__ final; } ;
struct l2cap_chan {scalar_t__ next_tx_seq; scalar_t__ max_tx; scalar_t__ tx_state; int conn_state; int tx_q; } ;
struct TYPE_3__ {scalar_t__ retries; } ;
struct TYPE_4__ {TYPE_1__ l2cap; } ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct l2cap_chan*) ;
 struct sk_buff* FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_6 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_7 (struct l2cap_chan*,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct l2cap_chan *VAR_4,
        struct l2cap_ctrl *VAR_5)
{
 struct sk_buff *VAR_6;

 FUNC_0("chan %p, control %p", VAR_4, VAR_5);

 if (VAR_5->reqseq == VAR_4->next_tx_seq) {
  FUNC_0("Invalid reqseq %d, disconnecting", VAR_5->reqseq);
  FUNC_7(VAR_4, VAR_2);
  return;
 }

 VAR_6 = FUNC_4(&VAR_4->tx_q, VAR_5->reqseq);

 if (VAR_4->max_tx && VAR_6 &&
     FUNC_1(VAR_6)->l2cap.retries >= VAR_4->max_tx) {
  FUNC_0("Retry limit exceeded (%d)", VAR_4->max_tx);
  FUNC_7(VAR_4, VAR_2);
  return;
 }

 FUNC_2(VAR_1, &VAR_4->conn_state);

 FUNC_5(VAR_4, VAR_5);

 if (VAR_5->final) {
  if (!FUNC_9(VAR_0, &VAR_4->conn_state))
   FUNC_6(VAR_4, VAR_5);
 } else {
  FUNC_6(VAR_4, VAR_5);
  FUNC_3(VAR_4);
  if (VAR_4->tx_state == VAR_3)
   FUNC_8(VAR_0, &VAR_4->conn_state);
 }
}
