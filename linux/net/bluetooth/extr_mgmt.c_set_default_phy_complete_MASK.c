
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct mgmt_pending_cmd {int sk; } ;
struct hci_dev {int id; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (int ,int ,int ,int ,int *,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct mgmt_pending_cmd*) ;
 int FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (scalar_t__) ;
 struct mgmt_pending_cmd* FUNC_8 (int ,struct hci_dev*) ;

__attribute__((used)) static void FUNC_9(struct hci_dev *VAR_1, u8 VAR_2,
         u16 VAR_3, struct sk_buff *VAR_4)
{
 struct mgmt_pending_cmd *VAR_5;

 FUNC_0("status 0x%02x", VAR_2);

 FUNC_1(VAR_1);

 VAR_5 = FUNC_8(VAR_0, VAR_1);
 if (!VAR_5)
  goto unlock;

 if (VAR_2) {
  FUNC_4(VAR_5->sk, VAR_1->id,
    VAR_0,
    FUNC_7(VAR_2));
 } else {
  FUNC_3(VAR_5->sk, VAR_1->id,
      VAR_0, 0,
      ((void*)0), 0);

  FUNC_6(VAR_1, VAR_5->sk);
 }

 FUNC_5(VAR_5);

unlock:
 FUNC_2(VAR_1);
}
