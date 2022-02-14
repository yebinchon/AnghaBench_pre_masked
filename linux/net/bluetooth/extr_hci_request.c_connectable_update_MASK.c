
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {int cur_adv_instance; int adv_instances; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hci_request*) ;
 int FUNC_1 (struct hci_request*,int ) ;
 int FUNC_2 (struct hci_request*,int ) ;
 int FUNC_3 (struct hci_request*) ;
 int FUNC_4 (struct hci_request*) ;
 scalar_t__ FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 scalar_t__ FUNC_7 (struct hci_dev*,int ) ;
 int FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct hci_request *VAR_2, unsigned long VAR_3)
{
 struct hci_dev *VAR_4 = VAR_2->hdev;

 FUNC_6(VAR_4);

 FUNC_3(VAR_2);





 if (!FUNC_7(VAR_4, VAR_1))
  FUNC_2(VAR_2, VAR_4->cur_adv_instance);


 if (FUNC_7(VAR_4, VAR_0) ||
     !FUNC_9(&VAR_4->adv_instances)) {
  if (FUNC_5(VAR_4))
   FUNC_1(VAR_2, VAR_4->cur_adv_instance);
  else
   FUNC_0(VAR_2);
 }

 FUNC_4(VAR_2);

 FUNC_8(VAR_4);

 return 0;
}
