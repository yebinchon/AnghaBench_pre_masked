
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mgmt_pending_cmd {int (* cmd_complete ) (struct mgmt_pending_cmd*,int ) ;} ;
struct hci_dev {int dummy; } ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct mgmt_pending_cmd*) ;
 int FUNC_1 (int ) ;
 struct mgmt_pending_cmd* FUNC_2 (int ,struct hci_dev*) ;
 int FUNC_3 (struct mgmt_pending_cmd*,int ) ;

__attribute__((used)) static int FUNC_4(struct hci_dev *VAR_1, bdaddr_t *VAR_2,
          u8 VAR_3, u8 VAR_4, u8 VAR_5,
          u8 VAR_6)
{
 struct mgmt_pending_cmd *VAR_7;

 VAR_7 = FUNC_2(VAR_6, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->cmd_complete(VAR_7, FUNC_1(VAR_5));
 FUNC_0(VAR_7);

 return 0;
}
