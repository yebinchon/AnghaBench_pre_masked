
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct l2cap_chan {int move_role; scalar_t__ mode; int rx_state; int move_state; } ;


 int FUNC_0 (char*,struct l2cap_chan*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct l2cap_chan*,int *,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct l2cap_chan *VAR_6)
{
 u8 VAR_7 = VAR_6->move_role;
 FUNC_0("chan %p", VAR_6);

 VAR_6->move_state = VAR_3;
 VAR_6->move_role = VAR_2;

 if (VAR_6->mode != VAR_1)
  return;

 switch (VAR_7) {
 case 129:
  FUNC_1(VAR_6, ((void*)0), ((void*)0), VAR_0);
  VAR_6->rx_state = VAR_4;
  break;
 case 128:
  VAR_6->rx_state = VAR_5;
  break;
 }
}
