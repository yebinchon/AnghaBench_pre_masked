
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct oob_data {int rand192; int hash192; int rand256; int hash256; } ;
struct hci_ev_remote_oob_data_request {int bdaddr; } ;
struct hci_dev {int name; } ;
struct hci_cp_remote_oob_ext_data_reply {int rand; int hash; int bdaddr; int rand256; int hash256; int rand192; int hash192; } ;
struct hci_cp_remote_oob_data_reply {int rand; int hash; int bdaddr; int rand256; int hash256; int rand192; int hash192; } ;
struct hci_cp_remote_oob_data_neg_reply {int rand; int hash; int bdaddr; int rand256; int hash256; int rand192; int hash192; } ;
typedef int cp ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 scalar_t__ FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*) ;
 struct oob_data* FUNC_6 (struct hci_dev*,int *,int ) ;
 int FUNC_7 (struct hci_dev*,int ,int,struct hci_cp_remote_oob_ext_data_reply*) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static void FUNC_10(struct hci_dev *VAR_6,
         struct sk_buff *VAR_7)
{
 struct hci_ev_remote_oob_data_request *VAR_8 = (void *) VAR_7->data;
 struct oob_data *VAR_9;

 FUNC_0("%s", VAR_6->name);

 FUNC_3(VAR_6);

 if (!FUNC_4(VAR_6, VAR_1))
  goto unlock;

 VAR_9 = FUNC_6(VAR_6, &VAR_8->bdaddr, VAR_0);
 if (!VAR_9) {
  struct hci_cp_remote_oob_data_neg_reply VAR_10;

  FUNC_1(&VAR_10.bdaddr, &VAR_8->bdaddr);
  FUNC_7(VAR_6, VAR_2,
        sizeof(VAR_10), &VAR_10);
  goto unlock;
 }

 if (FUNC_2(VAR_6)) {
  struct hci_cp_remote_oob_ext_data_reply VAR_11;

  FUNC_1(&VAR_11.bdaddr, &VAR_8->bdaddr);
  if (FUNC_4(VAR_6, VAR_5)) {
   FUNC_9(VAR_11.hash192, 0, sizeof(VAR_11.hash192));
   FUNC_9(VAR_11.rand192, 0, sizeof(VAR_11.rand192));
  } else {
   FUNC_8(VAR_11.hash192, VAR_9->hash192, sizeof(VAR_11.hash192));
   FUNC_8(VAR_11.rand192, VAR_9->rand192, sizeof(VAR_11.rand192));
  }
  FUNC_8(VAR_11.hash256, VAR_9->hash256, sizeof(VAR_11.hash256));
  FUNC_8(VAR_11.rand256, VAR_9->rand256, sizeof(VAR_11.rand256));

  FUNC_7(VAR_6, VAR_4,
        sizeof(VAR_11), &VAR_11);
 } else {
  struct hci_cp_remote_oob_data_reply VAR_12;

  FUNC_1(&VAR_12.bdaddr, &VAR_8->bdaddr);
  FUNC_8(VAR_12.hash, VAR_9->hash192, sizeof(VAR_12.hash));
  FUNC_8(VAR_12.rand, VAR_9->rand192, sizeof(VAR_12.rand));

  FUNC_7(VAR_6, VAR_3,
        sizeof(VAR_12), &VAR_12);
 }

unlock:
 FUNC_5(VAR_6);
}
