
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_qrtr {size_t sq_node; size_t sq_port; } ;
struct sk_buff {size_t len; } ;
struct qrtr_node {size_t nid; int ep_lock; TYPE_1__* ep; } ;
struct qrtr_hdr_v1 {scalar_t__ confirm_rx; void* size; void* dst_port_id; void* dst_node_id; void* src_port_id; void* src_node_id; void* type; void* version; } ;
struct TYPE_2__ {int (* xmit ) (TYPE_1__*,struct sk_buff*) ;} ;


 int FUNC_0 (size_t,int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct qrtr_hdr_v1* FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (TYPE_1__*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct qrtr_node *VAR_4, struct sk_buff *VAR_5,
        int VAR_6, struct sockaddr_qrtr *VAR_7,
        struct sockaddr_qrtr *VAR_8)
{
 struct qrtr_hdr_v1 *VAR_9;
 size_t VAR_10 = VAR_5->len;
 int VAR_11 = -VAR_0;

 VAR_9 = FUNC_5(VAR_5, sizeof(*VAR_9));
 VAR_9->version = FUNC_1(VAR_3);
 VAR_9->type = FUNC_1(VAR_6);
 VAR_9->src_node_id = FUNC_1(VAR_7->sq_node);
 VAR_9->src_port_id = FUNC_1(VAR_7->sq_port);
 if (VAR_8->sq_port == VAR_2) {
  VAR_9->dst_node_id = FUNC_1(VAR_4->nid);
  VAR_9->dst_port_id = FUNC_1(VAR_1);
 } else {
  VAR_9->dst_node_id = FUNC_1(VAR_8->sq_node);
  VAR_9->dst_port_id = FUNC_1(VAR_8->sq_port);
 }

 VAR_9->size = FUNC_1(VAR_10);
 VAR_9->confirm_rx = 0;

 FUNC_6(VAR_5, FUNC_0(VAR_10, 4));

 FUNC_3(&VAR_4->ep_lock);
 if (VAR_4->ep)
  VAR_11 = VAR_4->ep->xmit(VAR_4->ep, VAR_5);
 else
  FUNC_2(VAR_5);
 FUNC_4(&VAR_4->ep_lock);

 return VAR_11;
}
