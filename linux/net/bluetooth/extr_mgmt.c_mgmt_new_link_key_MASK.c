
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int bdaddr; } ;
struct TYPE_4__ {int pin_len; int val; int type; TYPE_1__ addr; } ;
struct mgmt_ev_new_link_key {int store_hint; TYPE_2__ key; } ;
struct link_key {int pin_len; int val; int type; int bdaddr; } ;
struct hci_dev {int dummy; } ;
typedef int ev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct mgmt_ev_new_link_key*,int ,int) ;
 int FUNC_3 (int ,struct hci_dev*,struct mgmt_ev_new_link_key*,int,int *) ;

void FUNC_4(struct hci_dev *VAR_3, struct link_key *VAR_4,
         bool VAR_5)
{
 struct mgmt_ev_new_link_key VAR_6;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));

 VAR_6.store_hint = VAR_5;
 FUNC_0(&VAR_6.key.addr.bdaddr, &VAR_4->bdaddr);
 VAR_6.key.addr.type = VAR_0;
 VAR_6.key.type = VAR_4->type;
 FUNC_1(VAR_6.key.val, VAR_4->val, VAR_1);
 VAR_6.key.pin_len = VAR_4->pin_len;

 FUNC_3(VAR_2, VAR_3, &VAR_6, sizeof(VAR_6), ((void*)0));
}
