
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_area; struct gus_pcm_private* private_data; } ;
struct gus_pcm_private {int dummy; } ;


 int FUNC_0 (struct gus_pcm_private*,int,unsigned long,unsigned int) ;
 int FUNC_1 (scalar_t__,void*,unsigned int) ;
 int FUNC_2 (struct snd_pcm_substream*,int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0,
         int VAR_1, unsigned long VAR_2,
         void *VAR_3, unsigned long VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = VAR_0->runtime;
 struct gus_pcm_private *VAR_6 = VAR_5->private_data;
 unsigned int VAR_7 = VAR_4;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_1, VAR_2, VAR_7);
 if (VAR_8 < 0)
  return VAR_2;
 FUNC_1(VAR_5->dma_area + VAR_8, VAR_3, VAR_7);
 return FUNC_2(VAR_0, VAR_8, VAR_7);
}
