
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int sample_bits; int dma_addr; } ;
struct intel8x0 {scalar_t__ device_type; } ;
struct ichdev {scalar_t__ ichd; int pos_shift; int fragsize; int size; int physbuf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ichdev* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct intel8x0*,struct snd_pcm_runtime*) ;
 int FUNC_2 (struct intel8x0*,struct ichdev*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 struct intel8x0* FUNC_5 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_2)
{
 struct intel8x0 *VAR_3 = FUNC_5(VAR_2);
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 struct ichdev *VAR_5 = FUNC_0(VAR_2);

 VAR_5->physbuf = VAR_4->dma_addr;
 VAR_5->size = FUNC_3(VAR_2);
 VAR_5->fragsize = FUNC_4(VAR_2);
 if (VAR_5->ichd == VAR_1) {
  FUNC_1(VAR_3, VAR_4);
  if (VAR_3->device_type == VAR_0)
   VAR_5->pos_shift = (VAR_4->sample_bits > 16) ? 2 : 1;
 }
 FUNC_2(VAR_3, VAR_5);
 return 0;
}
