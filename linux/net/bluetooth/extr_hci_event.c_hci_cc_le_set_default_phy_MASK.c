
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {int le_rx_def_phys; int le_tx_def_phys; int name; } ;
struct hci_cp_le_set_default_phy {int rx_phys; int tx_phys; } ;
typedef scalar_t__ __u8 ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 struct hci_cp_le_set_default_phy* FUNC_3 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_4(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 __u8 VAR_3 = *((__u8 *) VAR_2->data);
 struct hci_cp_le_set_default_phy *VAR_4;

 FUNC_0("%s status 0x%2.2x", VAR_1->name, VAR_3);

 if (VAR_3)
  return;

 VAR_4 = FUNC_3(VAR_1, VAR_0);
 if (!VAR_4)
  return;

 FUNC_1(VAR_1);

 VAR_1->le_tx_def_phys = VAR_4->tx_phys;
 VAR_1->le_rx_def_phys = VAR_4->rx_phys;

 FUNC_2(VAR_1);
}
