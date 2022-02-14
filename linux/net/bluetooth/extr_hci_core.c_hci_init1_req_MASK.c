
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {int dev_type; int quirks; int name; } ;


 int FUNC_0 (char*,int ,unsigned long) ;


 int VAR_0 ;
 int FUNC_1 (struct hci_request*) ;
 int FUNC_2 (struct hci_request*) ;
 int FUNC_3 (struct hci_dev*,char*,int) ;
 int FUNC_4 (struct hci_request*,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct hci_request *VAR_1, unsigned long VAR_2)
{
 struct hci_dev *VAR_3 = VAR_1->hdev;

 FUNC_0("%s %ld", VAR_3->name, VAR_2);


 if (!FUNC_5(VAR_0, &VAR_3->quirks))
  FUNC_4(VAR_1, 0);

 switch (VAR_3->dev_type) {
 case 128:
  FUNC_2(VAR_1);
  break;
 case 129:
  FUNC_1(VAR_1);
  break;
 default:
  FUNC_3(VAR_3, "Unknown device type %d", VAR_3->dev_type);
  break;
 }

 return 0;
}
