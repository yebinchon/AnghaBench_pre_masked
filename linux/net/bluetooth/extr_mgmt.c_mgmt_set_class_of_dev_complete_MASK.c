
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int dummy; } ;
struct cmd_lookup {scalar_t__ sk; int member_2; struct hci_dev* member_1; int * member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hci_dev*,int *) ;
 int FUNC_1 (int ,struct hci_dev*,int *,int,int ,int *) ;
 int FUNC_2 (int ,struct hci_dev*,int ,struct cmd_lookup*) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(struct hci_dev *VAR_6, u8 *VAR_7,
        u8 VAR_8)
{
 struct cmd_lookup VAR_9 = { ((void*)0), VAR_6, FUNC_3(VAR_8) };

 FUNC_2(VAR_4, VAR_6, VAR_5, &VAR_9);
 FUNC_2(VAR_2, VAR_6, VAR_5, &VAR_9);
 FUNC_2(VAR_3, VAR_6, VAR_5, &VAR_9);

 if (!VAR_8) {
  FUNC_1(VAR_1, VAR_6, VAR_7,
       3, VAR_0, ((void*)0));
  FUNC_0(VAR_6, ((void*)0));
 }

 if (VAR_9.sk)
  FUNC_4(VAR_9.sk);
}
