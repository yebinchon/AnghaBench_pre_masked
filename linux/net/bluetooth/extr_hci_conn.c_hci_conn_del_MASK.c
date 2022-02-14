
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int acl_cnt; int le_cnt; scalar_t__ le_pkts; int name; } ;
struct hci_conn {scalar_t__ type; int data_q; scalar_t__ amp_mgr; struct hci_conn* link; scalar_t__ sent; int le_conn_timeout; int idle_work; int auto_accept_work; int disc_work; int handle; struct hci_dev* hdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,struct hci_conn*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hci_conn*) ;
 int FUNC_5 (struct hci_conn*) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct hci_conn *VAR_2)
{
 struct hci_dev *VAR_3 = VAR_2->hdev;

 FUNC_0("%s hcon %p handle %d", VAR_3->name, VAR_2, VAR_2->handle);

 FUNC_3(&VAR_2->disc_work);
 FUNC_3(&VAR_2->auto_accept_work);
 FUNC_3(&VAR_2->idle_work);

 if (VAR_2->type == VAR_0) {
  struct hci_conn *VAR_4 = VAR_2->link;
  if (VAR_4)
   VAR_4->link = ((void*)0);


  VAR_3->acl_cnt += VAR_2->sent;
 } else if (VAR_2->type == VAR_1) {
  FUNC_2(&VAR_2->le_conn_timeout);

  if (VAR_3->le_pkts)
   VAR_3->le_cnt += VAR_2->sent;
  else
   VAR_3->acl_cnt += VAR_2->sent;
 } else {
  struct hci_conn *VAR_5 = VAR_2->link;
  if (VAR_5) {
   VAR_5->link = ((void*)0);
   FUNC_5(VAR_5);
  }
 }

 if (VAR_2->amp_mgr)
  FUNC_1(VAR_2->amp_mgr);

 FUNC_6(&VAR_2->data_q);






 FUNC_4(VAR_2);

 return 0;
}
