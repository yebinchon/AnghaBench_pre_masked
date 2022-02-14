
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int type; int bdaddr; } ;
struct mgmt_ev_connect_failed {int status; TYPE_1__ addr; } ;
struct TYPE_4__ {int work; } ;
struct hci_dev {TYPE_2__ power_off; int req_workqueue; } ;
typedef int ev ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct hci_dev*,struct mgmt_ev_connect_failed*,int,int *) ;
 scalar_t__ FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;

void FUNC_8(struct hci_dev *VAR_1, bdaddr_t *VAR_2, u8 VAR_3,
    u8 VAR_4, u8 VAR_5)
{
 struct mgmt_ev_connect_failed VAR_6;




 if (FUNC_5(VAR_1) && FUNC_2(VAR_1) == 1) {
  FUNC_1(&VAR_1->power_off);
  FUNC_7(VAR_1->req_workqueue, &VAR_1->power_off.work);
 }

 FUNC_0(&VAR_6.addr.bdaddr, VAR_2);
 VAR_6.addr.type = FUNC_3(VAR_3, VAR_4);
 VAR_6.status = FUNC_6(VAR_5);

 FUNC_4(VAR_0, VAR_1, &VAR_6, sizeof(VAR_6), ((void*)0));
}
