
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {int dev_name; } ;
struct hci_cp_write_local_name {int name; } ;
typedef int cp ;


 int VAR_0 ;
 int FUNC_0 (struct hci_request*,int ,int,struct hci_cp_write_local_name*) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(struct hci_request *VAR_1)
{
 struct hci_dev *VAR_2 = VAR_1->hdev;
 struct hci_cp_write_local_name VAR_3;

 FUNC_1(VAR_3.name, VAR_2->dev_name, sizeof(VAR_3.name));

 FUNC_0(VAR_1, VAR_0, sizeof(VAR_3), &VAR_3);
}
