
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff_head {int dummy; } ;
struct l2cap_ctrl {int sframe; int poll; int final; int reqseq; int super; } ;
struct l2cap_chan {int retry_count; int max_tx; int tx_state; int unacked_frames; int buffer_seq; int conn_state; int rx_state; int tx_q; int * tx_send_head; } ;
typedef int local_control ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_chan*) ;
 int FUNC_3 (struct l2cap_chan*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct l2cap_chan*) ;
 int FUNC_6 (struct l2cap_chan*,int ) ;
 int FUNC_7 (struct l2cap_chan*) ;
 int FUNC_8 (struct l2cap_chan*,int ) ;
 int FUNC_9 (struct l2cap_chan*,int) ;
 int FUNC_10 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_11 (struct l2cap_ctrl*,int ,int) ;
 int FUNC_12 (int ,int *) ;
 int * FUNC_13 (struct sk_buff_head*) ;
 int FUNC_14 (struct sk_buff_head*,int *) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static void FUNC_16(struct l2cap_chan *VAR_7,
      struct l2cap_ctrl *VAR_8,
      struct sk_buff_head *VAR_9, u8 VAR_10)
{
 FUNC_0("chan %p, control %p, skbs %p, event %d", VAR_7, VAR_8, VAR_9,
        VAR_10);

 switch (VAR_10) {
 case 134:
  if (VAR_7->tx_send_head == ((void*)0))
   VAR_7->tx_send_head = FUNC_13(VAR_9);

  FUNC_14(VAR_9, &VAR_7->tx_q);
  break;
 case 131:
  FUNC_0("Enter LOCAL_BUSY");
  FUNC_12(VAR_0, &VAR_7->conn_state);

  if (VAR_7->rx_state == VAR_3) {



   FUNC_5(VAR_7);
  }

  FUNC_7(VAR_7);

  break;
 case 132:
  FUNC_0("Exit LOCAL_BUSY");
  FUNC_4(VAR_0, &VAR_7->conn_state);

  if (FUNC_15(VAR_1, &VAR_7->conn_state)) {
   struct l2cap_ctrl VAR_11;
   FUNC_11(&VAR_11, 0, sizeof(VAR_11));
   VAR_11.sframe = 1;
   VAR_11.super = VAR_4;
   VAR_11.poll = 1;
   VAR_11.reqseq = VAR_7->buffer_seq;
   FUNC_10(VAR_7, &VAR_11);

   VAR_7->retry_count = 1;
   FUNC_2(VAR_7);
   VAR_7->tx_state = VAR_5;
  }
  break;
 case 128:
  FUNC_6(VAR_7, VAR_8->reqseq);



 case 129:
  if (VAR_8 && VAR_8->final) {
   FUNC_1(VAR_7);
   if (VAR_7->unacked_frames > 0)
    FUNC_3(VAR_7);
   VAR_7->retry_count = 0;
   VAR_7->tx_state = VAR_6;
   FUNC_0("recv fbit tx_state 0x2.2%x", VAR_7->tx_state);
  }
  break;
 case 133:

  break;
 case 130:
  if (VAR_7->max_tx == 0 || VAR_7->retry_count < VAR_7->max_tx) {
   FUNC_9(VAR_7, 1);
   FUNC_2(VAR_7);
   VAR_7->retry_count++;
  } else {
   FUNC_8(VAR_7, VAR_2);
  }
  break;
 default:
  break;
 }
}
