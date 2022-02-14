
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stream_info {scalar_t__ status; scalar_t__ resume_status; int prev; int resume_prev; } ;
struct sst_fw_save {void* iram; void* dram; void* sram; void* ddr; } ;
struct TYPE_4__ {int max_streams; } ;
struct intel_sst_drv {scalar_t__ sst_state; TYPE_3__* ops; struct sst_fw_save* fw_save; scalar_t__ ddr_base; scalar_t__ ddr_end; int ddr; int mailbox; scalar_t__ dram_base; scalar_t__ dram_end; int dram; scalar_t__ iram_base; scalar_t__ iram_end; int iram; int post_msg_wq; int irq_num; TYPE_2__* pdata; struct stream_info* streams; TYPE_1__ info; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int (* reset ) (struct intel_sst_drv*) ;scalar_t__ (* save_dsp_context ) (struct intel_sst_drv*) ;} ;
struct TYPE_5__ {scalar_t__ streams_lost_on_suspend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct intel_sst_drv* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sst_fw_save*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (scalar_t__,int ) ;
 struct sst_fw_save* FUNC_6 (int,int ) ;
 int FUNC_7 (void*,int ,scalar_t__) ;
 int FUNC_8 (struct intel_sst_drv*,int) ;
 int FUNC_9 (struct intel_sst_drv*,scalar_t__) ;
 scalar_t__ FUNC_10 (struct intel_sst_drv*) ;
 int FUNC_11 (struct intel_sst_drv*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_7)
{
 struct intel_sst_drv *VAR_8 = FUNC_1(VAR_7);
 struct sst_fw_save *VAR_9;
 int VAR_10, VAR_11 = 0;


 if (VAR_8->sst_state == VAR_4)
  return 0;





 for (VAR_10 = 1; VAR_10 <= VAR_8->info.max_streams; VAR_10++) {
  struct stream_info *VAR_12 = &VAR_8->streams[VAR_10];

  if (VAR_12->status == VAR_5) {
   FUNC_0(VAR_7, "stream %d is running, can't suspend, abort\n", VAR_10);
   return -VAR_0;
  }

  if (VAR_8->pdata->streams_lost_on_suspend) {
   VAR_12->resume_status = VAR_12->status;
   VAR_12->resume_prev = VAR_12->prev;
   if (VAR_12->status != VAR_6)
    FUNC_8(VAR_8, VAR_10);
  }
 }
 FUNC_12(VAR_8->irq_num);
 FUNC_2(VAR_8->post_msg_wq);


 FUNC_9(VAR_8, VAR_4);


 if (VAR_8->ops->save_dsp_context(VAR_8))
  return -VAR_0;


 VAR_9 = FUNC_6(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;
 VAR_9->iram = FUNC_5(VAR_8->iram_end - VAR_8->iram_base, VAR_2);
 if (!VAR_9->iram) {
  VAR_11 = -VAR_1;
  goto iram;
 }
 VAR_9->dram = FUNC_5(VAR_8->dram_end - VAR_8->dram_base, VAR_2);
 if (!VAR_9->dram) {
  VAR_11 = -VAR_1;
  goto dram;
 }
 VAR_9->sram = FUNC_5(VAR_3, VAR_2);
 if (!VAR_9->sram) {
  VAR_11 = -VAR_1;
  goto sram;
 }

 VAR_9->ddr = FUNC_5(VAR_8->ddr_end - VAR_8->ddr_base, VAR_2);
 if (!VAR_9->ddr) {
  VAR_11 = -VAR_1;
  goto ddr;
 }

 FUNC_7(VAR_9->iram, VAR_8->iram, VAR_8->iram_end - VAR_8->iram_base);
 FUNC_7(VAR_9->dram, VAR_8->dram, VAR_8->dram_end - VAR_8->dram_base);
 FUNC_7(VAR_9->sram, VAR_8->mailbox, VAR_3);
 FUNC_7(VAR_9->ddr, VAR_8->ddr, VAR_8->ddr_end - VAR_8->ddr_base);

 VAR_8->fw_save = VAR_9;
 VAR_8->ops->reset(VAR_8);
 return 0;
ddr:
 FUNC_4(VAR_9->sram);
sram:
 FUNC_4(VAR_9->dram);
dram:
 FUNC_4(VAR_9->iram);
iram:
 FUNC_3(VAR_9);
 return VAR_11;
}
