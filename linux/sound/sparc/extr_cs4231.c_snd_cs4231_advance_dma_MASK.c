
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int periods; scalar_t__ dma_addr; } ;
struct cs4231_dma_control {scalar_t__ (* request ) (struct cs4231_dma_control*,scalar_t__,unsigned int) ;} ;


 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_2 (struct cs4231_dma_control*,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct cs4231_dma_control *VAR_0,
       struct snd_pcm_substream *VAR_1,
       unsigned int *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;

 while (1) {
  unsigned int VAR_4 = FUNC_1(VAR_1);
  unsigned int VAR_5 = VAR_4 * (*VAR_2);

  if (FUNC_0(VAR_4 >= (1 << 24)))
   return;

  if (VAR_0->request(VAR_0,
          VAR_3->dma_addr + VAR_5, VAR_4))
   return;
  (*VAR_2) = ((*VAR_2) + 1) % VAR_3->periods;
 }
}
