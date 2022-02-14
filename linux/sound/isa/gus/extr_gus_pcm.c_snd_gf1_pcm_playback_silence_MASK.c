
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_area; int format; struct gus_pcm_private* private_data; } ;
struct gus_pcm_private {int dummy; } ;


 int FUNC_0 (struct snd_pcm_runtime*,unsigned long) ;
 int FUNC_1 (struct gus_pcm_private*,int,unsigned long,unsigned int) ;
 int FUNC_2 (struct snd_pcm_substream*,int,unsigned int) ;
 int FUNC_3 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0,
     int VAR_1, unsigned long VAR_2,
     unsigned long VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_0->runtime;
 struct gus_pcm_private *VAR_5 = VAR_4->private_data;
 unsigned int VAR_6 = VAR_3;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_1, VAR_2, VAR_6);
 if (VAR_7 < 0)
  return VAR_2;
 FUNC_3(VAR_4->format, VAR_4->dma_area + VAR_7,
       FUNC_0(VAR_4, VAR_3));
 return FUNC_2(VAR_0, VAR_7, VAR_6);
}
