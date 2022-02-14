
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mgmt_pending_cmd {int sk; } ;
struct hci_dev {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct mgmt_pending_cmd*) ;
 struct mgmt_pending_cmd* FUNC_2 (int ,struct hci_dev*) ;

void FUNC_3(struct hci_dev *VAR_4, int VAR_5)
{
 struct mgmt_pending_cmd *VAR_6;
 u8 VAR_7;

 VAR_6 = FUNC_2(VAR_1, VAR_4);
 if (!VAR_6)
  return;

 if (VAR_5 == -VAR_0)
  VAR_7 = VAR_3;
 else
  VAR_7 = VAR_2;

 FUNC_0(VAR_6->sk, VAR_4->id, VAR_1, VAR_7);

 FUNC_1(VAR_6);
}
