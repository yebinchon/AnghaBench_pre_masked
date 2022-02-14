
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {int ** features; int name; } ;
struct hci_cp_write_ssp_mode {scalar_t__ mode; } ;
typedef int __u8 ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*) ;
 struct hci_cp_write_ssp_mode* FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (struct hci_dev*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_8(struct hci_dev *VAR_4, struct sk_buff *VAR_5)
{
 __u8 VAR_6 = *((__u8 *) VAR_5->data);
 struct hci_cp_write_ssp_mode *VAR_7;

 FUNC_0("%s status 0x%2.2x", VAR_4->name, VAR_6);

 VAR_7 = FUNC_6(VAR_4, VAR_1);
 if (!VAR_7)
  return;

 FUNC_2(VAR_4);

 if (!VAR_6) {
  if (VAR_7->mode)
   VAR_4->features[1][0] |= VAR_3;
  else
   VAR_4->features[1][0] &= ~VAR_3;
 }

 if (FUNC_4(VAR_4, VAR_0))
  FUNC_7(VAR_4, VAR_7->mode, VAR_6);
 else if (!VAR_6) {
  if (VAR_7->mode)
   FUNC_3(VAR_4, VAR_2);
  else
   FUNC_1(VAR_4, VAR_2);
 }

 FUNC_5(VAR_4);
}
