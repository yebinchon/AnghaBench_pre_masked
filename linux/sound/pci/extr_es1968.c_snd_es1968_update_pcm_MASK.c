
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct esschan {unsigned int wav_shift; unsigned int dma_size; unsigned int hwptr; unsigned int count; unsigned int frag_size; int running; struct snd_pcm_substream* substream; } ;
struct es1968 {int substream_lock; } ;


 unsigned int FUNC_0 (struct es1968*,struct esschan*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct es1968 *VAR_0, struct esschan *VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3;
 struct snd_pcm_substream *VAR_4 = VAR_1->substream;

 if (VAR_4 == ((void*)0) || !VAR_1->running)
  return;

 VAR_2 = FUNC_0(VAR_0, VAR_1) << VAR_1->wav_shift;
 VAR_2 %= VAR_1->dma_size;

 VAR_3 = (VAR_1->dma_size + VAR_2 - VAR_1->hwptr) % VAR_1->dma_size;

 VAR_1->hwptr = VAR_2;
 VAR_1->count += VAR_3;

 if (VAR_1->count > VAR_1->frag_size) {
  FUNC_3(&VAR_0->substream_lock);
  FUNC_1(VAR_4);
  FUNC_2(&VAR_0->substream_lock);
  VAR_1->count %= VAR_1->frag_size;
 }
}
