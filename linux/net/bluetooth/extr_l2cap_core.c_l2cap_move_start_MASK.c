
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {scalar_t__ local_amp_id; scalar_t__ chan_policy; scalar_t__ move_id; int move_state; void* move_role; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,struct l2cap_chan*) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_chan*,int ) ;

void FUNC_3(struct l2cap_chan *VAR_5)
{
 FUNC_0("chan %p", VAR_5);

 if (VAR_5->local_amp_id == VAR_0) {
  if (VAR_5->chan_policy != VAR_1)
   return;
  VAR_5->move_role = VAR_2;
  VAR_5->move_state = VAR_3;

 } else {
  VAR_5->move_role = VAR_2;
  VAR_5->move_state = VAR_4;
  VAR_5->move_id = 0;
  FUNC_1(VAR_5);
  FUNC_2(VAR_5, 0);
 }
}
