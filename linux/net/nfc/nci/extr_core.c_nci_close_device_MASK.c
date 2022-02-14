
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nci_dev {int req_lock; scalar_t__ flags; int cmd_wq; int cmd_timer; TYPE_1__* ops; int cmd_cnt; int cmd_q; int tx_wq; int rx_wq; int tx_q; int rx_q; int data_timer; } ;
struct TYPE_2__ {int (* close ) (struct nci_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nci_dev*,int ,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct nci_dev*,int ) ;
 int VAR_4 ;
 int FUNC_9 (int ,scalar_t__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct nci_dev*) ;
 int FUNC_12 (int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_13(struct nci_dev *VAR_5)
{
 FUNC_8(VAR_5, VAR_0);
 FUNC_6(&VAR_5->req_lock);

 if (!FUNC_12(VAR_3, &VAR_5->flags)) {
  FUNC_3(&VAR_5->cmd_timer);
  FUNC_3(&VAR_5->data_timer);
  FUNC_7(&VAR_5->req_lock);
  return 0;
 }


 FUNC_10(&VAR_5->rx_q);
 FUNC_10(&VAR_5->tx_q);


 FUNC_4(VAR_5->rx_wq);
 FUNC_4(VAR_5->tx_wq);


 FUNC_10(&VAR_5->cmd_q);
 FUNC_1(&VAR_5->cmd_cnt, 1);

 FUNC_9(VAR_1, &VAR_5->flags);
 FUNC_0(VAR_5, VAR_4, 0,
        FUNC_5(VAR_2));




 VAR_5->ops->close(VAR_5);

 FUNC_2(VAR_1, &VAR_5->flags);

 FUNC_3(&VAR_5->cmd_timer);


 FUNC_4(VAR_5->cmd_wq);


 VAR_5->flags = 0;

 FUNC_7(&VAR_5->req_lock);

 return 0;
}
