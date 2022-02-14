
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_util_memhdr {int block_mutex; } ;
struct snd_util_memblk {int dummy; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_bytes; scalar_t__ period_size; scalar_t__ buffer_size; } ;
struct snd_emu10k1_memblk {int first_page; int last_page; int map_locked; } ;
struct TYPE_3__ {int addr; } ;
struct snd_emu10k1 {int delay_pcm_irq; int ** page_ptr_table; int * page_addr_table; TYPE_2__* card; TYPE_1__ silent_page; struct snd_util_memhdr* memhdr; scalar_t__ address_mode; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_util_memhdr*,struct snd_util_memblk*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_emu10k1*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct snd_emu10k1_memblk* FUNC_5 (struct snd_emu10k1*,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct snd_emu10k1*,struct snd_emu10k1_memblk*) ;
 int FUNC_8 (struct snd_pcm_substream*,unsigned long) ;

struct snd_util_memblk *
FUNC_9(struct snd_emu10k1 *VAR_4, struct snd_pcm_substream *VAR_5)
{
 struct snd_pcm_runtime *VAR_6 = VAR_5->runtime;
 struct snd_util_memhdr *VAR_7;
 struct snd_emu10k1_memblk *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 if (FUNC_6(!VAR_4))
  return ((void*)0);
 if (FUNC_6(VAR_6->dma_bytes <= 0 ||
         VAR_6->dma_bytes >= (VAR_4->address_mode ? VAR_2 : VAR_1) * VAR_0))
  return ((void*)0);
 VAR_7 = VAR_4->memhdr;
 if (FUNC_6(!VAR_7))
  return ((void*)0);

 VAR_11 = VAR_6->period_size >= VAR_6->buffer_size ?
     (VAR_4->delay_pcm_irq * 2) : 0;
 FUNC_3(&VAR_7->block_mutex);
 VAR_8 = FUNC_5(VAR_4, VAR_6->dma_bytes + VAR_11);
 if (VAR_8 == ((void*)0)) {
  FUNC_4(&VAR_7->block_mutex);
  return ((void*)0);
 }



 VAR_11 = 0;
 for (VAR_9 = VAR_8->first_page; VAR_9 <= VAR_8->last_page; VAR_9++, VAR_11++) {
  unsigned long VAR_12 = VAR_11 << VAR_3;
  dma_addr_t VAR_13;
  if (VAR_12 >= VAR_6->dma_bytes)
   VAR_13 = VAR_4->silent_page.addr;
  else
   VAR_13 = FUNC_8(VAR_5, VAR_12);
  if (! FUNC_2(VAR_4, VAR_13)) {
   FUNC_1(VAR_4->card->dev,
    "emu: failure page = %d\n", VAR_11);
   FUNC_4(&VAR_7->block_mutex);
   return ((void*)0);
  }
  VAR_4->page_addr_table[VAR_9] = VAR_13;
  VAR_4->page_ptr_table[VAR_9] = ((void*)0);
 }


 VAR_8->map_locked = 1;
 VAR_10 = FUNC_7(VAR_4, VAR_8);
 if (VAR_10 < 0) {
  FUNC_0(VAR_7, (struct snd_util_memblk *)VAR_8);
  FUNC_4(&VAR_7->block_mutex);
  return ((void*)0);
 }
 FUNC_4(&VAR_7->block_mutex);
 return (struct snd_util_memblk *)VAR_8;
}
