
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {int eir; } ;
struct hci_cp_write_eir {int data; } ;
typedef int cp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_request*,int ,int,struct hci_cp_write_eir*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct hci_cp_write_eir*,int ,int) ;

void FUNC_8(struct hci_request *VAR_3)
{
 struct hci_dev *VAR_4 = VAR_3->hdev;
 struct hci_cp_write_eir VAR_5;

 if (!FUNC_3(VAR_4))
  return;

 if (!FUNC_4(VAR_4))
  return;

 if (!FUNC_1(VAR_4, VAR_2))
  return;

 if (FUNC_1(VAR_4, VAR_1))
  return;

 FUNC_7(&VAR_5, 0, sizeof(VAR_5));

 FUNC_0(VAR_4, VAR_5.data);

 if (FUNC_5(VAR_5.data, VAR_4->eir, sizeof(VAR_5.data)) == 0)
  return;

 FUNC_6(VAR_4->eir, VAR_5.data, sizeof(VAR_5.data));

 FUNC_2(VAR_3, VAR_0, sizeof(VAR_5), &VAR_5);
}
