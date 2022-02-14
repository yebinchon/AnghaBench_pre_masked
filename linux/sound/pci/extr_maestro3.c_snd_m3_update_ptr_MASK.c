
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_m3 {int reg_lock; } ;
struct m3_dma {unsigned int dma_size; unsigned int hwptr; int count; int period_size; int running; struct snd_pcm_substream* substream; } ;


 unsigned int FUNC_0 (struct snd_m3*,struct m3_dma*,struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct snd_m3 *VAR_0, struct m3_dma *VAR_1)
{
 struct snd_pcm_substream *VAR_2 = VAR_1->substream;
 unsigned int VAR_3;
 int VAR_4;

 if (! VAR_1->running)
  return;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);


 if (VAR_3 >= VAR_1->dma_size)
  VAR_3 %= VAR_1->dma_size;

 VAR_4 = VAR_1->dma_size + VAR_3 - VAR_1->hwptr;
 if (VAR_4 >= VAR_1->dma_size)
  VAR_4 %= VAR_1->dma_size;

 VAR_1->hwptr = VAR_3;
 VAR_1->count += VAR_4;

 if (VAR_1->count >= (signed)VAR_1->period_size) {

  if (VAR_1->count < 2 * (signed)VAR_1->period_size)
   VAR_1->count -= (signed)VAR_1->period_size;
  else
   VAR_1->count %= VAR_1->period_size;

  FUNC_3(&VAR_0->reg_lock);
  FUNC_1(VAR_2);
  FUNC_2(&VAR_0->reg_lock);
 }
}
