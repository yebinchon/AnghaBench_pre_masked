
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ number; } ;
struct snd_es18xx {int caps; int active; int dma2_shift; int dma1_shift; int dma1; int dma2; } ;
typedef int snd_pcm_uframes_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (struct snd_pcm_substream*) ;
 struct snd_es18xx* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_3)
{
        struct snd_es18xx *VAR_4 = FUNC_2(VAR_3);
 unsigned int VAR_5 = FUNC_1(VAR_3);
 int VAR_6;

 if (VAR_3->number == 0 && (VAR_4->caps & VAR_2)) {
  if (!(VAR_4->active & VAR_1))
   return 0;
  VAR_6 = FUNC_0(VAR_4->dma2, VAR_5);
  return VAR_6 >> VAR_4->dma2_shift;
 } else {
  if (!(VAR_4->active & VAR_0))
   return 0;
  VAR_6 = FUNC_0(VAR_4->dma1, VAR_5);
  return VAR_6 >> VAR_4->dma1_shift;
 }
}
