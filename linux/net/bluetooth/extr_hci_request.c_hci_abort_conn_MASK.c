
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_request {int dummy; } ;
struct hci_conn {int hdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct hci_request*,struct hci_conn*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct hci_request*,int ) ;
 int FUNC_3 (struct hci_request*,int ) ;

int FUNC_4(struct hci_conn *VAR_2, u8 VAR_3)
{
 struct hci_request VAR_4;
 int VAR_5;

 FUNC_2(&VAR_4, VAR_2->hdev);

 FUNC_0(&VAR_4, VAR_2, VAR_3);

 VAR_5 = FUNC_3(&VAR_4, VAR_1);
 if (VAR_5 && VAR_5 != -VAR_0) {
  FUNC_1(VAR_2->hdev, "failed to run HCI request: err %d", VAR_5);
  return VAR_5;
 }

 return 0;
}
