
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct l2cap_ctrl {int poll; int final; struct sk_buff* txseq; } ;
struct l2cap_chan {int retrans_list; int conn_state; int unacked_frames; int rx_state; int srej_list; int srej_q; int expected_tx_seq; int buffer_seq; } ;


 int FUNC_0 (char*,struct l2cap_chan*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int VAR_6 ;





 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_chan*) ;
 int FUNC_3 (struct l2cap_chan*,struct sk_buff*) ;
 int FUNC_4 (struct l2cap_chan*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct l2cap_chan*,struct sk_buff*) ;
 int FUNC_8 (struct l2cap_chan*) ;
 int FUNC_9 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_10 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_11 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_12 (struct l2cap_chan*,struct sk_buff*,struct l2cap_ctrl*) ;
 int FUNC_13 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_14 (struct l2cap_chan*) ;
 int FUNC_15 (struct l2cap_chan*,int ) ;
 int FUNC_16 (struct l2cap_chan*) ;
 int FUNC_17 (struct l2cap_chan*,int ) ;
 int FUNC_18 (struct l2cap_chan*,struct sk_buff*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,struct sk_buff*) ;
 int FUNC_23 (int ,int *) ;
 int FUNC_24 (int ,int *) ;

__attribute__((used)) static int FUNC_25(struct l2cap_chan *VAR_7,
          struct l2cap_ctrl *VAR_8,
          struct sk_buff *VAR_9, u8 VAR_10)
{
 int VAR_11 = 0;
 bool VAR_12 = 0;

 FUNC_0("chan %p, control %p, skb %p, event %d", VAR_7, VAR_8, VAR_9,
        VAR_10);

 switch (VAR_10) {
 case 137:
  switch (FUNC_7(VAR_7, VAR_8->txseq)) {
  case 131:
   FUNC_11(VAR_7, VAR_8);

   if (FUNC_24(VAR_0, &VAR_7->conn_state)) {
    FUNC_0("Busy, discarding expected seq %d",
           VAR_8->txseq);
    break;
   }

   VAR_7->expected_tx_seq = FUNC_3(VAR_7,
          VAR_8->txseq);

   VAR_7->buffer_seq = VAR_7->expected_tx_seq;
   VAR_12 = 1;

   VAR_11 = FUNC_12(VAR_7, VAR_9, VAR_8);
   if (VAR_11)
    break;

   if (VAR_8->final) {
    if (!FUNC_23(VAR_1,
       &VAR_7->conn_state)) {
     VAR_8->final = 0;
     FUNC_13(VAR_7, VAR_8);
     FUNC_8(VAR_7);
    }
   }

   if (!FUNC_24(VAR_0, &VAR_7->conn_state))
    FUNC_14(VAR_7);
   break;
  case 128:
   FUNC_11(VAR_7, VAR_8);





   if (FUNC_24(VAR_0, &VAR_7->conn_state)) {
    FUNC_0("Busy, discarding unexpected seq %d",
           VAR_8->txseq);
    break;
   }





   FUNC_22(&VAR_7->srej_q, VAR_9);
   VAR_12 = 1;
   FUNC_0("Queued %p (queue len %d)", VAR_9,
          FUNC_21(&VAR_7->srej_q));

   FUNC_5(VAR_4, &VAR_7->conn_state);
   FUNC_19(&VAR_7->srej_list);
   FUNC_18(VAR_7, VAR_8->txseq);

   VAR_7->rx_state = VAR_6;
   break;
  case 132:
   FUNC_11(VAR_7, VAR_8);
   break;
  case 129:
   break;
  case 130:
  default:
   FUNC_15(VAR_7, VAR_5);
   break;
  }
  break;
 case 134:
  FUNC_11(VAR_7, VAR_8);
  if (VAR_8->final) {
   FUNC_5(VAR_2, &VAR_7->conn_state);

   if (!FUNC_23(VAR_1, &VAR_7->conn_state) &&
       !FUNC_1(VAR_7)) {
    VAR_8->final = 0;
    FUNC_13(VAR_7, VAR_8);
   }

   FUNC_8(VAR_7);
  } else if (VAR_8->poll) {
   FUNC_16(VAR_7);
  } else {
   if (FUNC_23(VAR_2,
            &VAR_7->conn_state) &&
       VAR_7->unacked_frames)
    FUNC_4(VAR_7);

   FUNC_8(VAR_7);
  }
  break;
 case 135:
  FUNC_20(VAR_2, &VAR_7->conn_state);
  FUNC_11(VAR_7, VAR_8);
  if (VAR_8 && VAR_8->poll) {
   FUNC_20(VAR_3, &VAR_7->conn_state);
   FUNC_17(VAR_7, 0);
  }
  FUNC_2(VAR_7);
  FUNC_19(&VAR_7->retrans_list);
  break;
 case 136:
  FUNC_9(VAR_7, VAR_8);
  break;
 case 133:
  FUNC_10(VAR_7, VAR_8);
  break;
 default:
  break;
 }

 if (VAR_9 && !VAR_12) {
  FUNC_0("Freeing %p", VAR_9);
  FUNC_6(VAR_9);
 }

 return VAR_11;
}
