
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {int* le_features; } ;
typedef int events ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hci_request*,int ,int,int*) ;
 scalar_t__ FUNC_1 (struct hci_dev*) ;
 scalar_t__ FUNC_2 (struct hci_dev*) ;
 scalar_t__ FUNC_3 (struct hci_dev*) ;

__attribute__((used)) static void FUNC_4(struct hci_request *VAR_2)
{
 struct hci_dev *VAR_3 = VAR_2->hdev;
 u8 VAR_4[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
 bool VAR_5 = 0;




 if (FUNC_1(VAR_3)) {
  VAR_4[1] |= 0x40;
  VAR_4[1] |= 0x80;
  VAR_4[2] |= 0x10;
  VAR_4[2] |= 0x20;
  VAR_5 = 1;
 }




 if (FUNC_2(VAR_3)) {
  VAR_4[2] |= 0x01;
  VAR_4[2] |= 0x02;
  VAR_4[2] |= 0x04;
  VAR_4[2] |= 0x08;
  VAR_5 = 1;
 }


 if (FUNC_3(VAR_3) || VAR_3->le_features[0] & VAR_0) {
  VAR_4[2] |= 0x80;
  VAR_5 = 1;
 }







 if (VAR_5)
  FUNC_0(VAR_2, VAR_1,
       sizeof(VAR_4), VAR_4);
}
