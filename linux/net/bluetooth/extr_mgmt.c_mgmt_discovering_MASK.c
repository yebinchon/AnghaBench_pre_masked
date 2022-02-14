
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mgmt_ev_discovering {int discovering; int type; } ;
struct TYPE_2__ {int type; } ;
struct hci_dev {TYPE_1__ discovery; int name; } ;
typedef int ev ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mgmt_ev_discovering*,int ,int) ;
 int FUNC_2 (int ,struct hci_dev*,struct mgmt_ev_discovering*,int,int *) ;

void FUNC_3(struct hci_dev *VAR_1, u8 VAR_2)
{
 struct mgmt_ev_discovering VAR_3;

 FUNC_0("%s discovering %u", VAR_1->name, VAR_2);

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.type = VAR_1->discovery.type;
 VAR_3.discovering = VAR_2;

 FUNC_2(VAR_0, VAR_1, &VAR_3, sizeof(VAR_3), ((void*)0));
}
