
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_ctrl {int sframe; int final; int super; int reqseq; } ;
struct l2cap_chan {scalar_t__ unacked_frames; int conn_state; int buffer_seq; } ;
typedef int control ;


 int FUNC_0 (char*,struct l2cap_chan*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_chan*) ;
 int FUNC_3 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_4 (struct l2cap_ctrl*,int ,int) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct l2cap_chan *VAR_5)
{
 struct l2cap_ctrl VAR_6;

 FUNC_0("chan %p", VAR_5);

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.sframe = 1;
 VAR_6.final = 1;
 VAR_6.reqseq = VAR_5->buffer_seq;
 FUNC_5(VAR_2, &VAR_5->conn_state);

 if (FUNC_7(VAR_0, &VAR_5->conn_state)) {
  VAR_6.super = VAR_3;
  FUNC_3(VAR_5, &VAR_6);
 }

 if (FUNC_6(VAR_1, &VAR_5->conn_state) &&
     VAR_5->unacked_frames > 0)
  FUNC_1(VAR_5);


 FUNC_2(VAR_5);

 if (!FUNC_7(VAR_0, &VAR_5->conn_state) &&
     FUNC_7(VAR_2, &VAR_5->conn_state)) {



  VAR_6.super = VAR_4;
  FUNC_3(VAR_5, &VAR_6);
 }
}
