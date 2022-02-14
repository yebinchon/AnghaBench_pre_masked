
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int name; } ;
struct hci_conn {int dummy; } ;


 int FUNC_0 (char*,int ,int ,...) ;
 int FUNC_1 (struct hci_dev*,struct hci_conn*) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int ) ;

void FUNC_3(struct hci_dev *VAR_0, u8 VAR_1)
{
 struct hci_conn *VAR_2;

 FUNC_0("%s phy handle 0x%2.2x", VAR_0->name, VAR_1);

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_2)
  return;

 FUNC_0("%s phy handle 0x%2.2x hcon %p", VAR_0->name, VAR_1, VAR_2);

 FUNC_1(VAR_0, VAR_2);
}
