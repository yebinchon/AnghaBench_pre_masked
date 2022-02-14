
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skl_ipc_large_config_msg {int param_data_size; int large_param_id; int member_0; } ;
struct skl_dev {int ipc; } ;
struct skl_astate_param {int dummy; } ;
typedef int cnt ;


 int VAR_0 ;
 int FUNC_0 (int *,struct skl_ipc_large_config_msg*,void*) ;

void FUNC_1(struct skl_dev *VAR_1, u32 VAR_2, void *VAR_3)
{
 struct skl_ipc_large_config_msg VAR_4 = {0};

 VAR_4.large_param_id = VAR_0;
 VAR_4.param_data_size = (VAR_2 * sizeof(struct skl_astate_param) +
    sizeof(VAR_2));

 FUNC_0(&VAR_1->ipc, &VAR_4, VAR_3);
}
