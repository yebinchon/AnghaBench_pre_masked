
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__* data; } ;
struct hci_ev_le_ext_adv_report {scalar_t__ length; int data; int rssi; int bdaddr_type; int bdaddr; int evt_type; } ;
struct hci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*,scalar_t__,int *,int ,int *,int ,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 u8 VAR_3 = VAR_2->data[0];
 void *VAR_4 = &VAR_2->data[1];

 FUNC_2(VAR_1);

 while (VAR_3--) {
  struct hci_ev_le_ext_adv_report *VAR_5 = VAR_4;
  u8 VAR_6;
  u16 VAR_7;

  VAR_7 = FUNC_0(VAR_5->evt_type);
  VAR_6 = FUNC_1(VAR_7);
  if (VAR_6 != VAR_0) {
   FUNC_4(VAR_1, VAR_6, &VAR_5->bdaddr,
        VAR_5->bdaddr_type, ((void*)0), 0, VAR_5->rssi,
        VAR_5->data, VAR_5->length);
  }

  VAR_4 += sizeof(*VAR_5) + VAR_5->length;
 }

 FUNC_3(VAR_1);
}
