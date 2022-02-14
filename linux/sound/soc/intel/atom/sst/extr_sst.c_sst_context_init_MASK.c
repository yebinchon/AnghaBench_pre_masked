
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct stream_info {int lock; int pipe_id; } ;
struct pm_qos_request {int dummy; } ;
struct TYPE_18__ {int max_streams; } ;
struct TYPE_13__ {scalar_t__ ipcd; scalar_t__ ipcx; } ;
struct intel_sst_drv {int pvt_id; int post_msg_wq; TYPE_5__* dev; int firmware_name; int qos; int shim; int irq_num; TYPE_4__* ops; struct stream_info* streams; TYPE_7__ info; TYPE_3__* pdata; TYPE_1__ ipc_reg; int mailbox_recv_offset; scalar_t__ use_lli; scalar_t__ use_dma; int * fw_in_mem; scalar_t__ stream_cnt; } ;
struct TYPE_17__ {int kobj; } ;
struct TYPE_16__ {int irq_thread; int interrupt; } ;
struct TYPE_15__ {TYPE_2__* ipc_info; int probe_data; } ;
struct TYPE_14__ {scalar_t__ ipc_offset; int mbox_recv_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,char*,int ) ;
 int FUNC_2 (TYPE_5__*,char*,...) ;
 int FUNC_3 (TYPE_5__*,char*,int) ;
 int FUNC_4 (TYPE_5__*,int,int ) ;
 int FUNC_5 (TYPE_5__*,int ,int ,int ,int ,int ,struct intel_sst_drv*) ;
 int FUNC_6 (TYPE_7__*,int ,int) ;
 int FUNC_7 (struct stream_info*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int,int ,TYPE_5__*,int ,struct intel_sst_drv*,int ) ;
 int FUNC_11 (struct intel_sst_drv*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (struct intel_sst_drv*) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (struct intel_sst_drv*,int ) ;
 int FUNC_15 (int ,int ,int) ;
 scalar_t__ FUNC_16 (struct intel_sst_drv*) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,int *) ;

int FUNC_19(struct intel_sst_drv *VAR_14)
{
 int VAR_15 = 0, VAR_16;

 if (!VAR_14->pdata)
  return -VAR_0;

 if (!VAR_14->pdata->probe_data)
  return -VAR_0;

 FUNC_6(&VAR_14->info, VAR_14->pdata->probe_data, sizeof(VAR_14->info));

 VAR_15 = FUNC_11(VAR_14);
 if (VAR_15 != 0)
  return -VAR_0;

 FUNC_12(VAR_14);
 FUNC_14(VAR_14, VAR_10);


 VAR_14->pvt_id = 1;
 VAR_14->stream_cnt = 0;
 VAR_14->fw_in_mem = ((void*)0);

 VAR_14->use_dma = 0;
 VAR_14->use_lli = 0;

 if (FUNC_16(VAR_14))
  return -VAR_0;

 VAR_14->mailbox_recv_offset = VAR_14->pdata->ipc_info->mbox_recv_off;
 VAR_14->ipc_reg.ipcx = VAR_9 + VAR_14->pdata->ipc_info->ipc_offset;
 VAR_14->ipc_reg.ipcd = VAR_8 + VAR_14->pdata->ipc_info->ipc_offset;

 FUNC_3(VAR_14->dev, "Got drv data max stream %d\n",
    VAR_14->info.max_streams);

 for (VAR_16 = 1; VAR_16 <= VAR_14->info.max_streams; VAR_16++) {
  struct stream_info *VAR_17 = &VAR_14->streams[VAR_16];

  FUNC_7(VAR_17, 0, sizeof(*VAR_17));
  VAR_17->pipe_id = VAR_3;
  FUNC_8(&VAR_17->lock);
 }


 VAR_15 = FUNC_5(VAR_14->dev, VAR_14->irq_num, VAR_14->ops->interrupt,
     VAR_14->ops->irq_thread, 0, VAR_6,
     VAR_14);
 if (VAR_15)
  goto do_free_mem;

 FUNC_1(VAR_14->dev, "Registered IRQ %#x\n", VAR_14->irq_num);


 FUNC_15(VAR_14->shim, VAR_7, 0xFFFF0038);

 VAR_14->qos = FUNC_4(VAR_14->dev,
  sizeof(struct pm_qos_request), VAR_2);
 if (!VAR_14->qos) {
  VAR_15 = -VAR_1;
  goto do_free_mem;
 }
 FUNC_9(VAR_14->qos, VAR_4,
    VAR_5);

 FUNC_1(VAR_14->dev, "Requesting FW %s now...\n", VAR_14->firmware_name);
 VAR_15 = FUNC_10(VAR_11, 1, VAR_14->firmware_name,
          VAR_14->dev, VAR_2, VAR_14, VAR_12);
 if (VAR_15) {
  FUNC_2(VAR_14->dev, "Firmware download failed:%d\n", VAR_15);
  goto do_free_mem;
 }

 VAR_15 = FUNC_17(&VAR_14->dev->kobj,
     &VAR_13);
 if (VAR_15) {
  FUNC_2(VAR_14->dev,
   "Unable to create sysfs\n");
  goto err_sysfs;
 }

 FUNC_13(VAR_14->dev);
 return 0;
err_sysfs:
 FUNC_18(&VAR_14->dev->kobj, &VAR_13);

do_free_mem:
 FUNC_0(VAR_14->post_msg_wq);
 return VAR_15;
}
