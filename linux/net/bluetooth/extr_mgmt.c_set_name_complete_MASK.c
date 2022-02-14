
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct mgmt_pending_cmd {int sk; struct mgmt_cp_set_local_name* param; } ;
struct mgmt_cp_set_local_name {int dummy; } ;
struct hci_dev {int id; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*) ;
 scalar_t__ FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (int ,int ,int ,int ,struct mgmt_cp_set_local_name*,int) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (struct mgmt_pending_cmd*) ;
 int FUNC_8 (scalar_t__) ;
 struct mgmt_pending_cmd* FUNC_9 (int ,struct hci_dev*) ;

__attribute__((used)) static void FUNC_10(struct hci_dev *VAR_3, u8 VAR_4, u16 VAR_5)
{
 struct mgmt_cp_set_local_name *VAR_6;
 struct mgmt_pending_cmd *VAR_7;

 FUNC_0("status 0x%02x", VAR_4);

 FUNC_2(VAR_3);

 VAR_7 = FUNC_9(VAR_2, VAR_3);
 if (!VAR_7)
  goto unlock;

 VAR_6 = VAR_7->param;

 if (VAR_4) {
  FUNC_6(VAR_7->sk, VAR_3->id, VAR_2,
           FUNC_8(VAR_4));
 } else {
  FUNC_5(VAR_7->sk, VAR_3->id, VAR_2, 0,
      VAR_6, sizeof(*VAR_6));

  if (FUNC_3(VAR_3, VAR_0))
   FUNC_1(VAR_3, VAR_1);
 }

 FUNC_7(VAR_7);

unlock:
 FUNC_4(VAR_3);
}
