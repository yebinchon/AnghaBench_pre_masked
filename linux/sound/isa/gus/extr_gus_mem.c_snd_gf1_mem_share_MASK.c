
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_gf1_mem_block {int share_id; struct snd_gf1_mem_block* next; } ;
struct snd_gf1_mem {struct snd_gf1_mem_block* first; } ;


 int memcmp (unsigned int*,int ,int) ;

__attribute__((used)) static struct snd_gf1_mem_block *snd_gf1_mem_share(struct snd_gf1_mem * alloc,
           unsigned int *share_id)
{
 struct snd_gf1_mem_block *block;

 if (!share_id[0] && !share_id[1] &&
     !share_id[2] && !share_id[3])
  return ((void*)0);
 for (block = alloc->first; block; block = block->next)
  if (!memcmp(share_id, block->share_id,
    sizeof(block->share_id)))
   return block;
 return ((void*)0);
}
