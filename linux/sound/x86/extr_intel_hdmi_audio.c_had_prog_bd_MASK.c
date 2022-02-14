
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_intelhad {int bd_head; int pcmbuf_filled; int period_bytes; int num_bds; } ;
struct TYPE_2__ {int dma_addr; int periods; int no_period_wakeup; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct snd_intelhad*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_substream *VAR_2,
   struct snd_intelhad *VAR_3)
{
 int VAR_4 = VAR_3->bd_head;
 int VAR_5 = VAR_3->pcmbuf_filled * VAR_3->period_bytes;
 u32 VAR_6 = VAR_2->runtime->dma_addr + VAR_5;

 VAR_6 |= VAR_1;
 if (!VAR_2->runtime->no_period_wakeup)
  VAR_6 |= VAR_0;
 FUNC_2(VAR_3, FUNC_0(VAR_4), VAR_6);
 FUNC_2(VAR_3, FUNC_1(VAR_4),
      VAR_3->period_bytes);


 VAR_3->bd_head++;
 VAR_3->bd_head %= VAR_3->num_bds;
 VAR_3->pcmbuf_filled++;
 VAR_3->pcmbuf_filled %= VAR_2->runtime->periods;
}
