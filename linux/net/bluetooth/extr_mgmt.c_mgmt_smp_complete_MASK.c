
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mgmt_pending_cmd {int (* cmd_complete ) (struct mgmt_pending_cmd*,int ) ;} ;
struct hci_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mgmt_pending_cmd* FUNC_0 (struct hci_conn*) ;
 int FUNC_1 (struct mgmt_pending_cmd*) ;
 int FUNC_2 (struct mgmt_pending_cmd*,int ) ;

void FUNC_3(struct hci_conn *VAR_2, bool VAR_3)
{
 u8 VAR_4 = VAR_3 ? VAR_1 : VAR_0;
 struct mgmt_pending_cmd *VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5) {
  VAR_5->cmd_complete(VAR_5, VAR_4);
  FUNC_1(VAR_5);
 }
}
