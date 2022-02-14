
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smp_irk {int val; int addr_type; int bdaddr; int rpa; } ;
struct TYPE_3__ {int type; int bdaddr; } ;
struct TYPE_4__ {int val; TYPE_1__ addr; } ;
struct mgmt_ev_new_irk {int store_hint; TYPE_2__ irk; int rpa; } ;
struct hci_dev {int dummy; } ;
typedef int ev ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct mgmt_ev_new_irk*,int ,int) ;
 int FUNC_4 (int ,struct hci_dev*,struct mgmt_ev_new_irk*,int,int *) ;

void FUNC_5(struct hci_dev *VAR_2, struct smp_irk *VAR_3, bool VAR_4)
{
 struct mgmt_ev_new_irk VAR_5;

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));

 VAR_5.store_hint = VAR_4;

 FUNC_0(&VAR_5.rpa, &VAR_3->rpa);
 FUNC_0(&VAR_5.irk.addr.bdaddr, &VAR_3->bdaddr);
 VAR_5.irk.addr.type = FUNC_1(VAR_0, VAR_3->addr_type);
 FUNC_2(VAR_5.irk.val, VAR_3->val, sizeof(VAR_3->val));

 FUNC_4(VAR_1, VAR_2, &VAR_5, sizeof(VAR_5), ((void*)0));
}
