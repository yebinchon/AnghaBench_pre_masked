
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {void* adv_data_len; int adv_data; } ;
struct hci_cp_le_set_ext_adv_data {void* length; int data; int frag_pref; int operation; scalar_t__ handle; } ;
struct hci_cp_le_set_adv_data {void* length; int data; int frag_pref; int operation; scalar_t__ handle; } ;
typedef int cp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct hci_dev*,void*,int ) ;
 scalar_t__ FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_request*,int ,int,struct hci_cp_le_set_ext_adv_data*) ;
 scalar_t__ FUNC_4 (int ,int ,void*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct hci_cp_le_set_ext_adv_data*,int ,int) ;

void FUNC_7(struct hci_request *VAR_5, u8 VAR_6)
{
 struct hci_dev *VAR_7 = VAR_5->hdev;
 u8 VAR_8;

 if (!FUNC_2(VAR_7, VAR_0))
  return;

 if (FUNC_1(VAR_7)) {
  struct hci_cp_le_set_ext_adv_data VAR_9;

  FUNC_6(&VAR_9, 0, sizeof(VAR_9));

  VAR_8 = FUNC_0(VAR_7, VAR_6, VAR_9.data);


  if (VAR_7->adv_data_len == VAR_8 &&
      FUNC_4(VAR_9.data, VAR_7->adv_data, VAR_8) == 0)
   return;

  FUNC_5(VAR_7->adv_data, VAR_9.data, sizeof(VAR_9.data));
  VAR_7->adv_data_len = VAR_8;

  VAR_9.length = VAR_8;
  VAR_9.handle = 0;
  VAR_9.operation = VAR_4;
  VAR_9.frag_pref = VAR_3;

  FUNC_3(VAR_5, VAR_2, sizeof(VAR_9), &VAR_9);
 } else {
  struct hci_cp_le_set_adv_data VAR_10;

  FUNC_6(&VAR_10, 0, sizeof(VAR_10));

  VAR_8 = FUNC_0(VAR_7, VAR_6, VAR_10.data);


  if (VAR_7->adv_data_len == VAR_8 &&
      FUNC_4(VAR_10.data, VAR_7->adv_data, VAR_8) == 0)
   return;

  FUNC_5(VAR_7->adv_data, VAR_10.data, sizeof(VAR_10.data));
  VAR_7->adv_data_len = VAR_8;

  VAR_10.length = VAR_8;

  FUNC_3(VAR_5, VAR_1, sizeof(VAR_10), &VAR_10);
 }
}
