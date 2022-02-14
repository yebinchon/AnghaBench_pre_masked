
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgmt_pending_cmd {struct mgmt_mode* param; } ;
struct mgmt_mode {int val; } ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 struct mgmt_pending_cmd* FUNC_0 (int ,struct hci_dev*) ;

bool FUNC_1(struct hci_dev *VAR_1)
{
 struct mgmt_pending_cmd *VAR_2;
 struct mgmt_mode *VAR_3;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  return 0;

 VAR_3 = VAR_2->param;
 if (!VAR_3->val)
  return 1;

 return 0;
}
