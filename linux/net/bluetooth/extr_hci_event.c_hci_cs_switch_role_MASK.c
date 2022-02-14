
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int name; } ;
struct hci_cp_switch_role {int bdaddr; } ;
struct hci_conn {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int ,int *) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 struct hci_cp_switch_role* FUNC_5 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_6(struct hci_dev *VAR_3, u8 VAR_4)
{
 struct hci_cp_switch_role *VAR_5;
 struct hci_conn *VAR_6;

 FUNC_0("%s status 0x%2.2x", VAR_3->name, VAR_4);

 if (!VAR_4)
  return;

 VAR_5 = FUNC_5(VAR_3, VAR_2);
 if (!VAR_5)
  return;

 FUNC_3(VAR_3);

 VAR_6 = FUNC_2(VAR_3, VAR_0, &VAR_5->bdaddr);
 if (VAR_6)
  FUNC_1(VAR_1, &VAR_6->flags);

 FUNC_4(VAR_3);
}
