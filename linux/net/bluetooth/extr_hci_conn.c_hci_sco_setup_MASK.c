
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_conn {int handle; int hdev; struct hci_conn* link; } ;
typedef int __u8 ;


 int FUNC_0 (char*,struct hci_conn*) ;
 int FUNC_1 (struct hci_conn*,int ) ;
 int FUNC_2 (struct hci_conn*) ;
 int FUNC_3 (struct hci_conn*,int ) ;
 int FUNC_4 (struct hci_conn*,int ) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6(struct hci_conn *VAR_0, __u8 VAR_1)
{
 struct hci_conn *VAR_2 = VAR_0->link;

 if (!VAR_2)
  return;

 FUNC_0("hcon %p", VAR_0);

 if (!VAR_1) {
  if (FUNC_5(VAR_0->hdev))
   FUNC_4(VAR_2, VAR_0->handle);
  else
   FUNC_1(VAR_2, VAR_0->handle);
 } else {
  FUNC_3(VAR_2, VAR_1);
  FUNC_2(VAR_2);
 }
}
