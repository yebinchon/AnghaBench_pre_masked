
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mgmt_pending_cmd {struct mgmt_mode* param; } ;
struct mgmt_mode {int val; } ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct hci_dev*,int ) ;
 struct mgmt_pending_cmd* FUNC_1 (int ,struct hci_dev*) ;

u8 FUNC_2(struct hci_dev *VAR_5)
{
 struct mgmt_pending_cmd *VAR_6;




 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (VAR_6) {
  struct mgmt_mode *VAR_7 = VAR_6->param;
  if (VAR_7->val == 0x01)
   return VAR_2;
  else if (VAR_7->val == 0x02)
   return VAR_3;
 } else {
  if (FUNC_0(VAR_5, VAR_1))
   return VAR_3;
  else if (FUNC_0(VAR_5, VAR_0))
   return VAR_2;
 }

 return 0;
}
