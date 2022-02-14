
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_module {int block_list; int size; int data; scalar_t__ offset; scalar_t__ data_offset; int type; struct sst_fw* sst_fw; struct sst_dsp* dsp; } ;
struct sst_fw {scalar_t__ dmable_fw_paddr; } ;
struct TYPE_2__ {scalar_t__ lpe; scalar_t__ lpe_base; } ;
struct sst_dsp {int mutex; TYPE_1__ addr; int dev; scalar_t__ fw_use_dma; } ;
struct sst_block_allocator {int type; scalar_t__ offset; int size; } ;
typedef int ba ;


 int VAR_0 ;
 int FUNC_0 (struct sst_dsp*,struct sst_block_allocator*,int *) ;
 int FUNC_1 (struct sst_dsp*,int *) ;
 int FUNC_2 (struct sst_dsp*,int *) ;
 int FUNC_3 (int ,char*,int ,scalar_t__,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct sst_block_allocator*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sst_dsp*,scalar_t__,scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,int ,int ) ;

int FUNC_10(struct sst_module *VAR_1)
{
 struct sst_dsp *VAR_2 = VAR_1->dsp;
 struct sst_fw *VAR_3 = VAR_1->sst_fw;
 struct sst_block_allocator VAR_4;
 int VAR_5;

 FUNC_5(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.size = VAR_1->size;
 VAR_4.type = VAR_1->type;
 VAR_4.offset = VAR_1->offset;

 FUNC_3(VAR_2->dev, "block request 0x%x bytes at offset 0x%x type %d\n",
  VAR_4.size, VAR_4.offset, VAR_4.type);

 FUNC_6(&VAR_2->mutex);


 VAR_5 = FUNC_0(VAR_2, &VAR_4, &VAR_1->block_list);
 if (VAR_5 < 0) {
  FUNC_4(VAR_2->dev,
   "error: no free blocks for section at offset 0x%x size 0x%x\n",
   VAR_1->offset, VAR_1->size);
  FUNC_7(&VAR_2->mutex);
  return -VAR_0;
 }


 VAR_5 = FUNC_1(VAR_2, &VAR_1->block_list);
 if (VAR_5 < 0) {
  FUNC_4(VAR_2->dev, "error: fw module prepare failed\n");
  goto err;
 }


 if (VAR_2->fw_use_dma) {
  VAR_5 = FUNC_8(VAR_2,
   VAR_2->addr.lpe_base + VAR_1->offset,
   VAR_3->dmable_fw_paddr + VAR_1->data_offset,
   VAR_1->size);
  if (VAR_5 < 0) {
   FUNC_4(VAR_2->dev, "error: module copy failed\n");
   goto err;
  }
 } else
  FUNC_9(VAR_2->addr.lpe + VAR_1->offset, VAR_1->data,
   VAR_1->size);

 FUNC_7(&VAR_2->mutex);
 return VAR_5;

err:
 FUNC_2(VAR_2, &VAR_1->block_list);
 FUNC_7(&VAR_2->mutex);
 return VAR_5;
}
