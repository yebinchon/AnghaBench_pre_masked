
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgmt_ev_ext_index {int type; int bus; } ;
struct hci_dev {int dev_type; int bus; int quirks; } ;
typedef int ev ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct hci_dev*,int ) ;
 int FUNC_1 (int ,struct hci_dev*,struct mgmt_ev_ext_index*,int,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

void FUNC_3(struct hci_dev *VAR_8)
{
 struct mgmt_ev_ext_index VAR_9;

 if (FUNC_2(VAR_3, &VAR_8->quirks))
  return;

 switch (VAR_8->dev_type) {
 case 128:
  if (FUNC_0(VAR_8, VAR_4)) {
   FUNC_1(VAR_7, VAR_8,
      ((void*)0), 0, VAR_2);
   VAR_9.type = 0x01;
  } else {
   FUNC_1(VAR_6, VAR_8, ((void*)0), 0,
      VAR_1);
   VAR_9.type = 0x00;
  }
  break;
 case 129:
  VAR_9.type = 0x02;
  break;
 default:
  return;
 }

 VAR_9.bus = VAR_8->bus;

 FUNC_1(VAR_5, VAR_8, &VAR_9, sizeof(VAR_9),
    VAR_0);
}
