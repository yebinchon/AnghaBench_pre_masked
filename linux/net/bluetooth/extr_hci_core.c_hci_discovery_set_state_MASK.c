
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct hci_dev {TYPE_1__ discovery; int name; } ;


 int FUNC_0 (char*,int ,int,int) ;





 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*,int) ;

void FUNC_3(struct hci_dev *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_0->discovery.state;

 FUNC_0("%s state %u -> %u", VAR_0->name, VAR_0->discovery.state, VAR_1);

 if (VAR_2 == VAR_1)
  return;

 VAR_0->discovery.state = VAR_1;

 switch (VAR_1) {
 case 129:
  FUNC_1(VAR_0);

  if (VAR_2 != 130)
   FUNC_2(VAR_0, 0);
  break;
 case 130:
  break;
 case 132:
  FUNC_2(VAR_0, 1);
  break;
 case 131:
  break;
 case 128:
  break;
 }
}
