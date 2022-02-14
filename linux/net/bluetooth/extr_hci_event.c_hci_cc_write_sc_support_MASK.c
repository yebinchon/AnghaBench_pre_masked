
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct hci_dev {int ** features; int name; } ;
struct hci_cp_write_sc_support {scalar_t__ support; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*) ;
 struct hci_cp_write_sc_support* FUNC_6 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_7(struct hci_dev *VAR_4, struct sk_buff *VAR_5)
{
 u8 VAR_6 = *((u8 *) VAR_5->data);
 struct hci_cp_write_sc_support *VAR_7;

 FUNC_0("%s status 0x%2.2x", VAR_4->name, VAR_6);

 VAR_7 = FUNC_6(VAR_4, VAR_1);
 if (!VAR_7)
  return;

 FUNC_2(VAR_4);

 if (!VAR_6) {
  if (VAR_7->support)
   VAR_4->features[1][0] |= VAR_3;
  else
   VAR_4->features[1][0] &= ~VAR_3;
 }

 if (!FUNC_4(VAR_4, VAR_0) && !VAR_6) {
  if (VAR_7->support)
   FUNC_3(VAR_4, VAR_2);
  else
   FUNC_1(VAR_4, VAR_2);
 }

 FUNC_5(VAR_4);
}
