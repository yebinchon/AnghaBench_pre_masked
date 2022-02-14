
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_fw {int * dma_buf; int dmable_fw_paddr; int size; int list; void* private; struct sst_dsp* dsp; } ;
struct sst_dsp {int dma_dev; scalar_t__ fw_use_dma; int mutex; int fw_list; int dev; TYPE_1__* ops; } ;
struct firmware {int size; scalar_t__ data; } ;
struct TYPE_2__ {int (* parse_fw ) (struct sst_fw*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int * FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (struct sst_fw*) ;
 struct sst_fw* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (void*,void*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct sst_dsp*,int ) ;
 int FUNC_10 (struct sst_dsp*) ;
 int FUNC_11 (struct sst_fw*) ;

struct sst_fw *FUNC_12(struct sst_dsp *VAR_1,
 const struct firmware *VAR_2, void *VAR_3)
{
 struct sst_fw *VAR_4;
 int VAR_5;

 if (!VAR_1->ops->parse_fw)
  return ((void*)0);

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_0);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_4->dsp = VAR_1;
 VAR_4->private = VAR_3;
 VAR_4->size = VAR_2->size;


 VAR_4->dma_buf = FUNC_1(VAR_1->dma_dev, VAR_4->size,
    &VAR_4->dmable_fw_paddr, VAR_0);
 if (!VAR_4->dma_buf) {
  FUNC_0(VAR_1->dev, "error: DMA alloc failed\n");
  FUNC_3(VAR_4);
  return ((void*)0);
 }


 FUNC_6((void *)VAR_4->dma_buf, (void *)VAR_2->data, VAR_2->size);

 if (VAR_1->fw_use_dma) {
  VAR_5 = FUNC_9(VAR_1, 0);
  if (VAR_5 < 0)
   goto chan_err;
 }


 VAR_5 = VAR_1->ops->parse_fw(VAR_4);
 if (VAR_5 < 0) {
  FUNC_0(VAR_1->dev, "error: parse fw failed %d\n", VAR_5);
  goto parse_err;
 }

 if (VAR_1->fw_use_dma)
  FUNC_10(VAR_1);

 FUNC_7(&VAR_1->mutex);
 FUNC_5(&VAR_4->list, &VAR_1->fw_list);
 FUNC_8(&VAR_1->mutex);

 return VAR_4;

parse_err:
 if (VAR_1->fw_use_dma)
  FUNC_10(VAR_1);
chan_err:
 FUNC_2(VAR_1->dma_dev, VAR_4->size,
    VAR_4->dma_buf,
    VAR_4->dmable_fw_paddr);
 VAR_4->dma_buf = ((void*)0);
 FUNC_3(VAR_4);
 return ((void*)0);
}
