
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int id; int le_resolv_list; int le_white_list; int whitelist; int blacklist; int req_workqueue; int workqueue; int fw_info; int hw_info; int debugfs; int dev; scalar_t__ rfkill; int mgmt_pending; int flags; int power_on; int list; int bus; int name; } ;


 int FUNC_0 (char*,struct hci_dev*,int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (struct hci_dev*) ;
 int VAR_5 ;
 int FUNC_10 (struct hci_dev*) ;
 int FUNC_11 (struct hci_dev*) ;
 int FUNC_12 (struct hci_dev*,int ) ;
 int FUNC_13 (struct hci_dev*,int ) ;
 int FUNC_14 (struct hci_dev*) ;
 int FUNC_15 (struct hci_dev*) ;
 int VAR_6 ;
 int FUNC_16 (struct hci_dev*) ;
 int FUNC_17 (struct hci_dev*) ;
 int FUNC_18 (struct hci_dev*) ;
 int FUNC_19 (struct hci_dev*) ;
 int FUNC_20 (struct hci_dev*,int ) ;
 int FUNC_21 (struct hci_dev*) ;
 int FUNC_22 (int *,int) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (struct hci_dev*) ;
 int FUNC_27 (scalar_t__) ;
 int FUNC_28 (scalar_t__) ;
 int FUNC_29 (int ,int *) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *) ;

void FUNC_32(struct hci_dev *VAR_7)
{
 int VAR_8;

 FUNC_0("%p name %s bus %d", VAR_7, VAR_7->name, VAR_7->bus);

 FUNC_12(VAR_7, VAR_4);

 VAR_8 = VAR_7->id;

 FUNC_30(&VAR_5);
 FUNC_24(&VAR_7->list);
 FUNC_31(&VAR_5);

 FUNC_2(&VAR_7->power_on);

 FUNC_9(VAR_7);

 if (!FUNC_29(VAR_2, &VAR_7->flags) &&
     !FUNC_13(VAR_7, VAR_3) &&
     !FUNC_13(VAR_7, VAR_0)) {
  FUNC_10(VAR_7);
  FUNC_26(VAR_7);
  FUNC_14(VAR_7);
 }



 FUNC_1(!FUNC_25(&VAR_7->mgmt_pending));

 FUNC_20(VAR_7, VAR_1);

 if (VAR_7->rfkill) {
  FUNC_28(VAR_7->rfkill);
  FUNC_27(VAR_7->rfkill);
 }

 FUNC_5(&VAR_7->dev);

 FUNC_3(VAR_7->debugfs);
 FUNC_23(VAR_7->hw_info);
 FUNC_23(VAR_7->fw_info);

 FUNC_4(VAR_7->workqueue);
 FUNC_4(VAR_7->req_workqueue);

 FUNC_10(VAR_7);
 FUNC_7(&VAR_7->blacklist);
 FUNC_7(&VAR_7->whitelist);
 FUNC_21(VAR_7);
 FUNC_16(VAR_7);
 FUNC_19(VAR_7);
 FUNC_18(VAR_7);
 FUNC_17(VAR_7);
 FUNC_6(VAR_7);
 FUNC_7(&VAR_7->le_white_list);
 FUNC_7(&VAR_7->le_resolv_list);
 FUNC_8(VAR_7);
 FUNC_15(VAR_7);
 FUNC_14(VAR_7);

 FUNC_11(VAR_7);

 FUNC_22(&VAR_6, VAR_8);
}
