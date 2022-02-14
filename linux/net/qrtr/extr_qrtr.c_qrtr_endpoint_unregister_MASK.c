
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_qrtr {int member_2; int member_1; int member_0; } ;
struct sk_buff {int dummy; } ;
struct qrtr_node {int ep_lock; int * ep; int nid; } ;
struct qrtr_endpoint {struct qrtr_node* node; } ;
struct qrtr_ctrl_pkt {int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sk_buff* FUNC_3 (struct qrtr_ctrl_pkt**) ;
 int FUNC_4 (int *,struct sk_buff*,int ,struct sockaddr_qrtr*,struct sockaddr_qrtr*) ;
 int VAR_3 ;
 int FUNC_5 (struct qrtr_node*) ;

void FUNC_6(struct qrtr_endpoint *VAR_4)
{
 struct qrtr_node *VAR_5 = VAR_4->node;
 struct sockaddr_qrtr VAR_6 = {VAR_0, VAR_5->nid, VAR_1};
 struct sockaddr_qrtr VAR_7 = {VAR_0, VAR_3, VAR_1};
 struct qrtr_ctrl_pkt *VAR_8;
 struct sk_buff *VAR_9;

 FUNC_1(&VAR_5->ep_lock);
 VAR_5->ep = ((void*)0);
 FUNC_2(&VAR_5->ep_lock);


 VAR_9 = FUNC_3(&VAR_8);
 if (VAR_9) {
  VAR_8->cmd = FUNC_0(VAR_2);
  FUNC_4(((void*)0), VAR_9, VAR_2, &VAR_6, &VAR_7);
 }

 FUNC_5(VAR_5);
 VAR_4->node = ((void*)0);
}
