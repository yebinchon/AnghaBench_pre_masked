
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dummy; } ;
struct cmd_lookup {scalar_t__ sk; struct hci_dev* member_1; int * member_0; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (int ,struct hci_dev*,int ,struct cmd_lookup*) ;
 int FUNC_5 (struct hci_dev*,scalar_t__) ;
 int FUNC_6 (struct hci_dev*) ;
 int VAR_1 ;
 int FUNC_7 (scalar_t__) ;

void FUNC_8(struct hci_dev *VAR_2, int VAR_3)
{
 struct cmd_lookup VAR_4 = { ((void*)0), VAR_2 };

 FUNC_0("err %d", VAR_3);

 FUNC_1(VAR_2);

 if (!VAR_3) {
  FUNC_6(VAR_2);
  FUNC_3(VAR_2);
 }

 FUNC_4(VAR_0, VAR_2, VAR_1, &VAR_4);

 FUNC_5(VAR_2, VAR_4.sk);

 if (VAR_4.sk)
  FUNC_7(VAR_4.sk);

 FUNC_2(VAR_2);
}
