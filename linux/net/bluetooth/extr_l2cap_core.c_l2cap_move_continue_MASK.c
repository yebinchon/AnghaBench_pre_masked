
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct l2cap_conn {int dummy; } ;
struct l2cap_chan {int move_state; int local_amp_id; int move_id; int conn; TYPE_1__* hs_hcon; int conn_state; } ;
struct hci_chan {TYPE_1__* conn; int state; } ;
struct TYPE_2__ {int l2cap_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;



 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct l2cap_chan*) ;
 int FUNC_1 (struct l2cap_chan*,int ) ;
 int FUNC_2 (struct l2cap_chan*) ;
 struct l2cap_chan* FUNC_3 (struct l2cap_conn*,scalar_t__) ;
 int FUNC_4 (struct l2cap_chan*,struct hci_chan*,scalar_t__) ;
 int FUNC_5 (struct l2cap_chan*) ;
 int FUNC_6 (struct l2cap_chan*,int ) ;
 int FUNC_7 (struct l2cap_conn*,scalar_t__) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct l2cap_conn *VAR_10, u16 VAR_11, u16 VAR_12)
{
 struct l2cap_chan *VAR_13;
 struct hci_chan *VAR_14 = ((void*)0);

 VAR_13 = FUNC_3(VAR_10, VAR_11);
 if (!VAR_13) {
  FUNC_7(VAR_10, VAR_11);
  return;
 }

 FUNC_0(VAR_13);
 if (VAR_12 == VAR_8)
  FUNC_1(VAR_13, VAR_4);

 switch (VAR_13->move_state) {
 case 130:



  VAR_13->move_state = VAR_7;
  break;
 case 128:
  if (VAR_12 == VAR_8) {
   break;
  } else if (FUNC_8(VAR_1,
        &VAR_13->conn_state)) {
   VAR_13->move_state = VAR_6;
  } else {



   VAR_13->move_state = VAR_5;
   FUNC_6(VAR_13, VAR_2);
  }
  break;
 case 129:

  if (VAR_12 == VAR_9) {



   VAR_13->move_state = VAR_7;
  } else {



   VAR_13->move_state = 130;
  }


  if (!VAR_14) {

   FUNC_6(VAR_13, VAR_3);
   break;
  }




  if (VAR_14->state != VAR_0)
   break;



  VAR_13->hs_hcon = VAR_14->conn;
  VAR_13->hs_hcon->l2cap_data = VAR_13->conn;

  if (VAR_12 == VAR_9) {

   FUNC_6(VAR_13, VAR_2);
  } else {



   VAR_13->move_state = 128;
  }

  FUNC_4(VAR_13, VAR_14, VAR_9);
  break;
 default:

  VAR_13->move_id = VAR_13->local_amp_id;
  FUNC_5(VAR_13);
  FUNC_6(VAR_13, VAR_3);
 }

 FUNC_2(VAR_13);
}
