
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {scalar_t__ dev_type; int flow_ctl_mode; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_2 ;


 scalar_t__ VAR_3 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;

__attribute__((used)) static void FUNC_4(struct hci_dev *VAR_4)
{
 FUNC_0("%s", VAR_4->name);


 if (!FUNC_1(VAR_4, VAR_0) && VAR_4->dev_type == VAR_3)
  return;


 if (!FUNC_1(VAR_4, VAR_1) && VAR_4->dev_type == VAR_2)
  return;

 switch (VAR_4->flow_ctl_mode) {
 case 128:
  FUNC_3(VAR_4);
  break;

 case 129:
  FUNC_2(VAR_4);
  break;
 }
}
