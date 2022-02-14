
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mgmt_pending_cmd {int (* cmd_complete ) (struct mgmt_pending_cmd*,int ) ;} ;
struct hci_dev {int dummy; } ;
struct hci_cp_read_rssi {int handle; } ;
struct hci_conn {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*,char*,...) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 struct hci_cp_read_rssi* FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (struct mgmt_pending_cmd*) ;
 int FUNC_8 (int ) ;
 struct mgmt_pending_cmd* FUNC_9 (int ,struct hci_dev*,struct hci_conn*) ;
 int FUNC_10 (struct mgmt_pending_cmd*,int ) ;

__attribute__((used)) static void FUNC_11(struct hci_dev *VAR_4, u8 VAR_5,
           u16 VAR_6)
{
 struct hci_cp_read_rssi *VAR_7;
 struct mgmt_pending_cmd *VAR_8;
 struct hci_conn *VAR_9;
 u16 VAR_10;
 u8 VAR_11;

 FUNC_0("status 0x%02x", VAR_5);

 FUNC_4(VAR_4);
 VAR_7 = FUNC_6(VAR_4, VAR_0);
 if (!VAR_7) {
  VAR_7 = FUNC_6(VAR_4, VAR_1);
  VAR_11 = VAR_3;
 } else {
  VAR_11 = FUNC_8(VAR_5);
 }

 if (!VAR_7) {
  FUNC_2(VAR_4, "invalid sent_cmd in conn_info response");
  goto unlock;
 }

 VAR_10 = FUNC_1(VAR_7->handle);
 VAR_9 = FUNC_3(VAR_4, VAR_10);
 if (!VAR_9) {
  FUNC_2(VAR_4, "unknown handle (%d) in conn_info response",
      VAR_10);
  goto unlock;
 }

 VAR_8 = FUNC_9(VAR_2, VAR_4, VAR_9);
 if (!VAR_8)
  goto unlock;

 VAR_8->cmd_complete(VAR_8, VAR_11);
 FUNC_7(VAR_8);

unlock:
 FUNC_5(VAR_4);
}
