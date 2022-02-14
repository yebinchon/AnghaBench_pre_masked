
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qrtr_node {int item; struct qrtr_endpoint* ep; int nid; int rx_queue; int ep_lock; int ref; int work; } ;
struct qrtr_endpoint {struct qrtr_node* node; int xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 struct qrtr_node* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (struct qrtr_node*,unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int *) ;

int FUNC_9(struct qrtr_endpoint *VAR_7, unsigned int VAR_8)
{
 struct qrtr_node *VAR_9;

 if (!VAR_7 || !VAR_7->xmit)
  return -VAR_0;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_0(&VAR_9->work, VAR_6);
 FUNC_1(&VAR_9->ref);
 FUNC_4(&VAR_9->ep_lock);
 FUNC_8(&VAR_9->rx_queue);
 VAR_9->nid = VAR_3;
 VAR_9->ep = VAR_7;

 FUNC_7(VAR_9, VAR_8);

 FUNC_5(&VAR_5);
 FUNC_3(&VAR_9->item, &VAR_4);
 FUNC_6(&VAR_5);
 VAR_7->node = VAR_9;

 return 0;
}
