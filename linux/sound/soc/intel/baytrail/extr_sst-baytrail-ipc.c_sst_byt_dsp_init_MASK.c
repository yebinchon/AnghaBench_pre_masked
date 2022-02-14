
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sst_pdata {struct sst_byt* dsp; int fw; } ;
struct TYPE_6__ {int is_dsp_busy; int reply_msg_match; int tx_data_copy; int shim_dbg; int tx_msg; } ;
struct sst_generic_ipc {int * dsp; void* rx_data_max_size; void* tx_data_max_size; TYPE_1__ ops; struct device* dev; } ;
struct sst_fw {int dummy; } ;
struct TYPE_8__ {int time; int date; } ;
struct TYPE_7__ {int type; int build; int minor; int major; } ;
struct sst_byt_fw_init {TYPE_3__ build_info; TYPE_2__ fw_version; } ;
struct sst_byt {int * dsp; struct sst_fw* fw; struct device* dev; int boot_complete; int boot_wait; int stream_list; struct sst_generic_ipc ipc; } ;
struct device {int dummy; } ;
typedef int init ;
struct TYPE_9__ {struct sst_byt* thread_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 void* VAR_5 ;
 TYPE_4__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int ,...) ;
 struct sst_byt* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct sst_byt_fw_init*,int) ;
 int * FUNC_10 (struct device*,TYPE_4__*,struct sst_pdata*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct sst_fw*) ;
 struct sst_fw* FUNC_13 (int *,int ,struct sst_byt*) ;
 int FUNC_14 (struct sst_generic_ipc*) ;
 int FUNC_15 (struct sst_generic_ipc*) ;
 int FUNC_16 (int ,int ,int ) ;

int FUNC_17(struct device *VAR_12, struct sst_pdata *VAR_13)
{
 struct sst_byt *VAR_14;
 struct sst_generic_ipc *VAR_15;
 struct sst_fw *VAR_16;
 struct sst_byt_fw_init VAR_17;
 int VAR_18;

 FUNC_1(VAR_12, "initialising Byt DSP IPC\n");

 VAR_14 = FUNC_4(VAR_12, sizeof(*VAR_14), VAR_3);
 if (VAR_14 == ((void*)0))
  return -VAR_2;

 VAR_14->dev = VAR_12;

 VAR_15 = &VAR_14->ipc;
 VAR_15->dev = VAR_12;
 VAR_15->ops.tx_msg = VAR_11;
 VAR_15->ops.shim_dbg = VAR_9;
 VAR_15->ops.tx_data_copy = VAR_10;
 VAR_15->ops.reply_msg_match = VAR_8;
 VAR_15->ops.is_dsp_busy = VAR_7;
 VAR_15->tx_data_max_size = VAR_5;
 VAR_15->rx_data_max_size = VAR_5;

 VAR_18 = FUNC_15(VAR_15);
 if (VAR_18 != 0)
  goto ipc_init_err;

 FUNC_0(&VAR_14->stream_list);
 FUNC_5(&VAR_14->boot_wait);
 VAR_6.thread_context = VAR_14;


 VAR_14->dsp = FUNC_10(VAR_12, &VAR_6, VAR_13);
 if (VAR_14->dsp == ((void*)0)) {
  VAR_18 = -VAR_1;
  goto dsp_new_err;
 }

 VAR_15->dsp = VAR_14->dsp;


 FUNC_11(VAR_14->dsp);

 VAR_16 = FUNC_13(VAR_14->dsp, VAR_13->fw, VAR_14);
 if (VAR_16 == ((void*)0)) {
  VAR_18 = -VAR_1;
  FUNC_2(VAR_12, "error: failed to load firmware\n");
  goto fw_err;
 }


 FUNC_7(VAR_14->dsp);
 VAR_18 = FUNC_16(VAR_14->boot_wait, VAR_14->boot_complete,
     FUNC_6(VAR_4));
 if (VAR_18 == 0) {
  VAR_18 = -VAR_0;
  FUNC_2(VAR_14->dev, "ipc: error DSP boot timeout\n");
  goto boot_err;
 }


 FUNC_9(VAR_14->dsp, &VAR_17, sizeof(VAR_17));
 FUNC_3(VAR_14->dev, "FW version: %02x.%02x.%02x.%02x\n",
   VAR_17.fw_version.major, VAR_17.fw_version.minor,
   VAR_17.fw_version.build, VAR_17.fw_version.type);
 FUNC_3(VAR_14->dev, "Build type: %x\n", VAR_17.fw_version.type);
 FUNC_3(VAR_14->dev, "Build date: %s %s\n",
   VAR_17.build_info.date, VAR_17.build_info.time);

 VAR_13->dsp = VAR_14;
 VAR_14->fw = VAR_16;

 return 0;

boot_err:
 FUNC_11(VAR_14->dsp);
 FUNC_12(VAR_16);
fw_err:
 FUNC_8(VAR_14->dsp);
dsp_new_err:
 FUNC_14(VAR_15);
ipc_init_err:

 return VAR_18;
}
