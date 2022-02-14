
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mgmt_pending_cmd {int (* cmd_complete ) (struct mgmt_pending_cmd*,int ) ;int * sk; } ;
struct TYPE_2__ {int type; int bdaddr; } ;
struct mgmt_ev_auth_failed {int status; TYPE_1__ addr; } ;
struct hci_conn {int hdev; int dst_type; int type; int dst; } ;
typedef int ev ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct mgmt_pending_cmd* FUNC_1 (struct hci_conn*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,struct mgmt_ev_auth_failed*,int,int *) ;
 int FUNC_4 (struct mgmt_pending_cmd*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mgmt_pending_cmd*,int ) ;

void FUNC_7(struct hci_conn *VAR_1, u8 VAR_2)
{
 struct mgmt_ev_auth_failed VAR_3;
 struct mgmt_pending_cmd *VAR_4;
 u8 VAR_5 = FUNC_5(VAR_2);

 FUNC_0(&VAR_3.addr.bdaddr, &VAR_1->dst);
 VAR_3.addr.type = FUNC_2(VAR_1->type, VAR_1->dst_type);
 VAR_3.status = VAR_5;

 VAR_4 = FUNC_1(VAR_1);

 FUNC_3(VAR_0, VAR_1->hdev, &VAR_3, sizeof(VAR_3),
      VAR_4 ? VAR_4->sk : ((void*)0));

 if (VAR_4) {
  VAR_4->cmd_complete(VAR_4, VAR_5);
  FUNC_4(VAR_4);
 }
}
