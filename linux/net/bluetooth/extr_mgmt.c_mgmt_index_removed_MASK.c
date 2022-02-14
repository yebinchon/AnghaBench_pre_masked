
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
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
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct hci_dev*,int ) ;
 int FUNC_1 (int ,struct hci_dev*,struct mgmt_ev_ext_index*,int,int ) ;
 int FUNC_2 (int ,struct hci_dev*,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

void FUNC_4(struct hci_dev *VAR_10)
{
 struct mgmt_ev_ext_index VAR_11;
 u8 VAR_12 = VAR_8;

 if (FUNC_3(VAR_3, &VAR_10->quirks))
  return;

 switch (VAR_10->dev_type) {
 case 128:
  FUNC_2(0, VAR_10, VAR_9, &VAR_12);

  if (FUNC_0(VAR_10, VAR_4)) {
   FUNC_1(VAR_7, VAR_10,
      ((void*)0), 0, VAR_2);
   VAR_11.type = 0x01;
  } else {
   FUNC_1(VAR_6, VAR_10, ((void*)0), 0,
      VAR_1);
   VAR_11.type = 0x00;
  }
  break;
 case 129:
  VAR_11.type = 0x02;
  break;
 default:
  return;
 }

 VAR_11.bus = VAR_10->bus;

 FUNC_1(VAR_5, VAR_10, &VAR_11, sizeof(VAR_11),
    VAR_0);
}
