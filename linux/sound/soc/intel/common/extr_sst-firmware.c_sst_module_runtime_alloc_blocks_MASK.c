
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_module_runtime {int persistent_offset; int block_list; struct sst_module* module; struct sst_dsp* dsp; } ;
struct sst_module {scalar_t__ persistent_size; int block_list; } ;
struct sst_dsp {int mutex; int dev; } ;
struct sst_block_allocator {scalar_t__ size; int offset; int type; } ;
typedef int ba ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sst_dsp*,struct sst_block_allocator*,int *) ;
 int FUNC_1 (struct sst_dsp*,struct sst_block_allocator*,int *) ;
 int FUNC_2 (struct sst_dsp*,int *) ;
 int FUNC_3 (struct sst_dsp*,int *) ;
 int FUNC_4 (int ,char*,scalar_t__,int ,...) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct sst_block_allocator*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct sst_module_runtime *VAR_2,
 int VAR_3)
{
 struct sst_dsp *VAR_4 = VAR_2->dsp;
 struct sst_module *VAR_5 = VAR_2->module;
 struct sst_block_allocator VAR_6;
 int VAR_7;

 if (VAR_5->persistent_size == 0)
  return 0;

 FUNC_6(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.size = VAR_5->persistent_size;
 VAR_6.type = VAR_1;

 FUNC_7(&VAR_4->mutex);


 if (VAR_3 != 0) {

  VAR_6.offset = VAR_3;

  FUNC_4(VAR_4->dev, "persistent fixed block request 0x%x bytes type %d offset 0x%x\n",
   VAR_6.size, VAR_6.type, VAR_6.offset);


  VAR_7 = FUNC_1(VAR_4, &VAR_6, &VAR_2->block_list);

 } else {
  FUNC_4(VAR_4->dev, "persistent block request 0x%x bytes type %d\n",
   VAR_6.size, VAR_6.type);


  VAR_7 = FUNC_0(VAR_4, &VAR_6, &VAR_2->block_list);
 }
 if (VAR_7 < 0) {
  FUNC_5(VAR_4->dev,
  "error: no free blocks for runtime module size 0x%x\n",
   VAR_5->persistent_size);
  FUNC_8(&VAR_4->mutex);
  return -VAR_0;
 }
 VAR_2->persistent_offset = VAR_6.offset;


 VAR_7 = FUNC_2(VAR_4, &VAR_2->block_list);
 if (VAR_7 < 0) {
  FUNC_5(VAR_4->dev, "error: runtime block prepare failed\n");
  goto err;
 }

 FUNC_8(&VAR_4->mutex);
 return VAR_7;

err:
 FUNC_3(VAR_4, &VAR_5->block_list);
 FUNC_8(&VAR_4->mutex);
 return VAR_7;
}
