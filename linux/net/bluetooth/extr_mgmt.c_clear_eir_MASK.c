
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {struct hci_cp_write_eir* eir; } ;
struct hci_cp_write_eir {int dummy; } ;
typedef int cp ;


 int VAR_0 ;
 int FUNC_0 (struct hci_request*,int ,int,struct hci_cp_write_eir*) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_cp_write_eir*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct hci_request *VAR_1)
{
 struct hci_dev *VAR_2 = VAR_1->hdev;
 struct hci_cp_write_eir VAR_3;

 if (!FUNC_1(VAR_2))
  return;

 FUNC_2(VAR_2->eir, 0, sizeof(VAR_2->eir));

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));

 FUNC_0(VAR_1, VAR_0, sizeof(VAR_3), &VAR_3);
}
