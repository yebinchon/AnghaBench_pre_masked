
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hci_dev {int name; } ;
struct hci_cp_create_phy_link {int phy_handle; } ;
struct hci_conn {int dummy; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_conn*) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 struct hci_cp_create_phy_link* FUNC_6 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_7(struct hci_dev *VAR_1, u8 VAR_2,
        u16 VAR_3)
{
 struct hci_cp_create_phy_link *VAR_4;

 FUNC_0("%s status 0x%2.2x", VAR_1->name, VAR_2);

 VAR_4 = FUNC_6(VAR_1, VAR_0);
 if (!VAR_4)
  return;

 FUNC_4(VAR_1);

 if (VAR_2) {
  struct hci_conn *VAR_5;

  VAR_5 = FUNC_3(VAR_1, VAR_4->phy_handle);
  if (VAR_5)
   FUNC_2(VAR_5);
 } else {
  FUNC_1(VAR_1, VAR_4->phy_handle);
 }

 FUNC_5(VAR_1);
}
