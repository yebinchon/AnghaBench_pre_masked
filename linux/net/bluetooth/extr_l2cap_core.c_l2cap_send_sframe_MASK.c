
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct l2cap_ctrl {int final; scalar_t__ super; int poll; int reqseq; int sframe; } ;
struct l2cap_chan {int flags; int last_acked_seq; int conn_state; } ;


 int FUNC_0 (char*,struct l2cap_chan*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (struct l2cap_chan*) ;
 int FUNC_3 (struct l2cap_chan*) ;
 int FUNC_4 (struct l2cap_ctrl*) ;
 int FUNC_5 (struct l2cap_ctrl*) ;
 int FUNC_6 (int ,int *) ;
 struct sk_buff* FUNC_7 (struct l2cap_chan*,int ) ;
 int FUNC_8 (struct l2cap_chan*,struct sk_buff*) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static void FUNC_12(struct l2cap_chan *VAR_6,
         struct l2cap_ctrl *VAR_7)
{
 struct sk_buff *VAR_8;
 u32 VAR_9;

 FUNC_0("chan %p, control %p", VAR_6, VAR_7);

 if (!VAR_7->sframe)
  return;

 if (FUNC_2(VAR_6))
  return;

 if (FUNC_10(VAR_1, &VAR_6->conn_state) &&
     !VAR_7->poll)
  VAR_7->final = 1;

 if (VAR_7->super == VAR_4)
  FUNC_6(VAR_0, &VAR_6->conn_state);
 else if (VAR_7->super == VAR_3)
  FUNC_9(VAR_0, &VAR_6->conn_state);

 if (VAR_7->super != VAR_5) {
  VAR_6->last_acked_seq = VAR_7->reqseq;
  FUNC_3(VAR_6);
 }

 FUNC_0("reqseq %d, final %d, poll %d, super %d", VAR_7->reqseq,
        VAR_7->final, VAR_7->poll, VAR_7->super);

 if (FUNC_11(VAR_2, &VAR_6->flags))
  VAR_9 = FUNC_5(VAR_7);
 else
  VAR_9 = FUNC_4(VAR_7);

 VAR_8 = FUNC_7(VAR_6, VAR_9);
 if (!FUNC_1(VAR_8))
  FUNC_8(VAR_6, VAR_8);
}
