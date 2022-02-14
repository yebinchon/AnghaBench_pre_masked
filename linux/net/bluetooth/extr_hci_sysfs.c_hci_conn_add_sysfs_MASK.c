
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int name; } ;
struct hci_conn {int dev; int handle; struct hci_dev* hdev; } ;


 int FUNC_0 (char*,struct hci_conn*) ;
 int FUNC_1 (struct hci_dev*,char*) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct hci_dev*) ;

void FUNC_5(struct hci_conn *VAR_0)
{
 struct hci_dev *VAR_1 = VAR_0->hdev;

 FUNC_0("conn %p", VAR_0);

 FUNC_2(&VAR_0->dev, "%s:%d", VAR_1->name, VAR_0->handle);

 if (FUNC_3(&VAR_0->dev) < 0) {
  FUNC_1(VAR_1, "failed to register connection device");
  return;
 }

 FUNC_4(VAR_1);
}
