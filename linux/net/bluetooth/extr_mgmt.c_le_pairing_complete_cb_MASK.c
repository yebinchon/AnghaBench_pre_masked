
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mgmt_pending_cmd {int (* cmd_complete ) (struct mgmt_pending_cmd*,int ) ;} ;
struct hci_conn {int dummy; } ;


 int FUNC_0 (char*,...) ;
 struct mgmt_pending_cmd* FUNC_1 (struct hci_conn*) ;
 int FUNC_2 (struct mgmt_pending_cmd*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mgmt_pending_cmd*,int ) ;

__attribute__((used)) static void FUNC_5(struct hci_conn *VAR_0, u8 VAR_1)
{
 struct mgmt_pending_cmd *VAR_2;

 FUNC_0("status %u", VAR_1);

 if (!VAR_1)
  return;

 VAR_2 = FUNC_1(VAR_0);
 if (!VAR_2) {
  FUNC_0("Unable to find a pending command");
  return;
 }

 VAR_2->cmd_complete(VAR_2, FUNC_3(VAR_1));
 FUNC_2(VAR_2);
}
