
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct l2cap_chan {scalar_t__ state; scalar_t__ local_amp_id; } ;
struct hci_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,struct l2cap_chan*,struct hci_chan*,scalar_t__) ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_chan*) ;
 int FUNC_3 (struct l2cap_chan*,struct hci_chan*) ;
 int FUNC_4 (struct l2cap_chan*,struct hci_chan*) ;

void FUNC_5(struct l2cap_chan *VAR_2, struct hci_chan *VAR_3,
         u8 VAR_4)
{
 FUNC_0("chan %p, hchan %p, status %d", VAR_2, VAR_3, VAR_4);

 if (VAR_4) {
  FUNC_2(VAR_2);
  FUNC_1(VAR_2);
  return;
 }

 if (VAR_2->state != VAR_1) {

  if (VAR_2->local_amp_id != VAR_0)
   FUNC_3(VAR_2, VAR_3);
 } else {
  FUNC_4(VAR_2, VAR_3);
 }
}
