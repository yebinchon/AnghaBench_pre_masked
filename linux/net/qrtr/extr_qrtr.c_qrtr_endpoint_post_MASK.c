
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ cb; } ;
struct qrtr_node {int work; int rx_queue; } ;
struct qrtr_hdr_v2 {scalar_t__ type; int flags; int size; int dst_port_id; int dst_node_id; int src_port_id; int src_node_id; int optlen; } ;
struct qrtr_hdr_v1 {int size; int dst_port_id; int dst_node_id; int confirm_rx; int src_port_id; int src_node_id; int type; } ;
struct qrtr_endpoint {struct qrtr_node* node; } ;
struct qrtr_cb {scalar_t__ type; scalar_t__ src_port; int confirm_rx; scalar_t__ dst_port; void* dst_node; void* src_node; } ;


 size_t FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;


 scalar_t__ VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 struct sk_buff* FUNC_4 (int *,size_t) ;
 int FUNC_5 (char*,unsigned int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sk_buff*,void const*,unsigned int) ;
 int FUNC_8 (int *,struct sk_buff*) ;

int FUNC_9(struct qrtr_endpoint *VAR_5, const void *VAR_6, size_t VAR_7)
{
 struct qrtr_node *VAR_8 = VAR_5->node;
 const struct qrtr_hdr_v1 *VAR_9;
 const struct qrtr_hdr_v2 *VAR_10;
 struct sk_buff *VAR_11;
 struct qrtr_cb *VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 size_t VAR_15;

 if (VAR_7 & 3)
  return -VAR_0;

 VAR_11 = FUNC_4(((void*)0), VAR_7);
 if (!VAR_11)
  return -VAR_1;

 VAR_12 = (struct qrtr_cb *)VAR_11->cb;


 VAR_14 = *(u8*)VAR_6;

 switch (VAR_14) {
 case 129:
  VAR_9 = VAR_6;
  VAR_15 = sizeof(*VAR_9);

  VAR_12->type = FUNC_3(VAR_9->type);
  VAR_12->src_node = FUNC_3(VAR_9->src_node_id);
  VAR_12->src_port = FUNC_3(VAR_9->src_port_id);
  VAR_12->confirm_rx = !!VAR_9->confirm_rx;
  VAR_12->dst_node = FUNC_3(VAR_9->dst_node_id);
  VAR_12->dst_port = FUNC_3(VAR_9->dst_port_id);

  VAR_13 = FUNC_3(VAR_9->size);
  break;
 case 128:
  VAR_10 = VAR_6;
  VAR_15 = sizeof(*VAR_10) + VAR_10->optlen;

  VAR_12->type = VAR_10->type;
  VAR_12->confirm_rx = !!(VAR_10->flags & VAR_2);
  VAR_12->src_node = FUNC_2(VAR_10->src_node_id);
  VAR_12->src_port = FUNC_2(VAR_10->src_port_id);
  VAR_12->dst_node = FUNC_2(VAR_10->dst_node_id);
  VAR_12->dst_port = FUNC_2(VAR_10->dst_port_id);

  if (VAR_12->src_port == (u16)VAR_3)
   VAR_12->src_port = VAR_3;
  if (VAR_12->dst_port == (u16)VAR_3)
   VAR_12->dst_port = VAR_3;

  VAR_13 = FUNC_3(VAR_10->size);
  break;
 default:
  FUNC_5("qrtr: Invalid version %d\n", VAR_14);
  goto err;
 }

 if (VAR_7 != FUNC_0(VAR_13, 4) + VAR_15)
  goto err;

 if (VAR_12->dst_port != VAR_3 && VAR_12->type != VAR_4)
  goto err;

 FUNC_7(VAR_11, VAR_6 + VAR_15, VAR_13);

 FUNC_8(&VAR_8->rx_queue, VAR_11);
 FUNC_6(&VAR_8->work);

 return 0;

err:
 FUNC_1(VAR_11);
 return -VAR_0;

}
