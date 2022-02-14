
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {int* le_features; int le_scan_window; int le_scan_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct hci_dev*,int ) ;
 int FUNC_1 (struct hci_request*,int ,int ,int ,int,int) ;
 scalar_t__ FUNC_2 (struct hci_request*,int,int ,int*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_request*) ;

void FUNC_5(struct hci_request *VAR_3)
{
 struct hci_dev *VAR_4 = VAR_3->hdev;
 u8 VAR_5;
 u8 VAR_6;







 if (FUNC_2(VAR_3, 0, FUNC_3(VAR_4),
          &VAR_5))
  return;





 VAR_6 = FUNC_4(VAR_3);
 if (FUNC_0(VAR_4, VAR_1) &&
     (VAR_4->le_features[0] & VAR_0))
  VAR_6 |= 0x02;

 FUNC_1(VAR_3, VAR_2, VAR_4->le_scan_interval,
      VAR_4->le_scan_window, VAR_5, VAR_6);
}
