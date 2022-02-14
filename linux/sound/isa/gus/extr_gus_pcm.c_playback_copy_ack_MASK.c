
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_area; int format; struct gus_pcm_private* private_data; } ;
struct snd_gus_card {int dummy; } ;
struct gus_pcm_private {scalar_t__ memory; struct snd_gus_card* gus; } ;


 int FUNC_0 (struct snd_pcm_substream*,unsigned int,scalar_t__,unsigned int) ;
 int FUNC_1 (struct snd_gus_card*,scalar_t__,scalar_t__,unsigned int,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0,
        unsigned int VAR_1, unsigned int VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_0->runtime;
 struct gus_pcm_private *VAR_4 = VAR_3->private_data;
 struct snd_gus_card *VAR_5 = VAR_4->gus;
 int VAR_6, VAR_7;

 if (VAR_2 > 32)
  return FUNC_0(VAR_0, VAR_1,
      VAR_4->memory + VAR_1, VAR_2);

 VAR_6 = (FUNC_3(VAR_3->format) == 16);
 VAR_7 = FUNC_2(VAR_3->format);
 return FUNC_1(VAR_5, VAR_3->dma_area + VAR_1,
          VAR_4->memory + VAR_1, VAR_2, VAR_6, VAR_7);
}
