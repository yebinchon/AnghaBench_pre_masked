
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_es18xx {int active; int dma1_shift; int dma1; } ;
typedef int snd_pcm_uframes_t ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (struct snd_pcm_substream*) ;
 struct snd_es18xx* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_1)
{
        struct snd_es18xx *VAR_2 = FUNC_2(VAR_1);
 unsigned int VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

        if (!(VAR_2->active & VAR_0))
                return 0;
 VAR_4 = FUNC_0(VAR_2->dma1, VAR_3);
 return VAR_4 >> VAR_2->dma1_shift;
}
