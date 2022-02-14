
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_4__ {int period_bytes_max; int buffer_bytes_max; } ;
struct snd_pcm_runtime {TYPE_2__ hw; } ;
struct TYPE_3__ {int dma2; int interrupt_handler_dma_read; } ;
struct snd_gus_card {TYPE_1__ gf1; struct snd_pcm_substream* pcm_cap_substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int ,int *) ;
 int FUNC_1 (int ,int *) ;
 struct snd_gus_card* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = VAR_4->runtime;
 struct snd_gus_card *VAR_6 = FUNC_2(VAR_4);

 VAR_6->gf1.interrupt_handler_dma_read = VAR_3;
 VAR_6->pcm_cap_substream = VAR_4;
 VAR_4->runtime->hw = VAR_2;
 FUNC_1(VAR_6->gf1.dma2, &VAR_5->hw.buffer_bytes_max);
 FUNC_1(VAR_6->gf1.dma2, &VAR_5->hw.period_bytes_max);
 FUNC_0(VAR_5, 0, VAR_0,
          &VAR_1);
 return 0;
}
