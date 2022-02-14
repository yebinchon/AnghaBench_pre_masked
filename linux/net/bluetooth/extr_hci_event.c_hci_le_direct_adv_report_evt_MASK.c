
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int * data; } ;
struct hci_ev_le_direct_adv_info {int rssi; int direct_addr_type; int direct_addr; int bdaddr_type; int bdaddr; int evt_type; } ;
struct hci_dev {int dummy; } ;


 int FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*,int ,int *,int ,int *,int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct hci_dev *VAR_0,
      struct sk_buff *VAR_1)
{
 u8 VAR_2 = VAR_1->data[0];
 void *VAR_3 = &VAR_1->data[1];

 FUNC_0(VAR_0);

 while (VAR_2--) {
  struct hci_ev_le_direct_adv_info *VAR_4 = VAR_3;

  FUNC_2(VAR_0, VAR_4->evt_type, &VAR_4->bdaddr,
       VAR_4->bdaddr_type, &VAR_4->direct_addr,
       VAR_4->direct_addr_type, VAR_4->rssi, ((void*)0), 0);

  VAR_3 += sizeof(*VAR_4);
 }

 FUNC_1(VAR_0);
}
