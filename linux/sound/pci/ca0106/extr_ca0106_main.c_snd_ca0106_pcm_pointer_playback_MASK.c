
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int period_size; unsigned int buffer_size; struct snd_ca0106_pcm* private_data; } ;
struct snd_ca0106_pcm {int channel_id; int running; } ;
struct snd_ca0106 {TYPE_1__* card; } ;
typedef unsigned int snd_pcm_uframes_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct snd_pcm_runtime*,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 unsigned int FUNC_2 (struct snd_ca0106*,int ,int) ;
 struct snd_ca0106* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_4(struct snd_pcm_substream *VAR_2)
{
 struct snd_ca0106 *VAR_3 = FUNC_3(VAR_2);
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 struct snd_ca0106_pcm *VAR_5 = VAR_4->private_data;
 unsigned int VAR_6, VAR_7;
 int VAR_8 = VAR_5->channel_id;
 int VAR_9 = 10;

 if (!VAR_5->running)
  return 0;

 VAR_7 = -1;
 do {
  VAR_6 = FUNC_2(VAR_3, VAR_0, VAR_8);
  VAR_6 = (VAR_6 >> 3) * VAR_4->period_size;
  VAR_6 += FUNC_0(VAR_4,
   FUNC_2(VAR_3, VAR_1, VAR_8));
  if (VAR_6 >= VAR_4->buffer_size)
   VAR_6 -= VAR_4->buffer_size;
  if (VAR_7 == VAR_6)
   return VAR_6;
  VAR_7 = VAR_6;
 } while (--VAR_9);
 FUNC_1(VAR_3->card->dev, "ca0106: unstable DMA pointer!\n");
 return 0;
}
