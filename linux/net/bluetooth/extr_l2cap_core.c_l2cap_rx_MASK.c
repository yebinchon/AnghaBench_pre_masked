
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct l2cap_ctrl {int reqseq; } ;
struct l2cap_chan {int rx_state; int expected_ack_seq; int next_tx_seq; } ;


 int FUNC_0 (char*,struct l2cap_chan*,struct l2cap_ctrl*,int ,...) ;
 int VAR_0 ;




 scalar_t__ FUNC_1 (struct l2cap_chan*,int ) ;
 int FUNC_2 (struct l2cap_chan*,struct l2cap_ctrl*,struct sk_buff*,int ) ;
 int FUNC_3 (struct l2cap_chan*,struct l2cap_ctrl*,struct sk_buff*,int ) ;
 int FUNC_4 (struct l2cap_chan*,struct l2cap_ctrl*,struct sk_buff*,int ) ;
 int FUNC_5 (struct l2cap_chan*,struct l2cap_ctrl*,struct sk_buff*,int ) ;
 int FUNC_6 (struct l2cap_chan*,int ) ;

__attribute__((used)) static int FUNC_7(struct l2cap_chan *VAR_1, struct l2cap_ctrl *VAR_2,
      struct sk_buff *VAR_3, u8 VAR_4)
{
 int VAR_5 = 0;

 FUNC_0("chan %p, control %p, skb %p, event %d, state %d", VAR_1,
        VAR_2, VAR_3, VAR_4, VAR_1->rx_state);

 if (FUNC_1(VAR_1, VAR_2->reqseq)) {
  switch (VAR_1->rx_state) {
  case 131:
   VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
   break;
  case 130:
   VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3,
             VAR_4);
   break;
  case 128:
   VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4);
   break;
  case 129:
   VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);
   break;
  default:

   break;
  }
 } else {
  FUNC_0("Invalid reqseq %d (next_tx_seq %d, expected_ack_seq %d",
         VAR_2->reqseq, VAR_1->next_tx_seq,
         VAR_1->expected_ack_seq);
  FUNC_6(VAR_1, VAR_0);
 }

 return VAR_5;
}
