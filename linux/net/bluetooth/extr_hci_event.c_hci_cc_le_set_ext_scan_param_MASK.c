
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {int le_scan_type; int name; } ;
struct hci_cp_le_set_ext_scan_params {scalar_t__ data; } ;
struct hci_cp_le_scan_phy_params {int type; } ;
typedef scalar_t__ __u8 ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 struct hci_cp_le_set_ext_scan_params* FUNC_3 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_4(struct hci_dev *VAR_1,
      struct sk_buff *VAR_2)
{
 struct hci_cp_le_set_ext_scan_params *VAR_3;
 __u8 VAR_4 = *((__u8 *) VAR_2->data);
 struct hci_cp_le_scan_phy_params *VAR_5;

 FUNC_0("%s status 0x%2.2x", VAR_1->name, VAR_4);

 if (VAR_4)
  return;

 VAR_3 = FUNC_3(VAR_1, VAR_0);
 if (!VAR_3)
  return;

 VAR_5 = (void *)VAR_3->data;

 FUNC_1(VAR_1);

 VAR_1->le_scan_type = VAR_5->type;

 FUNC_2(VAR_1);
}
