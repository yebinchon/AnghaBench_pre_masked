
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int name; } ;
struct hci_cp_add_sco {int handle; } ;
struct hci_conn {int state; struct hci_conn* link; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_conn*) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_conn*,int ) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 struct hci_cp_add_sco* FUNC_7 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_8(struct hci_dev *VAR_2, __u8 VAR_3)
{
 struct hci_cp_add_sco *VAR_4;
 struct hci_conn *VAR_5, *VAR_6;
 __u16 VAR_7;

 FUNC_0("%s status 0x%2.2x", VAR_2->name, VAR_3);

 if (!VAR_3)
  return;

 VAR_4 = FUNC_7(VAR_2, VAR_1);
 if (!VAR_4)
  return;

 VAR_7 = FUNC_1(VAR_4->handle);

 FUNC_0("%s handle 0x%4.4x", VAR_2->name, VAR_7);

 FUNC_5(VAR_2);

 VAR_5 = FUNC_3(VAR_2, VAR_7);
 if (VAR_5) {
  VAR_6 = VAR_5->link;
  if (VAR_6) {
   VAR_6->state = VAR_0;

   FUNC_4(VAR_6, VAR_3);
   FUNC_2(VAR_6);
  }
 }

 FUNC_6(VAR_2);
}
