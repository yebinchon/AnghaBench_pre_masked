
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sst_ipc_message {int header; scalar_t__ size; struct sst_hsw_transfer_parameter* data; int member_0; } ;
struct sst_hsw_transfer_parameter {scalar_t__ data_size; scalar_t__ parameter_id; int data; } ;
struct sst_hsw_transfer_list {int dummy; } ;
struct sst_hsw {int ipc; struct device* dev; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct device*,char*,scalar_t__) ;
 int FUNC_5 (struct device*,char*,int) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct sst_hsw_transfer_parameter*) ;
 struct sst_hsw_transfer_parameter* FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int ,char*,scalar_t__) ;
 int FUNC_10 (int *,struct sst_ipc_message,int *) ;

int FUNC_11(struct sst_hsw *VAR_5,
 u32 VAR_6, u32 VAR_7, u32 VAR_8,
 u32 VAR_9, char *VAR_10)
{
 int VAR_11;
 struct sst_ipc_message VAR_12 = {0};
 u32 VAR_13 = 0;
 struct sst_hsw_transfer_parameter *VAR_14;
 struct device *VAR_15 = VAR_5->dev;

 VAR_12.header = FUNC_1(VAR_2) |
   FUNC_3(VAR_3) |
   FUNC_2(VAR_6);
 FUNC_4(VAR_15, "sst_hsw_module_set_param header=%x\n",
   (u32)VAR_12.header);

 VAR_13 = VAR_9 +
  sizeof(struct sst_hsw_transfer_parameter) -
  sizeof(struct sst_hsw_transfer_list);
 FUNC_4(VAR_15, "parameter size : %d\n", VAR_9);
 FUNC_4(VAR_15, "payload size   : %d\n", VAR_13);

 if (VAR_13 <= VAR_4) {

  FUNC_4(VAR_15, "transfer parameter size : %zu\n",
   VAR_12.size);

  VAR_12.size = FUNC_0(VAR_13, 4);
  FUNC_4(VAR_15, "transfer parameter aligned size : %zu\n",
   VAR_12.size);

  VAR_14 = FUNC_8(VAR_12.size, VAR_1);
  if (VAR_14 == ((void*)0))
   return -VAR_0;

  FUNC_9(VAR_14->data, VAR_10, VAR_9);
 } else {
  FUNC_6(VAR_15, "transfer parameter size too large!");
  return 0;
 }

 VAR_14->parameter_id = VAR_8;
 VAR_14->data_size = VAR_9;
 VAR_12.data = VAR_14;

 VAR_11 = FUNC_10(&VAR_5->ipc, VAR_12, ((void*)0));
 if (VAR_11 < 0)
  FUNC_5(VAR_15, "ipc: module set parameter failed - %d\n", VAR_11);

 FUNC_7(VAR_14);

 return VAR_11;
}
