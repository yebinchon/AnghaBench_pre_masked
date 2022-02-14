
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff_head {int dummy; } ;
struct l2cap_ctrl {int sframe; int poll; int reqseq; int super; } ;
struct l2cap_chan {int retry_count; void* tx_state; int buffer_seq; int conn_state; int rx_state; int tx_q; int * tx_send_head; } ;
typedef int local_control ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_chan*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct l2cap_chan*) ;
 int FUNC_5 (struct l2cap_chan*) ;
 int FUNC_6 (struct l2cap_chan*,int ) ;
 int FUNC_7 (struct l2cap_chan*) ;
 int FUNC_8 (struct l2cap_chan*,int) ;
 int FUNC_9 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_10 (struct l2cap_ctrl*,int ,int) ;
 int FUNC_11 (int ,int *) ;
 int * FUNC_12 (struct sk_buff_head*) ;
 int FUNC_13 (struct sk_buff_head*,int *) ;
 int FUNC_14 (int ,int *) ;

__attribute__((used)) static void FUNC_15(struct l2cap_chan *VAR_5,
    struct l2cap_ctrl *VAR_6,
    struct sk_buff_head *VAR_7, u8 VAR_8)
{
 FUNC_0("chan %p, control %p, skbs %p, event %d", VAR_5, VAR_6, VAR_7,
        VAR_8);

 switch (VAR_8) {
 case 134:
  if (VAR_5->tx_send_head == ((void*)0))
   VAR_5->tx_send_head = FUNC_12(VAR_7);

  FUNC_13(VAR_7, &VAR_5->tx_q);
  FUNC_5(VAR_5);
  break;
 case 131:
  FUNC_0("Enter LOCAL_BUSY");
  FUNC_11(VAR_0, &VAR_5->conn_state);

  if (VAR_5->rx_state == VAR_2) {



   FUNC_4(VAR_5);
  }

  FUNC_7(VAR_5);

  break;
 case 132:
  FUNC_0("Exit LOCAL_BUSY");
  FUNC_3(VAR_0, &VAR_5->conn_state);

  if (FUNC_14(VAR_1, &VAR_5->conn_state)) {
   struct l2cap_ctrl VAR_9;

   FUNC_10(&VAR_9, 0, sizeof(VAR_9));
   VAR_9.sframe = 1;
   VAR_9.super = VAR_3;
   VAR_9.poll = 1;
   VAR_9.reqseq = VAR_5->buffer_seq;
   FUNC_9(VAR_5, &VAR_9);

   VAR_5->retry_count = 1;
   FUNC_2(VAR_5);
   VAR_5->tx_state = VAR_4;
  }
  break;
 case 129:
  FUNC_6(VAR_5, VAR_6->reqseq);
  break;
 case 133:
  FUNC_8(VAR_5, 1);
  VAR_5->retry_count = 1;
  FUNC_2(VAR_5);
  FUNC_1(VAR_5);
  VAR_5->tx_state = VAR_4;
  break;
 case 128:
  FUNC_8(VAR_5, 1);
  VAR_5->retry_count = 1;
  FUNC_2(VAR_5);
  VAR_5->tx_state = VAR_4;
  break;
 case 130:

  break;
 default:
  break;
 }
}
