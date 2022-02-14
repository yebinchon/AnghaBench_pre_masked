
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int time_slot_index; int i2s_instance; } ;
union skl_ssp_dma_node {int val; TYPE_2__ dma_node; int member_0; } ;
struct TYPE_6__ {int vindex; void* dma_type; } ;
union skl_connector_node_id {int val; TYPE_3__ node; int member_0; } ;
typedef int u32 ;
struct skl_pipe_params {int host_dma_id; int link_dma_id; } ;
struct skl_module_cfg {int dev_type; int vbus_id; int time_slot; int hw_conn_type; TYPE_1__* pipe; } ;
struct skl_dev {int dummy; } ;
struct TYPE_4__ {struct skl_pipe_params* p_params; } ;


 int VAR_0 ;





 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;

__attribute__((used)) static u32 FUNC_0(struct skl_dev *VAR_8,
   struct skl_module_cfg *VAR_9)
{
 union skl_connector_node_id VAR_10 = {0};
 union skl_ssp_dma_node VAR_11 = {0};
 struct skl_pipe_params *VAR_12 = VAR_9->pipe->p_params;

 switch (VAR_9->dev_type) {
 case 132:
  VAR_10.node.dma_type =
   (VAR_0 == VAR_9->hw_conn_type) ?
   VAR_7 :
   VAR_6;
  VAR_10.node.vindex = VAR_12->host_dma_id +
     (VAR_9->vbus_id << 3);
  break;

 case 128:
  VAR_10.node.dma_type =
   (VAR_0 == VAR_9->hw_conn_type) ?
   VAR_7 :
   VAR_6;
  VAR_11.dma_node.time_slot_index = VAR_9->time_slot;
  VAR_11.dma_node.i2s_instance = VAR_9->vbus_id;
  VAR_10.node.vindex = VAR_11.val;
  break;

 case 131:
  VAR_10.node.dma_type = VAR_1;
  VAR_10.node.vindex = VAR_9->vbus_id +
      (VAR_9->time_slot);
  break;

 case 129:
  VAR_10.node.dma_type =
   (VAR_0 == VAR_9->hw_conn_type) ?
   VAR_5 :
   VAR_4;
  VAR_10.node.vindex = VAR_12->link_dma_id;
  break;

 case 130:
  VAR_10.node.dma_type =
   (VAR_0 == VAR_9->hw_conn_type) ?
   VAR_3 :
   VAR_2;
  VAR_10.node.vindex = VAR_12->host_dma_id;
  break;

 default:
  VAR_10.val = 0xFFFFFFFF;
  break;
 }

 return VAR_10.val;
}
