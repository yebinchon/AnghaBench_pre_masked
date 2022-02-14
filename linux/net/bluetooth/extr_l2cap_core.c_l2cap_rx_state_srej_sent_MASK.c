
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct l2cap_ctrl {int sframe; int reqseq; int super; int poll; int final; int txseq; } ;
struct l2cap_chan {int buffer_seq; int conn_state; int unacked_frames; int srej_q; int srej_list; int expected_tx_seq; } ;
typedef int rr_control ;


 int FUNC_0 (char*,struct l2cap_chan*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;
 int FUNC_1 (struct l2cap_chan*,int ) ;
 int FUNC_2 (struct l2cap_chan*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct l2cap_chan*,int ) ;
 int FUNC_6 (struct l2cap_chan*) ;
 int FUNC_7 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_8 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_9 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_10 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_11 (struct l2cap_chan*) ;
 int FUNC_12 (struct l2cap_chan*) ;
 int FUNC_13 (struct l2cap_chan*,int ) ;
 int FUNC_14 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_15 (struct l2cap_chan*,int ) ;
 int FUNC_16 (struct l2cap_chan*,int ) ;
 int FUNC_17 (struct l2cap_chan*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct l2cap_ctrl*,int ,int) ;
 int FUNC_20 (int ,int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,struct sk_buff*) ;
 int FUNC_23 (int ,int *) ;

__attribute__((used)) static int FUNC_24(struct l2cap_chan *VAR_5,
        struct l2cap_ctrl *VAR_6,
        struct sk_buff *VAR_7, u8 VAR_8)
{
 int VAR_9 = 0;
 u16 VAR_10 = VAR_6->txseq;
 bool VAR_11 = 0;

 FUNC_0("chan %p, control %p, skb %p, event %d", VAR_5, VAR_6, VAR_7,
        VAR_8);

 switch (VAR_8) {
 case 140:
  switch (FUNC_5(VAR_5, VAR_10)) {
  case 133:

   FUNC_9(VAR_5, VAR_6);
   FUNC_22(&VAR_5->srej_q, VAR_7);
   VAR_11 = 1;
   FUNC_0("Queued %p (queue len %d)", VAR_7,
          FUNC_21(&VAR_5->srej_q));

   VAR_5->expected_tx_seq = FUNC_1(VAR_5, VAR_10);
   break;
  case 132:
   FUNC_18(&VAR_5->srej_list);

   FUNC_9(VAR_5, VAR_6);
   FUNC_22(&VAR_5->srej_q, VAR_7);
   VAR_11 = 1;
   FUNC_0("Queued %p (queue len %d)", VAR_7,
          FUNC_21(&VAR_5->srej_q));

   VAR_9 = FUNC_11(VAR_5);
   if (VAR_9)
    break;

   break;
  case 129:




   FUNC_22(&VAR_5->srej_q, VAR_7);
   VAR_11 = 1;
   FUNC_0("Queued %p (queue len %d)", VAR_7,
          FUNC_21(&VAR_5->srej_q));

   FUNC_9(VAR_5, VAR_6);
   FUNC_15(VAR_5, VAR_6->txseq);
   break;
  case 128:





   FUNC_22(&VAR_5->srej_q, VAR_7);
   VAR_11 = 1;
   FUNC_0("Queued %p (queue len %d)", VAR_7,
          FUNC_21(&VAR_5->srej_q));

   FUNC_9(VAR_5, VAR_6);
   FUNC_16(VAR_5, VAR_6->txseq);
   break;
  case 134:

   FUNC_9(VAR_5, VAR_6);
   break;
  case 135:



   break;
  case 130:
   break;
  case 131:
  default:
   FUNC_13(VAR_5, VAR_3);
   break;
  }
  break;
 case 137:
  FUNC_9(VAR_5, VAR_6);
  if (VAR_6->final) {
   FUNC_3(VAR_1, &VAR_5->conn_state);

   if (!FUNC_23(VAR_0,
      &VAR_5->conn_state)) {
    VAR_6->final = 0;
    FUNC_10(VAR_5, VAR_6);
   }

   FUNC_6(VAR_5);
  } else if (VAR_6->poll) {
   if (FUNC_23(VAR_1,
            &VAR_5->conn_state) &&
       VAR_5->unacked_frames) {
    FUNC_2(VAR_5);
   }

   FUNC_20(VAR_2, &VAR_5->conn_state);
   FUNC_17(VAR_5);
  } else {
   if (FUNC_23(VAR_1,
            &VAR_5->conn_state) &&
       VAR_5->unacked_frames)
    FUNC_2(VAR_5);

   FUNC_12(VAR_5);
  }
  break;
 case 138:
  FUNC_20(VAR_1, &VAR_5->conn_state);
  FUNC_9(VAR_5, VAR_6);
  if (VAR_6->poll) {
   FUNC_17(VAR_5);
  } else {
   struct l2cap_ctrl VAR_12;
   FUNC_19(&VAR_12, 0, sizeof(VAR_12));
   VAR_12.sframe = 1;
   VAR_12.super = VAR_4;
   VAR_12.reqseq = VAR_5->buffer_seq;
   FUNC_14(VAR_5, &VAR_12);
  }

  break;
 case 139:
  FUNC_7(VAR_5, VAR_6);
  break;
 case 136:
  FUNC_8(VAR_5, VAR_6);
  break;
 }

 if (VAR_7 && !VAR_11) {
  FUNC_0("Freeing %p", VAR_7);
  FUNC_4(VAR_7);
 }

 return VAR_9;
}
