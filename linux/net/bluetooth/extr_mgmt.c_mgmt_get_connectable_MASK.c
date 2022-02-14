
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgmt_pending_cmd {struct mgmt_mode* param; } ;
struct mgmt_mode {int val; } ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hci_dev*,int ) ;
 struct mgmt_pending_cmd* FUNC_1 (int ,struct hci_dev*) ;

bool FUNC_2(struct hci_dev *VAR_2)
{
 struct mgmt_pending_cmd *VAR_3;




 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3) {
  struct mgmt_mode *VAR_4 = VAR_3->param;

  return VAR_4->val;
 }

 return FUNC_0(VAR_2, VAR_0);
}
