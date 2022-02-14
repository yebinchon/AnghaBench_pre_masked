
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l2cap_chan {int move_state; int conn; TYPE_1__* hs_hcon; } ;
struct hci_chan {scalar_t__ state; TYPE_1__* conn; } ;
struct TYPE_2__ {int l2cap_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct l2cap_chan*,struct hci_chan*,int ) ;
 int FUNC_1 (struct l2cap_chan*,int ) ;

__attribute__((used)) static void FUNC_2(struct l2cap_chan *VAR_5, int VAR_6)
{
 struct hci_chan *VAR_7 = ((void*)0);



 if (VAR_7) {
  if (VAR_7->state == VAR_0) {

   VAR_5->hs_hcon = VAR_7->conn;
   VAR_5->hs_hcon->l2cap_data = VAR_5->conn;
   VAR_5->move_state = VAR_1;
   FUNC_1(VAR_5, VAR_4);

   FUNC_0(VAR_5, VAR_7, VAR_4);
  } else {

   VAR_5->move_state = VAR_2;
  }
 } else {

  FUNC_1(VAR_5, VAR_3);
 }
}
