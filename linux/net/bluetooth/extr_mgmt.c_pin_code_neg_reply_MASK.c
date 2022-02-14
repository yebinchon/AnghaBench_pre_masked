
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_cp_pin_code_neg_reply {int addr; } ;
struct hci_dev {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sock*,struct hci_dev*,int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_2, struct hci_dev *VAR_3,
         void *VAR_4, u16 VAR_5)
{
 struct mgmt_cp_pin_code_neg_reply *VAR_6 = VAR_4;

 FUNC_0("");

 return FUNC_1(VAR_2, VAR_3, &VAR_6->addr,
    VAR_1,
    VAR_0, 0);
}
