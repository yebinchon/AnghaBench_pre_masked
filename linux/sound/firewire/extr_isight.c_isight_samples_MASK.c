
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_runtime {unsigned int buffer_size; scalar_t__ dma_area; } ;
struct isight {unsigned int buffer_pointer; TYPE_1__* pcm; int pcm_running; } ;
typedef int __be16 ;
struct TYPE_2__ {struct snd_pcm_runtime* runtime; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct isight*,unsigned int) ;
 int FUNC_2 (scalar_t__,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct isight *VAR_0,
      const __be16 *VAR_1, unsigned int VAR_2)
{
 struct snd_pcm_runtime *VAR_3;
 unsigned int VAR_4;

 if (!FUNC_0(VAR_0->pcm_running))
  return;

 VAR_3 = VAR_0->pcm->runtime;
 if (VAR_0->buffer_pointer + VAR_2 <= VAR_3->buffer_size) {
  FUNC_2(VAR_3->dma_area + VAR_0->buffer_pointer * 4,
         VAR_1, VAR_2 * 4);
 } else {
  VAR_4 = VAR_3->buffer_size - VAR_0->buffer_pointer;
  FUNC_2(VAR_3->dma_area + VAR_0->buffer_pointer * 4,
         VAR_1, VAR_4 * 4);
  VAR_1 += VAR_4 * 2;
  FUNC_2(VAR_3->dma_area, VAR_1, (VAR_2 - VAR_4) * 4);
 }

 FUNC_1(VAR_0, VAR_2);
}
