
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_module_runtime_context {int buffer; int dma_buffer; } ;
struct sst_module_runtime {scalar_t__ persistent_offset; int id; struct sst_module* module; struct sst_dsp* dsp; } ;
struct sst_module {int persistent_size; } ;
struct TYPE_2__ {scalar_t__ lpe; scalar_t__ lpe_base; } ;
struct sst_dsp {int mutex; TYPE_1__ addr; int dev; scalar_t__ fw_use_dma; int dma_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,scalar_t__,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sst_dsp*,int ,scalar_t__,int ) ;
 int FUNC_6 (struct sst_dsp*,int ) ;
 int FUNC_7 (struct sst_dsp*) ;
 int FUNC_8 (int ,scalar_t__,int ) ;

int FUNC_9(struct sst_module_runtime *VAR_3,
 struct sst_module_runtime_context *VAR_4)
{
 struct sst_dsp *VAR_5 = VAR_3->dsp;
 struct sst_module *VAR_6 = VAR_3->module;
 int VAR_7 = 0;

 FUNC_0(VAR_5->dev, "saving runtime %d memory at 0x%x size 0x%x\n",
  VAR_3->id, VAR_3->persistent_offset,
  VAR_6->persistent_size);

 VAR_4->buffer = FUNC_2(VAR_5->dma_dev,
  VAR_6->persistent_size,
  &VAR_4->dma_buffer, VAR_1 | VAR_2);
 if (!VAR_4->buffer) {
  FUNC_1(VAR_5->dev, "error: DMA context alloc failed\n");
  return -VAR_0;
 }

 FUNC_3(&VAR_5->mutex);

 if (VAR_5->fw_use_dma) {

  VAR_7 = FUNC_6(VAR_5, 0);
  if (VAR_7 < 0)
   goto err;

  VAR_7 = FUNC_5(VAR_5, VAR_4->dma_buffer,
   VAR_5->addr.lpe_base + VAR_3->persistent_offset,
   VAR_6->persistent_size);
  FUNC_7(VAR_5);
  if (VAR_7 < 0) {
   FUNC_1(VAR_5->dev, "error: context copy failed\n");
   goto err;
  }
 } else
  FUNC_8(VAR_4->buffer, VAR_5->addr.lpe +
   VAR_3->persistent_offset,
   VAR_6->persistent_size);

err:
 FUNC_4(&VAR_5->mutex);
 return VAR_7;
}
