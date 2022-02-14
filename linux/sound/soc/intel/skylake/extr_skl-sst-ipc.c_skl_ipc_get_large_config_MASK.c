
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef unsigned int u32 ;
struct sst_ipc_message {unsigned int* data; int header; size_t size; int member_0; } ;
struct sst_generic_ipc {int dev; } ;
struct skl_ipc_large_config_msg {int large_param_id; int param_data_size; int module_id; int instance_id; } ;
struct skl_ipc_header {int extension; int primary; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int FUNC_8 (int ) ;
 size_t VAR_6 ;
 int FUNC_9 (int ,char*,int) ;
 unsigned int* FUNC_10 (unsigned int*,int,int ) ;
 unsigned int* FUNC_11 (size_t,int ) ;
 int FUNC_12 (struct sst_generic_ipc*,struct sst_ipc_message,struct sst_ipc_message*) ;

int FUNC_13(struct sst_generic_ipc *VAR_7,
  struct skl_ipc_large_config_msg *VAR_8,
  u32 **VAR_9, size_t *VAR_10)
{
 struct skl_ipc_header VAR_11 = {0};
 struct sst_ipc_message VAR_12, VAR_13 = {0};
 unsigned int *VAR_14;
 int VAR_15;

 VAR_13.data = FUNC_11(VAR_6, VAR_1);
 if (!VAR_13.data)
  return -VAR_0;

 VAR_11.primary = FUNC_8(VAR_4);
 VAR_11.primary |= FUNC_7(VAR_5);
 VAR_11.primary |= FUNC_2(VAR_3);
 VAR_11.primary |= FUNC_6(VAR_8->instance_id);
 VAR_11.primary |= FUNC_5(VAR_8->module_id);

 VAR_11.extension = FUNC_0(VAR_8->param_data_size);
 VAR_11.extension |= FUNC_4(VAR_8->large_param_id);
 VAR_11.extension |= FUNC_1(1);
 VAR_11.extension |= FUNC_3(1);

 VAR_12.header = *(u64 *)&VAR_11;
 VAR_12.data = *VAR_9;
 VAR_12.size = *VAR_10;
 VAR_13.size = VAR_6;

 VAR_15 = FUNC_12(VAR_7, VAR_12, &VAR_13);
 if (VAR_15 < 0)
  FUNC_9(VAR_7->dev, "ipc: get large config fail, err: %d\n", VAR_15);

 VAR_13.size = (VAR_13.header >> 32) & VAR_2;
 VAR_14 = FUNC_10(VAR_13.data, VAR_13.size, VAR_1);
 if (!VAR_14)
  return -VAR_0;
 *VAR_9 = VAR_14;
 *VAR_10 = VAR_13.size;

 return VAR_15;
}
