
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_cp_disconn_logical_link {int log_handle; } ;
struct hci_conn {scalar_t__ state; int hdev; } ;
struct hci_chan {int handle; struct hci_conn* conn; } ;
typedef int cp ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct hci_chan*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,struct hci_cp_disconn_logical_link*) ;

void FUNC_3(struct hci_chan *VAR_2)
{
 struct hci_conn *VAR_3 = VAR_2->conn;
 struct hci_cp_disconn_logical_link VAR_4;

 if (VAR_3->state != VAR_0) {
  FUNC_0("hchan %p not connected", VAR_2);
  return;
 }

 VAR_4.log_handle = FUNC_1(VAR_2->handle);
 FUNC_2(VAR_3->hdev, VAR_1, sizeof(VAR_4), &VAR_4);
}
