
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hci_request*) ;
 int FUNC_1 (struct hci_request*,int ) ;
 int FUNC_2 (struct hci_request*,int ) ;
 int FUNC_3 (struct hci_request*,int ) ;
 scalar_t__ FUNC_4 (struct hci_dev*,int ) ;

int FUNC_5(struct hci_request *VAR_1, u8 VAR_2)
{
 struct hci_dev *VAR_3 = VAR_1->hdev;
 int VAR_4;

 if (FUNC_4(VAR_3, VAR_0))
  FUNC_0(VAR_1);

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_3(VAR_1, VAR_2);
 FUNC_1(VAR_1, VAR_2);

 return 0;
}
