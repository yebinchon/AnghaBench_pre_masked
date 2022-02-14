
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ buffer_size; struct snd_emu10k1_pcm* private_data; } ;
struct snd_emu10k1_pcm {int running; } ;
struct snd_emu10k1 {TYPE_1__* card; } ;
typedef scalar_t__ snd_pcm_uframes_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_pcm_runtime*,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct snd_emu10k1*,int ,int) ;
 struct snd_emu10k1* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct snd_emu10k1 *VAR_2 = FUNC_3(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct snd_emu10k1_pcm *VAR_4 = VAR_3->private_data;
 snd_pcm_uframes_t VAR_5, VAR_6, VAR_7 = 0;
 int VAR_8 = 0;

 if (!VAR_4->running)
  return 0;

 VAR_6 = FUNC_2(VAR_2, VAR_0, VAR_8);
 VAR_7 = FUNC_0(VAR_3, VAR_6);
 VAR_5=VAR_7;
 if (VAR_5 >= VAR_3->buffer_size) {
  VAR_5 -= VAR_3->buffer_size;
  FUNC_1(VAR_2->card->dev, "buffer capture limited!\n");
 }







 return VAR_5;
}
