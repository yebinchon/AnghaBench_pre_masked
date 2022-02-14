
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l2cap_user {int (* probe ) (struct l2cap_conn*,struct l2cap_user*) ;int list; } ;
struct l2cap_conn {int users; int hchan; TYPE_1__* hcon; } ;
struct hci_dev {int dummy; } ;
struct TYPE_2__ {struct hci_dev* hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct l2cap_conn*,struct l2cap_user*) ;

int FUNC_5(struct l2cap_conn *VAR_2, struct l2cap_user *VAR_3)
{
 struct hci_dev *VAR_4 = VAR_2->hcon->hdev;
 int VAR_5;
 FUNC_0(VAR_4);

 if (!FUNC_3(&VAR_3->list)) {
  VAR_5 = -VAR_0;
  goto out_unlock;
 }


 if (!VAR_2->hchan) {
  VAR_5 = -VAR_1;
  goto out_unlock;
 }

 VAR_5 = VAR_3->probe(VAR_2, VAR_3);
 if (VAR_5)
  goto out_unlock;

 FUNC_2(&VAR_3->list, &VAR_2->users);
 VAR_5 = 0;

out_unlock:
 FUNC_1(VAR_4);
 return VAR_5;
}
