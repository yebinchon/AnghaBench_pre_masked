
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct l2cap_conn {int dummy; } ;
struct l2cap_chan {scalar_t__ move_role; int local_amp_id; int move_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct l2cap_chan*) ;
 int FUNC_1 (struct l2cap_chan*) ;
 struct l2cap_chan* FUNC_2 (struct l2cap_conn*,int ) ;
 int FUNC_3 (struct l2cap_chan*) ;
 int FUNC_4 (struct l2cap_chan*,int ) ;
 int FUNC_5 (struct l2cap_conn*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct l2cap_conn *VAR_4, u8 VAR_5, u16 VAR_6,
       u16 VAR_7)
{
 struct l2cap_chan *VAR_8;

 VAR_8 = FUNC_2(VAR_4, VAR_5);
 if (!VAR_8) {

  FUNC_5(VAR_4, VAR_6);
  return;
 }

 FUNC_0(VAR_8);

 if (VAR_8->move_role == VAR_1) {
  if (VAR_7 == VAR_3) {
   VAR_8->move_role = VAR_2;
  } else {

   VAR_8->move_id = VAR_8->local_amp_id;
   FUNC_3(VAR_8);
  }
 }

 FUNC_4(VAR_8, VAR_0);

 FUNC_1(VAR_8);
}
