
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_request {int dummy; } ;
struct hci_dev {int cur_adv_instance; int adv_instances; } ;


 int VAR_0 ;
 int FUNC_0 (struct hci_request*) ;
 int FUNC_1 (struct hci_request*,int ,int) ;
 int FUNC_2 (struct hci_request*,int) ;
 int FUNC_3 (struct hci_request*,int) ;
 int FUNC_4 (struct hci_request*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (struct hci_request*,struct hci_dev*) ;
 int FUNC_8 (struct hci_request*,int ) ;
 scalar_t__ FUNC_9 (int *) ;

void FUNC_10(struct hci_dev *VAR_2)
{
 struct hci_request VAR_3;

 if (!FUNC_6(VAR_2, VAR_0) &&
     FUNC_9(&VAR_2->adv_instances))
  return;

 FUNC_7(&VAR_3, VAR_2);

 if (VAR_2->cur_adv_instance) {
  FUNC_1(&VAR_3, VAR_2->cur_adv_instance,
      1);
 } else {
  if (FUNC_5(VAR_2)) {
   FUNC_2(&VAR_3, 0x00);
  } else {
   FUNC_3(&VAR_3, 0x00);
   FUNC_4(&VAR_3, 0x00);
   FUNC_0(&VAR_3);
  }
 }

 FUNC_8(&VAR_3, VAR_1);
}
