
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int name; } ;
struct hci_conn {int flags; struct hci_dev* hdev; } ;
struct hci_chan {int data_q; int list; struct hci_conn* conn; } ;


 int FUNC_0 (char*,int ,struct hci_conn*,struct hci_chan*) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_conn*) ;
 int FUNC_2 (struct hci_chan*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

void FUNC_7(struct hci_chan *VAR_1)
{
 struct hci_conn *VAR_2 = VAR_1->conn;
 struct hci_dev *VAR_3 = VAR_2->hdev;

 FUNC_0("%s hcon %p chan %p", VAR_3->name, VAR_2, VAR_1);

 FUNC_3(&VAR_1->list);

 FUNC_6();


 FUNC_4(VAR_0, &VAR_2->flags);

 FUNC_1(VAR_2);

 FUNC_5(&VAR_1->data_q);
 FUNC_2(VAR_1);
}
