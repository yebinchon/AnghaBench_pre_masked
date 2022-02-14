
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int name; } ;
struct hci_cp_exit_sniff_mode {int handle; } ;
struct hci_conn {int flags; } ;
typedef int __u8 ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_conn*,int ) ;
 struct hci_cp_exit_sniff_mode* FUNC_7 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct hci_dev *VAR_3, __u8 VAR_4)
{
 struct hci_cp_exit_sniff_mode *VAR_5;
 struct hci_conn *VAR_6;

 FUNC_0("%s status 0x%2.2x", VAR_3->name, VAR_4);

 if (!VAR_4)
  return;

 VAR_5 = FUNC_7(VAR_3, VAR_2);
 if (!VAR_5)
  return;

 FUNC_4(VAR_3);

 VAR_6 = FUNC_3(VAR_3, FUNC_1(VAR_5->handle));
 if (VAR_6) {
  FUNC_2(VAR_0, &VAR_6->flags);

  if (FUNC_8(VAR_1, &VAR_6->flags))
   FUNC_6(VAR_6, VAR_4);
 }

 FUNC_5(VAR_3);
}
