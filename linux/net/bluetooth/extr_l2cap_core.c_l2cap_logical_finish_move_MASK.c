
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l2cap_chan {int move_state; int move_role; int conn_state; int conn; TYPE_1__* hs_hcon; } ;
struct hci_chan {TYPE_1__* conn; } ;
struct TYPE_2__ {int l2cap_data; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_chan*,int ) ;
 int FUNC_3 (struct l2cap_chan*,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct l2cap_chan *VAR_10,
          struct hci_chan *VAR_11)
{
 VAR_10->hs_hcon = VAR_11->conn;
 VAR_10->hs_hcon->l2cap_data = VAR_10->conn;

 FUNC_0("move_state %d", VAR_10->move_state);

 switch (VAR_10->move_state) {
 case 128:



  VAR_10->move_state = VAR_8;
  break;
 case 129:
  if (FUNC_4(VAR_0, &VAR_10->conn_state)) {
   VAR_10->move_state = VAR_7;
  } else if (VAR_10->move_role == VAR_2) {
   VAR_10->move_state = VAR_6;
   FUNC_2(VAR_10, VAR_1);
  } else if (VAR_10->move_role == VAR_3) {
   VAR_10->move_state = VAR_5;
   FUNC_3(VAR_10, VAR_9);
  }
  break;
 default:

  FUNC_1(VAR_10);

  VAR_10->move_state = VAR_4;
 }
}
