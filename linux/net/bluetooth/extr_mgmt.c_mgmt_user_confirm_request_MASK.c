
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int type; int bdaddr; } ;
struct mgmt_ev_user_confirm_request {int value; int confirm_hint; TYPE_1__ addr; } ;
struct hci_dev {int name; } ;
typedef int ev ;
typedef int bdaddr_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct hci_dev*,struct mgmt_ev_user_confirm_request*,int,int *) ;

int FUNC_5(struct hci_dev *VAR_1, bdaddr_t *VAR_2,
         u8 VAR_3, u8 VAR_4, u32 VAR_5,
         u8 VAR_6)
{
 struct mgmt_ev_user_confirm_request VAR_7;

 FUNC_0("%s", VAR_1->name);

 FUNC_1(&VAR_7.addr.bdaddr, VAR_2);
 VAR_7.addr.type = FUNC_3(VAR_3, VAR_4);
 VAR_7.confirm_hint = VAR_6;
 VAR_7.value = FUNC_2(VAR_5);

 return FUNC_4(VAR_0, VAR_1, &VAR_7, sizeof(VAR_7),
     ((void*)0));
}
