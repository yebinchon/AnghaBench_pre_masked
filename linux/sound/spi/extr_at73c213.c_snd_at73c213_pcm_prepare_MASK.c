
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {long period_size; long channels; scalar_t__ dma_addr; } ;
struct snd_at73c213 {TYPE_1__* ssc; scalar_t__ period; } ;
struct TYPE_2__ {int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_runtime*,long) ;
 struct snd_at73c213* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int ,int ,long) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4)
{
 struct snd_at73c213 *VAR_5 = FUNC_1(VAR_4);
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_6->period_size);

 VAR_5->period = 0;

 FUNC_2(VAR_5->ssc->regs, VAR_3,
   (long)VAR_6->dma_addr);
 FUNC_2(VAR_5->ssc->regs, VAR_0,
   VAR_6->period_size * VAR_6->channels);
 FUNC_2(VAR_5->ssc->regs, VAR_2,
   (long)VAR_6->dma_addr + VAR_7);
 FUNC_2(VAR_5->ssc->regs, VAR_1,
   VAR_6->period_size * VAR_6->channels);

 return 0;
}
