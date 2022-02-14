
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hci_request*) ;
 int FUNC_1 (struct hci_request*,int) ;
 int FUNC_2 (struct hci_request*,int) ;
 int FUNC_3 (struct hci_request*) ;
 int FUNC_4 (struct hci_request*) ;
 scalar_t__ FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 scalar_t__ FUNC_7 (struct hci_dev*,int ) ;
 int FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (struct hci_request*) ;

__attribute__((used)) static int FUNC_10(struct hci_request *VAR_3, unsigned long VAR_4)
{
 struct hci_dev *VAR_5 = VAR_3->hdev;

 FUNC_6(VAR_5);

 if (FUNC_7(VAR_5, VAR_1)) {
  FUNC_9(VAR_3);
  FUNC_4(VAR_3);
  FUNC_3(VAR_3);
 }




 if (FUNC_7(VAR_5, VAR_0)) {
  FUNC_2(VAR_3, 0x00);




  if (FUNC_7(VAR_5, VAR_2)) {
   if (FUNC_5(VAR_5))
    FUNC_1(VAR_3, 0x00);
   else
    FUNC_0(VAR_3);
  }
 }

 FUNC_8(VAR_5);

 return 0;
}
