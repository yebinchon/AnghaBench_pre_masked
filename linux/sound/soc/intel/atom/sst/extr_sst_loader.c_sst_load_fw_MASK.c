
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_block {int dummy; } ;
struct intel_sst_drv {scalar_t__ sst_state; TYPE_1__* ops; int dev; int qos; int memcpy_list; int fw_in_mem; } ;
struct TYPE_2__ {int (* reset ) (struct intel_sst_drv*) ;int (* start ) (struct intel_sst_drv*) ;int (* restore_dsp_context ) () ;int (* post_download ) (struct intel_sst_drv*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ) ;
 struct sst_block* FUNC_3 (struct intel_sst_drv*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct intel_sst_drv*,struct sst_block*) ;
 int FUNC_6 (struct intel_sst_drv*) ;
 int FUNC_7 (struct intel_sst_drv*,struct sst_block*) ;
 int FUNC_8 (struct intel_sst_drv*) ;
 int FUNC_9 (struct intel_sst_drv*) ;
 int FUNC_10 (struct intel_sst_drv*) ;
 int FUNC_11 () ;

int FUNC_12(struct intel_sst_drv *VAR_9)
{
 int VAR_10 = 0;
 struct sst_block *VAR_11;

 FUNC_0(VAR_9->dev, "sst_load_fw\n");

 if (VAR_9->sst_state != VAR_7 ||
   VAR_9->sst_state == VAR_8)
  return -VAR_0;

 if (!VAR_9->fw_in_mem) {
  FUNC_0(VAR_9->dev, "sst: FW not in memory retry to download\n");
  VAR_10 = FUNC_6(VAR_9);
  if (VAR_10)
   return VAR_10;
 }

 VAR_11 = FUNC_3(VAR_9, 0, VAR_3);
 if (VAR_11 == ((void*)0))
  return -VAR_2;


 FUNC_2(VAR_9->qos, 0);

 VAR_9->sst_state = VAR_5;

 VAR_10 = VAR_9->ops->reset(VAR_9);
 if (VAR_10)
  goto restore;

 FUNC_4(&VAR_9->memcpy_list);


 if (VAR_9->ops->post_download)
  VAR_9->ops->post_download(VAR_9);


 VAR_10 = VAR_9->ops->start(VAR_9);
 if (VAR_10)
  goto restore;

 VAR_10 = FUNC_7(VAR_9, VAR_11);
 if (VAR_10) {
  FUNC_1(VAR_9->dev, "fw download failed %d\n" , VAR_10);

  VAR_10 = -VAR_1;

 }


restore:

 FUNC_2(VAR_9->qos, VAR_4);
 FUNC_5(VAR_9, VAR_11);
 FUNC_0(VAR_9->dev, "fw load successful!!!\n");

 if (VAR_9->ops->restore_dsp_context)
  VAR_9->ops->restore_dsp_context();
 VAR_9->sst_state = VAR_6;
 return VAR_10;
}
