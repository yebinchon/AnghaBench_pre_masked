
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int * data; } ;
struct hci_ev_le_advertising_info {size_t length; int * data; int bdaddr_type; int bdaddr; int evt_type; } ;
struct hci_dev {int dummy; } ;
typedef int s8 ;


 size_t VAR_0 ;
 int FUNC_0 (struct hci_dev*,char*) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*,int ,int *,int ,int *,int ,int ,int *,size_t) ;

__attribute__((used)) static void FUNC_4(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 u8 VAR_3 = VAR_2->data[0];
 void *VAR_4 = &VAR_2->data[1];

 FUNC_1(VAR_1);

 while (VAR_3--) {
  struct hci_ev_le_advertising_info *VAR_5 = VAR_4;
  s8 VAR_6;

  if (VAR_5->length <= VAR_0) {
   VAR_6 = VAR_5->data[VAR_5->length];
   FUNC_3(VAR_1, VAR_5->evt_type, &VAR_5->bdaddr,
        VAR_5->bdaddr_type, ((void*)0), 0, VAR_6,
        VAR_5->data, VAR_5->length);
  } else {
   FUNC_0(VAR_1, "Dropping invalid advertising data");
  }

  VAR_4 += sizeof(*VAR_5) + VAR_5->length + 1;
 }

 FUNC_2(VAR_1);
}
