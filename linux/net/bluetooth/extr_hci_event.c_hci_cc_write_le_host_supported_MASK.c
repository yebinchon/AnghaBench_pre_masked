
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {int ** features; int name; } ;
struct hci_cp_write_le_host_supported {scalar_t__ simul; scalar_t__ le; } ;
typedef scalar_t__ __u8 ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 struct hci_cp_write_le_host_supported* FUNC_5 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_6(struct hci_dev *VAR_5,
        struct sk_buff *VAR_6)
{
 struct hci_cp_write_le_host_supported *VAR_7;
 __u8 VAR_8 = *((__u8 *) VAR_6->data);

 FUNC_0("%s status 0x%2.2x", VAR_5->name, VAR_8);

 if (VAR_8)
  return;

 VAR_7 = FUNC_5(VAR_5, VAR_2);
 if (!VAR_7)
  return;

 FUNC_2(VAR_5);

 if (VAR_7->le) {
  VAR_5->features[1][0] |= VAR_3;
  FUNC_3(VAR_5, VAR_1);
 } else {
  VAR_5->features[1][0] &= ~VAR_3;
  FUNC_1(VAR_5, VAR_1);
  FUNC_1(VAR_5, VAR_0);
 }

 if (VAR_7->simul)
  VAR_5->features[1][0] |= VAR_4;
 else
  VAR_5->features[1][0] &= ~VAR_4;

 FUNC_4(VAR_5);
}
