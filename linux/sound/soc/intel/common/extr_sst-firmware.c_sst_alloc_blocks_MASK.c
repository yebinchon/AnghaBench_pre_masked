
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_dsp {int mutex; int dev; } ;
struct sst_block_allocator {int type; int offset; int size; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct sst_dsp*,struct sst_block_allocator*,struct list_head*) ;
 int FUNC_1 (struct sst_dsp*,struct list_head*) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct sst_dsp *VAR_0, struct sst_block_allocator *VAR_1,
 struct list_head *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_0->dev, "block request 0x%x bytes at offset 0x%x type %d\n",
  VAR_1->size, VAR_1->offset, VAR_1->type);

 FUNC_4(&VAR_0->mutex);

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 < 0) {
  FUNC_3(VAR_0->dev, "error: can't alloc blocks %d\n", VAR_3);
  goto out;
 }


 VAR_3 = FUNC_1(VAR_0, VAR_2);
 if (VAR_3 < 0)
  FUNC_3(VAR_0->dev, "error: prepare failed\n");

out:
 FUNC_5(&VAR_0->mutex);
 return VAR_3;
}
