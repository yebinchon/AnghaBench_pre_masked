
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_flags; struct snd_gf1_dma_block* dma_data_pcm_last; struct snd_gf1_dma_block* dma_data_pcm; struct snd_gf1_dma_block* dma_data_synth_last; struct snd_gf1_dma_block* dma_data_synth; } ;
struct snd_gus_card {int dma_lock; TYPE_1__ gf1; } ;
struct snd_gf1_dma_block {scalar_t__ cmd; int count; int buf_addr; int addr; struct snd_gf1_dma_block* next; scalar_t__ buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_gf1_dma_block*) ;
 struct snd_gf1_dma_block* FUNC_1 (int,int ) ;
 struct snd_gf1_dma_block* FUNC_2 (struct snd_gus_card*) ;
 int FUNC_3 (struct snd_gus_card*,int ,int ,int ,unsigned short) ;
 int FUNC_4 (char*,long,...) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct snd_gus_card * VAR_4,
          struct snd_gf1_dma_block * VAR_5,
          int VAR_6,
          int VAR_7)
{
 unsigned long VAR_8;
 struct snd_gf1_dma_block *VAR_9;

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_6 ? VAR_1 : VAR_2);
 if (!VAR_9)
  return -VAR_0;

 *VAR_9 = *VAR_5;
 VAR_9->next = ((void*)0);

 FUNC_4("addr = 0x%x, buffer = 0x%lx, count = 0x%x, cmd = 0x%x\n",
      VAR_9->addr, (long) VAR_9->buffer, VAR_9->count,
      VAR_9->cmd);

 FUNC_4("gus->gf1.dma_data_pcm_last = 0x%lx\n",
      (long)VAR_4->gf1.dma_data_pcm_last);
 FUNC_4("gus->gf1.dma_data_pcm = 0x%lx\n",
      (long)VAR_4->gf1.dma_data_pcm);

 FUNC_5(&VAR_4->dma_lock, VAR_8);
 if (VAR_7) {
  if (VAR_4->gf1.dma_data_synth_last) {
   VAR_4->gf1.dma_data_synth_last->next = VAR_9;
   VAR_4->gf1.dma_data_synth_last = VAR_9;
  } else {
   VAR_4->gf1.dma_data_synth =
   VAR_4->gf1.dma_data_synth_last = VAR_9;
  }
 } else {
  if (VAR_4->gf1.dma_data_pcm_last) {
   VAR_4->gf1.dma_data_pcm_last->next = VAR_9;
   VAR_4->gf1.dma_data_pcm_last = VAR_9;
  } else {
   VAR_4->gf1.dma_data_pcm =
   VAR_4->gf1.dma_data_pcm_last = VAR_9;
  }
 }
 if (!(VAR_4->gf1.dma_flags & VAR_3)) {
  VAR_4->gf1.dma_flags |= VAR_3;
  VAR_9 = FUNC_2(VAR_4);
  FUNC_6(&VAR_4->dma_lock, VAR_8);
  if (VAR_9 == ((void*)0))
   return 0;
  FUNC_3(VAR_4, VAR_9->addr, VAR_9->buf_addr, VAR_9->count, (unsigned short) VAR_9->cmd);
  FUNC_0(VAR_9);
  return 0;
 }
 FUNC_6(&VAR_4->dma_lock, VAR_8);
 return 0;
}
