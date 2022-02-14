
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int name; } ;
struct hci_cp_le_start_enc {int handle; } ;
struct hci_conn {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_conn*) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_conn*,int ) ;
 struct hci_cp_le_start_enc* FUNC_7 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_8(struct hci_dev *VAR_3, u8 VAR_4)
{
 struct hci_cp_le_start_enc *VAR_5;
 struct hci_conn *VAR_6;

 FUNC_0("%s status 0x%2.2x", VAR_3->name, VAR_4);

 if (!VAR_4)
  return;

 FUNC_4(VAR_3);

 VAR_5 = FUNC_7(VAR_3, VAR_2);
 if (!VAR_5)
  goto unlock;

 VAR_6 = FUNC_3(VAR_3, FUNC_1(VAR_5->handle));
 if (!VAR_6)
  goto unlock;

 if (VAR_6->state != VAR_0)
  goto unlock;

 FUNC_6(VAR_6, VAR_1);
 FUNC_2(VAR_6);

unlock:
 FUNC_5(VAR_3);
}
