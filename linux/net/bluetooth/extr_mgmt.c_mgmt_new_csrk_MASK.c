
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int* b; } ;
struct smp_csrk {scalar_t__ bdaddr_type; int val; int type; TYPE_3__ bdaddr; } ;
struct TYPE_4__ {int type; int bdaddr; } ;
struct TYPE_5__ {int val; int type; TYPE_1__ addr; } ;
struct mgmt_ev_new_csrk {int store_hint; TYPE_2__ key; } ;
struct hci_dev {int dummy; } ;
typedef int ev ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct mgmt_ev_new_csrk*,int ,int) ;
 int FUNC_4 (int ,struct hci_dev*,struct mgmt_ev_new_csrk*,int,int *) ;

void FUNC_5(struct hci_dev *VAR_3, struct smp_csrk *VAR_4,
     bool VAR_5)
{
 struct mgmt_ev_new_csrk VAR_6;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 if (VAR_4->bdaddr_type == VAR_0 &&
     (VAR_4->bdaddr.b[5] & 0xc0) != 0xc0)
  VAR_6.store_hint = 0x00;
 else
  VAR_6.store_hint = VAR_5;

 FUNC_0(&VAR_6.key.addr.bdaddr, &VAR_4->bdaddr);
 VAR_6.key.addr.type = FUNC_1(VAR_1, VAR_4->bdaddr_type);
 VAR_6.key.type = VAR_4->type;
 FUNC_2(VAR_6.key.val, VAR_4->val, sizeof(VAR_4->val));

 FUNC_4(VAR_2, VAR_3, &VAR_6, sizeof(VAR_6), ((void*)0));
}
