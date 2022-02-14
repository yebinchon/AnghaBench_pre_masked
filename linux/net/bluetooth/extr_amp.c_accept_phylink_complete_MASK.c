
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct hci_dev {int name; } ;
struct hci_cp_accept_phy_link {int phy_handle; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 struct hci_cp_accept_phy_link* FUNC_2 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_3(struct hci_dev *VAR_1, u8 VAR_2,
        u16 VAR_3)
{
 struct hci_cp_accept_phy_link *VAR_4;

 FUNC_0("%s status 0x%2.2x", VAR_1->name, VAR_2);

 if (VAR_2)
  return;

 VAR_4 = FUNC_2(VAR_1, VAR_0);
 if (!VAR_4)
  return;

 FUNC_1(VAR_1, VAR_4->phy_handle);
}
