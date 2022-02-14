
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l2cap_conn {int info_state; TYPE_1__* hcon; } ;
struct l2cap_chan {struct l2cap_conn* conn; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct l2cap_chan*) ;
 int FUNC_1 (struct l2cap_chan*,int ) ;
 int FUNC_2 (struct l2cap_chan*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct l2cap_chan*) ;
 int FUNC_5 (struct l2cap_conn*) ;
 int FUNC_6 (struct l2cap_chan*) ;

__attribute__((used)) static void FUNC_7(struct l2cap_chan *VAR_4)
{
 struct l2cap_conn *VAR_5 = VAR_4->conn;

 if (VAR_5->hcon->type == VAR_3) {
  FUNC_4(VAR_4);
  return;
 }

 if (!(VAR_5->info_state & VAR_2)) {
  FUNC_5(VAR_5);
  return;
 }

 if (!(VAR_5->info_state & VAR_1))
  return;

 if (!FUNC_2(VAR_4, 1) ||
     !FUNC_0(VAR_4))
  return;

 if (FUNC_3(VAR_5->hcon))
  FUNC_6(VAR_4);
 else
  FUNC_1(VAR_4, VAR_0);
}
