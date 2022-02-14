
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {scalar_t__ state; int move_role; int move_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct l2cap_chan*) ;
 int FUNC_1 (struct l2cap_chan*,int ) ;
 int FUNC_2 (struct l2cap_chan*,int ) ;
 int FUNC_3 (struct l2cap_chan*,int ) ;

__attribute__((used)) static void FUNC_4(struct l2cap_chan *VAR_6)
{

 if (VAR_6->state != VAR_0) {

  FUNC_1(VAR_6, VAR_1);
  return;
 }

 switch (VAR_6->move_role) {
 case 128:
  FUNC_0(VAR_6);
  FUNC_3(VAR_6, VAR_5);
  break;
 case 129:
  if (VAR_6->move_state == VAR_4 ||
      VAR_6->move_state == VAR_3) {



   FUNC_0(VAR_6);
  }




  FUNC_2(VAR_6, VAR_2);
  break;
 }
}
