
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct l2cap_chan {scalar_t__ move_role; int move_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct l2cap_chan*) ;
 int FUNC_1 (struct l2cap_chan*,int ) ;

__attribute__((used)) static void FUNC_2(struct l2cap_chan *VAR_6, int VAR_7)
{
 if (VAR_6->move_role == VAR_2) {
  u8 VAR_8;
  if (VAR_7 == -VAR_0)
   VAR_8 = VAR_4;
  else
   VAR_8 = VAR_5;

  FUNC_1(VAR_6, VAR_8);
 }

 VAR_6->move_role = VAR_1;
 VAR_6->move_state = VAR_3;


 FUNC_0(VAR_6);
}
