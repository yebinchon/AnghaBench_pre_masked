
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct hci_rp_write_remote_amp_assoc {int phy_handle; scalar_t__ status; } ;
struct hci_dev {int name; } ;


 int FUNC_0 (char*,int ,scalar_t__,int ) ;
 int FUNC_1 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_2(struct hci_dev *VAR_0, u8 VAR_1,
         u16 VAR_2, struct sk_buff *VAR_3)
{
 struct hci_rp_write_remote_amp_assoc *VAR_4 = (void *)VAR_3->data;

 FUNC_0("%s status 0x%2.2x phy_handle 0x%2.2x",
        VAR_0->name, VAR_4->status, VAR_4->phy_handle);

 if (VAR_4->status)
  return;

 FUNC_1(VAR_0, VAR_4->phy_handle);
}
