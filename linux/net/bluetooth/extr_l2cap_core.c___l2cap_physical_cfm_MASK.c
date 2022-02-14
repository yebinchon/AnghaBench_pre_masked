
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct l2cap_chan {scalar_t__ state; int move_role; int remote_amp_id; int local_amp_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,struct l2cap_chan*,int,int ,int ) ;
 scalar_t__ VAR_2 ;


 int VAR_3 ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_chan*,int,int ,int ) ;
 int FUNC_3 (struct l2cap_chan*,int) ;
 int FUNC_4 (struct l2cap_chan*,int ,int ) ;
 int FUNC_5 (struct l2cap_chan*,int) ;

void FUNC_6(struct l2cap_chan *VAR_4, int VAR_5)
{
 u8 VAR_6 = VAR_4->local_amp_id;
 u8 VAR_7 = VAR_4->remote_amp_id;

 FUNC_0("chan %p, result %d, local_amp_id %d, remote_amp_id %d",
        VAR_4, VAR_5, VAR_6, VAR_7);

 if (VAR_4->state == VAR_2 || VAR_4->state == VAR_0) {
  FUNC_1(VAR_4);
  return;
 }

 if (VAR_4->state != VAR_1) {
  FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);
 } else if (VAR_5 != VAR_3) {
  FUNC_3(VAR_4, VAR_5);
 } else {
  switch (VAR_4->move_role) {
  case 129:
   FUNC_4(VAR_4, VAR_6,
            VAR_7);
   break;
  case 128:
   FUNC_5(VAR_4, VAR_5);
   break;
  default:
   FUNC_3(VAR_4, VAR_5);
   break;
  }
 }
}
