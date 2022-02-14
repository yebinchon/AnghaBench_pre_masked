
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct discovery_state {int state; } ;
struct hci_dev {struct discovery_state discovery; } ;





bool FUNC_0(struct hci_dev *VAR_0)
{
 struct discovery_state *VAR_1 = &VAR_0->discovery;

 switch (VAR_1->state) {
 case 129:
 case 128:
  return 1;

 default:
  return 0;
 }
}
