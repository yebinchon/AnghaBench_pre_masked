
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_module_runtime_context {int * buffer; int dma_buffer; } ;
struct sst_module_runtime {scalar_t__ persistent_offset; int id; struct sst_module* module; struct sst_dsp* dsp; } ;
struct sst_module {int persistent_size; } ;
struct TYPE_2__ {scalar_t__ lpe; scalar_t__ lpe_base; } ;
struct sst_dsp {int mutex; int dma_dev; TYPE_1__ addr; int dev; scalar_t__ fw_use_dma; } ;


 int FUNC_0 (int ,char*,int ,scalar_t__,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sst_dsp*,scalar_t__,int ,int ) ;
 int FUNC_7 (struct sst_dsp*,int ) ;
 int FUNC_8 (struct sst_dsp*) ;
 int FUNC_9 (scalar_t__,int *,int ) ;

int FUNC_10(struct sst_module_runtime *VAR_0,
 struct sst_module_runtime_context *VAR_1)
{
 struct sst_dsp *VAR_2 = VAR_0->dsp;
 struct sst_module *VAR_3 = VAR_0->module;
 int VAR_4 = 0;

 FUNC_0(VAR_2->dev, "restoring runtime %d memory at 0x%x size 0x%x\n",
  VAR_0->id, VAR_0->persistent_offset,
  VAR_3->persistent_size);

 FUNC_4(&VAR_2->mutex);

 if (!VAR_1->buffer) {
  FUNC_2(VAR_2->dev, "no context buffer need to restore!\n");
  goto err;
 }

 if (VAR_2->fw_use_dma) {

  VAR_4 = FUNC_7(VAR_2, 0);
  if (VAR_4 < 0)
   goto err;

  VAR_4 = FUNC_6(VAR_2,
   VAR_2->addr.lpe_base + VAR_0->persistent_offset,
   VAR_1->dma_buffer, VAR_3->persistent_size);
  FUNC_8(VAR_2);
  if (VAR_4 < 0) {
   FUNC_1(VAR_2->dev, "error: module copy failed\n");
   goto err;
  }
 } else
  FUNC_9(VAR_2->addr.lpe + VAR_0->persistent_offset,
   VAR_1->buffer, VAR_3->persistent_size);

 FUNC_3(VAR_2->dma_dev, VAR_3->persistent_size,
    VAR_1->buffer, VAR_1->dma_buffer);
 VAR_1->buffer = ((void*)0);

err:
 FUNC_5(&VAR_2->mutex);
 return VAR_4;
}
