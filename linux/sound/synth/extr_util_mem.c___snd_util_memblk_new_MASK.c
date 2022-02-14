
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct snd_util_memhdr {unsigned int used; int nblocks; struct list_head block; scalar_t__ block_extra_size; } ;
struct snd_util_memblk {unsigned int offset; unsigned int size; int list; } ;


 int VAR_0 ;
 struct snd_util_memblk* FUNC_0 (struct list_head*) ;
 struct snd_util_memblk* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,struct list_head*) ;

struct snd_util_memblk *
FUNC_3(struct snd_util_memhdr *VAR_1, unsigned int VAR_2,
        struct list_head *VAR_3)
{
 struct snd_util_memblk *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct snd_util_memblk) + VAR_1->block_extra_size,
        VAR_0);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 if (VAR_3 == &VAR_1->block)
  VAR_4->offset = 0;
 else {
  struct snd_util_memblk *VAR_5 = FUNC_0(VAR_3);
  VAR_4->offset = VAR_5->offset + VAR_5->size;
 }
 VAR_4->size = VAR_2;
 FUNC_2(&VAR_4->list, VAR_3);
 VAR_1->nblocks++;
 VAR_1->used += VAR_2;
 return VAR_4;
}
