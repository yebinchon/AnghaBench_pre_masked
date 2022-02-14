
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {int dummy; } ;
typedef int bdaddr_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_2 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_request*,int ,int,int *) ;

__attribute__((used)) static void FUNC_5(struct hci_request *VAR_3, bdaddr_t *VAR_4)
{
 struct hci_dev *VAR_5 = VAR_3->hdev;
 if (FUNC_2(VAR_5, VAR_0) ||
     FUNC_3(VAR_5)) {
  FUNC_0("Deferring random address update");
  FUNC_1(VAR_5, VAR_2);
  return;
 }

 FUNC_4(VAR_3, VAR_1, 6, VAR_4);
}
