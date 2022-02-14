
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mgmt_pending_cmd {int (* cmd_complete ) (struct mgmt_pending_cmd*,int ) ;} ;
struct hci_dev {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct mgmt_pending_cmd*) ;
 int FUNC_4 (int ) ;
 struct mgmt_pending_cmd* FUNC_5 (int ,struct hci_dev*) ;
 int FUNC_6 (struct mgmt_pending_cmd*,int ) ;

void FUNC_7(struct hci_dev *VAR_3, u8 VAR_4)
{
 struct mgmt_pending_cmd *VAR_5;

 FUNC_0("status %d", VAR_4);

 FUNC_1(VAR_3);

 VAR_5 = FUNC_5(VAR_0, VAR_3);
 if (!VAR_5)
  VAR_5 = FUNC_5(VAR_2, VAR_3);

 if (!VAR_5)
  VAR_5 = FUNC_5(VAR_1, VAR_3);

 if (VAR_5) {
  VAR_5->cmd_complete(VAR_5, FUNC_4(VAR_4));
  FUNC_3(VAR_5);
 }

 FUNC_2(VAR_3);
}
