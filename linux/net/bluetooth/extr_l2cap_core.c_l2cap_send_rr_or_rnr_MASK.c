
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_ctrl {int sframe; int poll; int reqseq; int super; } ;
struct l2cap_chan {int buffer_seq; int conn_state; } ;
typedef int control ;


 int FUNC_0 (char*,struct l2cap_chan*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct l2cap_chan*,struct l2cap_ctrl*) ;
 int FUNC_2 (struct l2cap_ctrl*,int ,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct l2cap_chan *VAR_3, bool VAR_4)
{
 struct l2cap_ctrl VAR_5;

 FUNC_0("chan %p, poll %d", VAR_3, VAR_4);

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.sframe = 1;
 VAR_5.poll = VAR_4;

 if (FUNC_3(VAR_0, &VAR_3->conn_state))
  VAR_5.super = VAR_1;
 else
  VAR_5.super = VAR_2;

 VAR_5.reqseq = VAR_3->buffer_seq;
 FUNC_1(VAR_3, &VAR_5);
}
