
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sst_ipc_message {int size; struct sst_hsw_ipc_device_config_req* data; int header; } ;
struct sst_hsw_ipc_device_config_req {int ssp_interface; int clock_frequency; int mode; int channels; int clock_divider; } ;
struct sst_hsw {int dx_dev; int dx_mclk; int dx_mode; int dev; int ipc; int dx_clock_divider; } ;
typedef enum sst_hsw_device_mode { ____Placeholder_sst_hsw_device_mode } sst_hsw_device_mode ;
typedef enum sst_hsw_device_mclk { ____Placeholder_sst_hsw_device_mclk } sst_hsw_device_mclk ;
typedef enum sst_hsw_device_id { ____Placeholder_sst_hsw_device_id } sst_hsw_device_id ;
typedef int config ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,struct sst_ipc_message,int *) ;
 int FUNC_3 (struct sst_hsw_ipc_device_config_req*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct sst_hsw *VAR_2,
 enum sst_hsw_device_id VAR_3, enum sst_hsw_device_mclk VAR_4,
 enum sst_hsw_device_mode VAR_5, u32 VAR_6)
{
 struct sst_ipc_message VAR_7;
 struct sst_hsw_ipc_device_config_req VAR_8;
 int VAR_9;

 FUNC_4("set device config", VAR_3);

 VAR_2->dx_dev = VAR_8.ssp_interface = VAR_3;
 VAR_2->dx_mclk = VAR_8.clock_frequency = VAR_4;
 VAR_2->dx_mode = VAR_8.mode = VAR_5;
 VAR_2->dx_clock_divider = VAR_8.clock_divider = VAR_6;
 if (VAR_5 == VAR_1)
  VAR_8.channels = 4;
 else
  VAR_8.channels = 2;

 FUNC_3(&VAR_8);

 VAR_7.header = FUNC_0(VAR_0);
 VAR_7.data = &VAR_8;
 VAR_7.size = sizeof(VAR_8);

 VAR_9 = FUNC_2(&VAR_2->ipc, VAR_7, ((void*)0));
 if (VAR_9 < 0)
  FUNC_1(VAR_2->dev, "error: set device formats failed\n");

 return VAR_9;
}
