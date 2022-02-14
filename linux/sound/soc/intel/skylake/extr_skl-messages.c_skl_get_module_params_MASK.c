
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pvt_id; int module_id; } ;
struct skl_module_cfg {TYPE_1__ id; } ;
struct skl_ipc_large_config_msg {int param_data_size; int large_param_id; int instance_id; int module_id; } ;
struct skl_dev {int ipc; } ;


 int FUNC_0 (int *,struct skl_ipc_large_config_msg*,int **,size_t*) ;

int FUNC_1(struct skl_dev *VAR_0, u32 *VAR_1, int VAR_2,
     u32 VAR_3, struct skl_module_cfg *VAR_4)
{
 struct skl_ipc_large_config_msg VAR_5;
 size_t VAR_6 = VAR_2;

 VAR_5.module_id = VAR_4->id.module_id;
 VAR_5.instance_id = VAR_4->id.pvt_id;
 VAR_5.param_data_size = VAR_2;
 VAR_5.large_param_id = VAR_3;

 return FUNC_0(&VAR_0->ipc, &VAR_5, &VAR_1, &VAR_6);
}
