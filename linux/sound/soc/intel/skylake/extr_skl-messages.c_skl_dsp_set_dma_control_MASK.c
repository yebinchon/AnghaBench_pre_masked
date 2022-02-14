
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skl_ipc_large_config_msg {scalar_t__ param_data_size; int large_param_id; int member_0; } ;
struct skl_dma_control {int config_data; int config_length; int node_id; } ;
struct skl_dev {int ipc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct skl_dma_control*) ;
 struct skl_dma_control* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *,struct skl_ipc_large_config_msg*,int *) ;

int FUNC_4(struct skl_dev *VAR_4, u32 *VAR_5,
    u32 VAR_6, u32 VAR_7)
{
 struct skl_dma_control *VAR_8;
 struct skl_ipc_large_config_msg VAR_9 = {0};
 int VAR_10 = 0;





 if (VAR_6 == 0)
  return 0;

 VAR_9.large_param_id = VAR_0;
 VAR_9.param_data_size = sizeof(struct skl_dma_control) + VAR_6;

 VAR_8 = FUNC_1(VAR_9.param_data_size, VAR_3);
 if (VAR_8 == ((void*)0))
  return -VAR_2;

 VAR_8->node_id = VAR_7;







 VAR_8->config_length = VAR_1;

 FUNC_2(VAR_8->config_data, VAR_5, VAR_6);

 VAR_10 = FUNC_3(&VAR_4->ipc, &VAR_9, (u32 *)VAR_8);

 FUNC_0(VAR_8);
 return VAR_10;
}
