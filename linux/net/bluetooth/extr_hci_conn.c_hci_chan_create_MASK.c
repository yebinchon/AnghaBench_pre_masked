
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int name; } ;
struct hci_conn {int chan_list; int flags; struct hci_dev* hdev; } ;
struct hci_chan {int list; int state; int data_q; int conn; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hci_conn*) ;
 struct hci_chan* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

struct hci_chan *FUNC_6(struct hci_conn *VAR_3)
{
 struct hci_dev *VAR_4 = VAR_3->hdev;
 struct hci_chan *VAR_5;

 FUNC_0("%s hcon %p", VAR_4->name, VAR_3);

 if (FUNC_5(VAR_2, &VAR_3->flags)) {
  FUNC_0("Refusing to create new hci_chan");
  return ((void*)0);
 }

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->conn = FUNC_1(VAR_3);
 FUNC_4(&VAR_5->data_q);
 VAR_5->state = VAR_0;

 FUNC_3(&VAR_5->list, &VAR_3->chan_list);

 return VAR_5;
}
