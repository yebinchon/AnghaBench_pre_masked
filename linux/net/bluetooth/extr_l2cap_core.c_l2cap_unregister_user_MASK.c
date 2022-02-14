
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l2cap_user {int (* remove ) (struct l2cap_conn*,struct l2cap_user*) ;int list; } ;
struct l2cap_conn {TYPE_1__* hcon; } ;
struct hci_dev {int dummy; } ;
struct TYPE_2__ {struct hci_dev* hdev; } ;


 int FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct l2cap_conn*,struct l2cap_user*) ;

void FUNC_5(struct l2cap_conn *VAR_0, struct l2cap_user *VAR_1)
{
 struct hci_dev *VAR_2 = VAR_0->hcon->hdev;

 FUNC_0(VAR_2);

 if (FUNC_3(&VAR_1->list))
  goto out_unlock;

 FUNC_2(&VAR_1->list);
 VAR_1->remove(VAR_0, VAR_1);

out_unlock:
 FUNC_1(VAR_2);
}
