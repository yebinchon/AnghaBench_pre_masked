
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct sst_pdata {struct sst_hsw* dsp; } ;
struct sst_hsw_ipc_fw_version {int dummy; } ;
struct TYPE_11__ {int is_dsp_busy; int reply_msg_match; int tx_data_copy; int shim_dbg; int tx_msg; } ;
struct sst_generic_ipc {TYPE_2__* dsp; void* rx_data_max_size; void* tx_data_max_size; TYPE_1__ ops; struct device* dev; } ;
struct sst_hsw {TYPE_2__* dsp; int dx_context_paddr; int * dx_context; struct device* dev; int boot_complete; int boot_wait; int stream_list; struct sst_generic_ipc ipc; } ;
struct device {int dummy; } ;
struct TYPE_13__ {struct sst_hsw* thread_context; } ;
struct TYPE_12__ {int dma_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct sst_hsw* FUNC_3 (struct device*,int,int ) ;
 int * FUNC_4 (int ,int ,int *,int ) ;
 int FUNC_5 (int ,int ,int *,int ) ;
 TYPE_6__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 TYPE_2__* FUNC_11 (struct device*,TYPE_6__*,struct sst_pdata*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,int ) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (struct sst_hsw*,struct sst_hsw_ipc_fw_version*) ;
 int FUNC_16 (struct sst_hsw*) ;
 int FUNC_17 (struct sst_hsw*) ;
 int FUNC_18 (struct sst_hsw*,int ,int ,char*) ;
 int FUNC_19 (struct sst_hsw*) ;
 int FUNC_20 (struct sst_generic_ipc*) ;
 int FUNC_21 (struct sst_generic_ipc*) ;
 int FUNC_22 (int ,int ,int ) ;

int FUNC_23(struct device *VAR_17, struct sst_pdata *VAR_18)
{
 struct sst_hsw_ipc_fw_version VAR_19;
 struct sst_hsw *VAR_20;
 struct sst_generic_ipc *VAR_21;
 int VAR_22;

 FUNC_1(VAR_17, "initialising Audio DSP IPC\n");

 VAR_20 = FUNC_3(VAR_17, sizeof(*VAR_20), VAR_3);
 if (VAR_20 == ((void*)0))
  return -VAR_2;

 VAR_20->dev = VAR_17;

 VAR_21 = &VAR_20->ipc;
 VAR_21->dev = VAR_17;
 VAR_21->ops.tx_msg = VAR_16;
 VAR_21->ops.shim_dbg = VAR_14;
 VAR_21->ops.tx_data_copy = VAR_15;
 VAR_21->ops.reply_msg_match = VAR_13;
 VAR_21->ops.is_dsp_busy = VAR_12;

 VAR_21->tx_data_max_size = VAR_5;
 VAR_21->rx_data_max_size = VAR_5;

 VAR_22 = FUNC_21(VAR_21);
 if (VAR_22 != 0)
  goto ipc_init_err;

 FUNC_0(&VAR_20->stream_list);
 FUNC_6(&VAR_20->boot_wait);
 VAR_11.thread_context = VAR_20;


 VAR_20->dsp = FUNC_11(VAR_17, &VAR_11, VAR_18);
 if (VAR_20->dsp == ((void*)0)) {
  VAR_22 = -VAR_1;
  goto dsp_new_err;
 }

 VAR_21->dsp = VAR_20->dsp;


 VAR_20->dx_context = FUNC_4(VAR_20->dsp->dma_dev,
  VAR_6, &VAR_20->dx_context_paddr, VAR_3);
 if (VAR_20->dx_context == ((void*)0)) {
  VAR_22 = -VAR_2;
  goto dma_err;
 }


 FUNC_12(VAR_20->dsp);


 VAR_22 = FUNC_18(VAR_20, VAR_7, 0, "Base");
 if (VAR_22 < 0)
  goto fw_err;


 FUNC_18(VAR_20, VAR_8, 0, "intel/IntcPP01.bin");


 VAR_22 = FUNC_8(VAR_20->dsp);
 if (VAR_22 < 0)
  goto boot_err;


 FUNC_19(VAR_20);


 FUNC_9(VAR_20->dsp);
 VAR_22 = FUNC_22(VAR_20->boot_wait, VAR_20->boot_complete,
  FUNC_7(VAR_4));
 if (VAR_22 == 0) {
  VAR_22 = -VAR_0;
  FUNC_2(VAR_20->dev, "error: audio DSP boot timeout IPCD 0x%x IPCX 0x%x\n",
   FUNC_13(VAR_20->dsp, VAR_9),
   FUNC_13(VAR_20->dsp, VAR_10));
  goto boot_err;
 }


 FUNC_16(VAR_20);


 FUNC_15(VAR_20, &VAR_19);


 VAR_22 = FUNC_17(VAR_20);
 if (VAR_22 < 0) {
  FUNC_2(VAR_20->dev, "error: failed to get stream info\n");
  goto boot_err;
 }

 VAR_18->dsp = VAR_20;
 return 0;

boot_err:
 FUNC_12(VAR_20->dsp);
 FUNC_14(VAR_20->dsp);
fw_err:
 FUNC_5(VAR_20->dsp->dma_dev, VAR_6,
   VAR_20->dx_context, VAR_20->dx_context_paddr);
dma_err:
 FUNC_10(VAR_20->dsp);
dsp_new_err:
 FUNC_20(VAR_21);
ipc_init_err:
 return VAR_22;
}
