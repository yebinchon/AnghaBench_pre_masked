
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stream_info {scalar_t__ resume_status; scalar_t__ status; int resume_prev; int prev; } ;
struct sst_fw_save {int ddr; int iram; int dram; int sram; } ;
struct sst_block {int dummy; } ;
struct TYPE_6__ {int max_streams; } ;
struct intel_sst_drv {int dev; struct stream_info* streams; TYPE_3__ info; TYPE_2__* pdata; TYPE_1__* ops; scalar_t__ ddr_base; scalar_t__ ddr_end; int ddr; int mailbox; scalar_t__ dram_base; scalar_t__ dram_end; int dram; scalar_t__ iram_base; scalar_t__ iram_end; int iram; struct sst_fw_save* fw_save; } ;
struct device {int dummy; } ;
struct TYPE_5__ {scalar_t__ streams_lost_on_suspend; } ;
struct TYPE_4__ {int (* start ) (struct intel_sst_drv*) ;int (* reset ) (struct intel_sst_drv*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,int,scalar_t__,int ) ;
 int FUNC_1 (int ,char*,int) ;
 struct intel_sst_drv* FUNC_2 (struct device*) ;
 int FUNC_3 (struct sst_fw_save*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 struct sst_block* FUNC_6 (struct intel_sst_drv*,int ,int ) ;
 int FUNC_7 (struct intel_sst_drv*,struct sst_block*) ;
 int FUNC_8 (struct intel_sst_drv*,int) ;
 int FUNC_9 (struct intel_sst_drv*,int ) ;
 int FUNC_10 (struct intel_sst_drv*,struct sst_block*) ;
 int FUNC_11 (struct intel_sst_drv*) ;
 int FUNC_12 (struct intel_sst_drv*) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_7)
{
 struct intel_sst_drv *VAR_8 = FUNC_2(VAR_7);
 struct sst_fw_save *VAR_9 = VAR_8->fw_save;
 struct sst_block *VAR_10;
 int VAR_11, VAR_12 = 0;

 if (!VAR_9)
  return 0;

 FUNC_9(VAR_8, VAR_3);


 VAR_8->ops->reset(VAR_8);

 VAR_8->fw_save = ((void*)0);

 FUNC_5(VAR_8->iram, VAR_9->iram, VAR_8->iram_end - VAR_8->iram_base);
 FUNC_5(VAR_8->dram, VAR_9->dram, VAR_8->dram_end - VAR_8->dram_base);
 FUNC_5(VAR_8->mailbox, VAR_9->sram, VAR_5);
 FUNC_5(VAR_8->ddr, VAR_9->ddr, VAR_8->ddr_end - VAR_8->ddr_base);

 FUNC_4(VAR_9->sram);
 FUNC_4(VAR_9->dram);
 FUNC_4(VAR_9->iram);
 FUNC_4(VAR_9->ddr);
 FUNC_3(VAR_9);

 VAR_10 = FUNC_6(VAR_8, 0, VAR_2);
 if (VAR_10 == ((void*)0))
  return -VAR_1;



 VAR_8->ops->start(VAR_8);
 VAR_12 = FUNC_10(VAR_8, VAR_10);
 if (VAR_12) {
  FUNC_1(VAR_8->dev, "fw download failed %d\n", VAR_12);

  VAR_12 = -VAR_0;

 } else {
  FUNC_9(VAR_8, VAR_4);
 }

 if (VAR_8->pdata->streams_lost_on_suspend) {
  for (VAR_11 = 1; VAR_11 <= VAR_8->info.max_streams; VAR_11++) {
   struct stream_info *VAR_13 = &VAR_8->streams[VAR_11];

   if (VAR_13->resume_status != VAR_6) {
    FUNC_0(VAR_8->dev, "Re-allocing stream %d status %d prev %d\n",
     VAR_11, VAR_13->resume_status,
     VAR_13->resume_prev);
    FUNC_8(VAR_8, VAR_11);
    VAR_13->status = VAR_13->resume_status;
    VAR_13->prev = VAR_13->resume_prev;
   }
  }
 }

 FUNC_7(VAR_8, VAR_10);
 return VAR_12;
}
