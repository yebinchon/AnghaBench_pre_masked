
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int type; int bdaddr; } ;
struct mgmt_ev_user_passkey_request {TYPE_1__ addr; } ;
struct hci_dev {int name; } ;
typedef int ev ;
typedef int bdaddr_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct hci_dev*,struct mgmt_ev_user_passkey_request*,int,int *) ;

int FUNC_4(struct hci_dev *VAR_1, bdaddr_t *VAR_2,
         u8 VAR_3, u8 VAR_4)
{
 struct mgmt_ev_user_passkey_request VAR_5;

 FUNC_0("%s", VAR_1->name);

 FUNC_1(&VAR_5.addr.bdaddr, VAR_2);
 VAR_5.addr.type = FUNC_2(VAR_3, VAR_4);

 return FUNC_3(VAR_0, VAR_1, &VAR_5, sizeof(VAR_5),
     ((void*)0));
}
