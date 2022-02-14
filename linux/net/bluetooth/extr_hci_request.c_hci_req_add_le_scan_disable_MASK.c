
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {int dummy; } ;
struct hci_cp_le_set_scan_enable {void* enable; } ;
struct hci_cp_le_set_ext_scan_enable {void* enable; } ;
typedef int cp ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct hci_request*,int ,int,struct hci_cp_le_set_scan_enable*) ;
 int FUNC_1 (struct hci_cp_le_set_scan_enable*,int ,int) ;
 scalar_t__ FUNC_2 (struct hci_dev*) ;

void FUNC_3(struct hci_request *VAR_3)
{
 struct hci_dev *VAR_4 = VAR_3->hdev;

 if (FUNC_2(VAR_4)) {
  struct hci_cp_le_set_ext_scan_enable VAR_5;

  FUNC_1(&VAR_5, 0, sizeof(VAR_5));
  VAR_5.enable = VAR_2;
  FUNC_0(VAR_3, VAR_0, sizeof(VAR_5),
       &VAR_5);
 } else {
  struct hci_cp_le_set_scan_enable VAR_6;

  FUNC_1(&VAR_6, 0, sizeof(VAR_6));
  VAR_6.enable = VAR_2;
  FUNC_0(VAR_3, VAR_1, sizeof(VAR_6), &VAR_6);
 }
}
