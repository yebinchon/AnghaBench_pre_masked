
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int buffer_size; int dma_area; } ;
struct aw2_pcm_device {int stream_number; struct aw2* chip; } ;
struct aw2 {int saa7146; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (struct snd_pcm_runtime*,unsigned int) ;
 unsigned int FUNC_1 (int *,int ,int ,int ) ;
 struct aw2_pcm_device* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream
           *VAR_0)
{
 struct aw2_pcm_device *VAR_1 = FUNC_2(VAR_0);
 struct aw2 *VAR_2 = VAR_1->chip;
 unsigned int VAR_3;


 struct snd_pcm_runtime *VAR_4 = VAR_0->runtime;
 VAR_3 =
  FUNC_1(&VAR_2->saa7146,
         VAR_1->stream_number,
         VAR_4->dma_area,
         VAR_4->buffer_size);

 return FUNC_0(VAR_0->runtime, VAR_3);
}
