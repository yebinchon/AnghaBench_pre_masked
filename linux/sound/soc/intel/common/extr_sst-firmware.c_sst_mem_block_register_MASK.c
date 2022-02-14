
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct sst_mem_block {int type; int list; struct sst_block_ops const* ops; void* private; struct sst_dsp* dsp; void* index; void* size; void* offset; } ;
struct sst_dsp {int mutex; int free_block_list; } ;
struct sst_block_ops {int dummy; } ;
typedef enum sst_mem_type { ____Placeholder_sst_mem_type } sst_mem_type ;


 int VAR_0 ;
 struct sst_mem_block* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct sst_mem_block *FUNC_4(struct sst_dsp *VAR_1, u32 VAR_2,
 u32 VAR_3, enum sst_mem_type VAR_4, const struct sst_block_ops *VAR_5,
 u32 VAR_6, void *VAR_7)
{
 struct sst_mem_block *VAR_8;

 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_0);
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_8->offset = VAR_2;
 VAR_8->size = VAR_3;
 VAR_8->index = VAR_6;
 VAR_8->type = VAR_4;
 VAR_8->dsp = VAR_1;
 VAR_8->private = VAR_7;
 VAR_8->ops = VAR_5;

 FUNC_2(&VAR_1->mutex);
 FUNC_1(&VAR_8->list, &VAR_1->free_block_list);
 FUNC_3(&VAR_1->mutex);

 return VAR_8;
}
