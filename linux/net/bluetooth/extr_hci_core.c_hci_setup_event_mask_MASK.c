
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {scalar_t__ hci_ver; int* commands; int* le_features; int quirks; } ;
typedef int events ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hci_request*,int ,int,int*) ;
 scalar_t__ FUNC_1 (struct hci_dev*) ;
 scalar_t__ FUNC_2 (struct hci_dev*) ;
 scalar_t__ FUNC_3 (struct hci_dev*) ;
 scalar_t__ FUNC_4 (struct hci_dev*) ;
 scalar_t__ FUNC_5 (struct hci_dev*) ;
 scalar_t__ FUNC_6 (struct hci_dev*) ;
 scalar_t__ FUNC_7 (struct hci_dev*) ;
 scalar_t__ FUNC_8 (struct hci_dev*) ;
 scalar_t__ FUNC_9 (struct hci_dev*) ;
 scalar_t__ FUNC_10 (struct hci_dev*) ;
 scalar_t__ FUNC_11 (struct hci_dev*) ;
 int FUNC_12 (int*,int ,int) ;
 scalar_t__ FUNC_13 (int ,int *) ;

__attribute__((used)) static void FUNC_14(struct hci_request *VAR_4)
{
 struct hci_dev *VAR_5 = VAR_4->hdev;





 u8 VAR_6[8] = { 0xff, 0xff, 0xfb, 0xff, 0x00, 0x00, 0x00, 0x00 };




 if (VAR_5->hci_ver < VAR_0)
  return;

 if (FUNC_1(VAR_5)) {
  VAR_6[4] |= 0x01;
 } else {

  FUNC_12(VAR_6, 0, sizeof(VAR_6));
  VAR_6[1] |= 0x20;
  VAR_6[1] |= 0x40;
  VAR_6[1] |= 0x80;





  if (VAR_5->commands[0] & 0x20) {
   VAR_6[0] |= 0x10;
   VAR_6[2] |= 0x04;
   VAR_6[3] |= 0x02;
  }




  if (VAR_5->commands[2] & 0x80)
   VAR_6[1] |= 0x08;



  if (VAR_5->le_features[0] & VAR_1) {
   VAR_6[0] |= 0x80;
   VAR_6[5] |= 0x80;
  }
 }

 if (FUNC_5(VAR_5) ||
     FUNC_13(VAR_3, &VAR_5->quirks))
  VAR_6[4] |= 0x02;

 if (FUNC_3(VAR_5))
  VAR_6[4] |= 0x04;

 if (FUNC_2(VAR_5)) {
  VAR_6[5] |= 0x08;
  VAR_6[5] |= 0x10;
 }

 if (FUNC_10(VAR_5))
  VAR_6[5] |= 0x20;

 if (FUNC_9(VAR_5))
  VAR_6[5] |= 0x80;

 if (FUNC_4(VAR_5))
  VAR_6[5] |= 0x40;

 if (FUNC_8(VAR_5))
  VAR_6[7] |= 0x01;

 if (FUNC_7(VAR_5))
  VAR_6[6] |= 0x80;

 if (FUNC_11(VAR_5)) {
  VAR_6[6] |= 0x01;
  VAR_6[6] |= 0x02;
  VAR_6[6] |= 0x04;
  VAR_6[6] |= 0x08;
  VAR_6[6] |= 0x10;
  VAR_6[6] |= 0x20;
  VAR_6[7] |= 0x04;
  VAR_6[7] |= 0x08;
  VAR_6[7] |= 0x10;


 }

 if (FUNC_6(VAR_5))
  VAR_6[7] |= 0x20;

 FUNC_0(VAR_4, VAR_2, sizeof(VAR_6), VAR_6);
}
