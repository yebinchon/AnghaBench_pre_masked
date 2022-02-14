
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct mgmt_pending_cmd {int cmd_complete; } ;
struct TYPE_2__ {int bdaddr; } ;
struct mgmt_cp_pin_code_neg_reply {TYPE_1__ addr; } ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hci_dev*,int ,int,int *) ;
 struct mgmt_pending_cmd* FUNC_1 (struct sock*,int ,struct hci_dev*,struct mgmt_cp_pin_code_neg_reply*,int) ;
 int FUNC_2 (struct mgmt_pending_cmd*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_4, struct hci_dev *VAR_5,
       struct mgmt_cp_pin_code_neg_reply *VAR_6)
{
 struct mgmt_pending_cmd *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_4, VAR_2, VAR_5, VAR_6,
          sizeof(*VAR_6));
 if (!VAR_7)
  return -VAR_0;

 VAR_7->cmd_complete = VAR_3;

 VAR_8 = FUNC_0(VAR_5, VAR_1,
      sizeof(VAR_6->addr.bdaddr), &VAR_6->addr.bdaddr);
 if (VAR_8 < 0)
  FUNC_2(VAR_7);

 return VAR_8;
}
