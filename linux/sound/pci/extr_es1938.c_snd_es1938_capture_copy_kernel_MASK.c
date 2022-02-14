
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned char* dma_area; } ;
struct es1938 {unsigned long dma1_size; } ;


 int VAR_0 ;
 int FUNC_0 (void*,unsigned char*,unsigned long) ;
 scalar_t__ FUNC_1 (int) ;
 struct es1938* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1,
       int VAR_2, unsigned long VAR_3,
       void *VAR_4, unsigned long VAR_5)
{
 struct snd_pcm_runtime *VAR_6 = VAR_1->runtime;
 struct es1938 *VAR_7 = FUNC_2(VAR_1);

 if (FUNC_1(VAR_3 + VAR_5 > VAR_7->dma1_size))
  return -VAR_0;
 if (VAR_3 + VAR_5 < VAR_7->dma1_size) {
  FUNC_0(VAR_4, VAR_6->dma_area + VAR_3 + 1, VAR_5);
 } else {
  FUNC_0(VAR_4, VAR_6->dma_area + VAR_3 + 1, VAR_5 - 1);
  VAR_6->dma_area[0] = *((unsigned char *)VAR_4 + VAR_5 - 1);
 }
 return 0;
}
