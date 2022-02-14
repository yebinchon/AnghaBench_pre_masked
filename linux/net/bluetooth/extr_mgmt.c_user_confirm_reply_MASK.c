
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_cp_user_confirm_reply {int addr; } ;
struct hci_dev {int id; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sock*,int ,int ,int ) ;
 int FUNC_2 (struct sock*,struct hci_dev*,int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_3, struct hci_dev *VAR_4, void *VAR_5,
         u16 VAR_6)
{
 struct mgmt_cp_user_confirm_reply *VAR_7 = VAR_5;

 FUNC_0("");

 if (VAR_6 != sizeof(*VAR_7))
  return FUNC_1(VAR_3, VAR_4->id, VAR_1,
           VAR_2);

 return FUNC_2(VAR_3, VAR_4, &VAR_7->addr,
     VAR_1,
     VAR_0, 0);
}
