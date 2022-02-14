
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct l2cap_ctrl {int sframe; scalar_t__ reqseq; int super; } ;
struct l2cap_chan {scalar_t__ buffer_seq; scalar_t__ last_acked_seq; scalar_t__ rx_state; int ack_win; int conn_state; } ;
typedef int control ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_chan*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct l2cap_chan*) ;
 int FUNC_4 (struct l2cap_chan*) ;
 int FUNC_5 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_6 (struct l2cap_ctrl*,int ,int) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct l2cap_chan *VAR_5)
{
 struct l2cap_ctrl VAR_6;
 u16 VAR_7 = FUNC_2(VAR_5, VAR_5->buffer_seq,
      VAR_5->last_acked_seq);
 int VAR_8;

 FUNC_0("chan %p last_acked_seq %d buffer_seq %d",
        VAR_5, VAR_5->last_acked_seq, VAR_5->buffer_seq);

 FUNC_6(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.sframe = 1;

 if (FUNC_7(VAR_0, &VAR_5->conn_state) &&
     VAR_5->rx_state == VAR_2) {
  FUNC_1(VAR_5);
  VAR_6.super = VAR_3;
  VAR_6.reqseq = VAR_5->buffer_seq;
  FUNC_5(VAR_5, &VAR_6);
 } else {
  if (!FUNC_7(VAR_1, &VAR_5->conn_state)) {
   FUNC_4(VAR_5);

   if (VAR_5->buffer_seq == VAR_5->last_acked_seq)
    VAR_7 = 0;
  }




  VAR_8 = VAR_5->ack_win;
  VAR_8 += VAR_8 << 1;
  VAR_8 >>= 2;

  FUNC_0("frames_to_ack %u, threshold %d", VAR_7,
         VAR_8);

  if (VAR_7 >= VAR_8) {
   FUNC_1(VAR_5);
   VAR_6.super = VAR_4;
   VAR_6.reqseq = VAR_5->buffer_seq;
   FUNC_5(VAR_5, &VAR_6);
   VAR_7 = 0;
  }

  if (VAR_7)
   FUNC_3(VAR_5);
 }
}
