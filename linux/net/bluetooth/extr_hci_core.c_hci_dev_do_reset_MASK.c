
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {scalar_t__ le_cnt; scalar_t__ sco_cnt; scalar_t__ acl_cnt; int cmd_cnt; int (* flush ) (struct hci_dev*) ;int workqueue; int cmd_q; int rx_q; int name; } ;


 int FUNC_0 (char*,int ,struct hci_dev*) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_dev*,int ,int ,int ,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (struct hci_dev*) ;
 int VAR_1 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct hci_dev*) ;

__attribute__((used)) static int FUNC_12(struct hci_dev *VAR_2)
{
 int VAR_3;

 FUNC_0("%s %p", VAR_2->name, VAR_2);

 FUNC_8(VAR_2);


 FUNC_10(&VAR_2->rx_q);
 FUNC_10(&VAR_2->cmd_q);




 FUNC_3(VAR_2->workqueue);

 FUNC_5(VAR_2);
 FUNC_7(VAR_2);
 FUNC_4(VAR_2);
 FUNC_6(VAR_2);

 if (VAR_2->flush)
  VAR_2->flush(VAR_2);

 FUNC_2(&VAR_2->cmd_cnt, 1);
 VAR_2->acl_cnt = 0; VAR_2->sco_cnt = 0; VAR_2->le_cnt = 0;

 VAR_3 = FUNC_1(VAR_2, VAR_1, 0, VAR_0, ((void*)0));

 FUNC_9(VAR_2);
 return VAR_3;
}
