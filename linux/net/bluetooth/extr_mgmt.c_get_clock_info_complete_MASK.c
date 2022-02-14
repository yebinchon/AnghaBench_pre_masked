
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mgmt_pending_cmd {int (* cmd_complete ) (struct mgmt_pending_cmd*,int ) ;} ;
struct hci_dev {int name; } ;
struct hci_cp_read_clock {int handle; scalar_t__ which; } ;
struct hci_conn {int dummy; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 struct hci_cp_read_clock* FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (struct mgmt_pending_cmd*) ;
 int FUNC_7 (int ) ;
 struct mgmt_pending_cmd* FUNC_8 (int ,struct hci_dev*,struct hci_conn*) ;
 int FUNC_9 (struct mgmt_pending_cmd*,int ) ;

__attribute__((used)) static void FUNC_10(struct hci_dev *VAR_2, u8 VAR_3, u16 VAR_4)
{
 struct hci_cp_read_clock *VAR_5;
 struct mgmt_pending_cmd *VAR_6;
 struct hci_conn *VAR_7;

 FUNC_0("%s status %u", VAR_2->name, VAR_3);

 FUNC_3(VAR_2);

 VAR_5 = FUNC_5(VAR_2, VAR_0);
 if (!VAR_5)
  goto unlock;

 if (VAR_5->which) {
  u16 VAR_8 = FUNC_1(VAR_5->handle);
  VAR_7 = FUNC_2(VAR_2, VAR_8);
 } else {
  VAR_7 = ((void*)0);
 }

 VAR_6 = FUNC_8(VAR_1, VAR_2, VAR_7);
 if (!VAR_6)
  goto unlock;

 VAR_6->cmd_complete(VAR_6, FUNC_7(VAR_3));
 FUNC_6(VAR_6);

unlock:
 FUNC_4(VAR_2);
}
