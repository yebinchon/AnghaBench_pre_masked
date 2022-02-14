
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_ca0106_pcm* private_data; } ;
struct snd_ca0106_pcm {size_t channel_id; } ;
struct snd_ca0106 {TYPE_1__* playback_channels; } ;
struct TYPE_2__ {scalar_t__ use; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct snd_ca0106*,size_t) ;
 int FUNC_1 (struct snd_ca0106*,size_t,int ) ;
 struct snd_ca0106* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct snd_ca0106 *VAR_2 = FUNC_2(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
        struct snd_ca0106_pcm *VAR_4 = VAR_3->private_data;
 VAR_2->playback_channels[VAR_4->channel_id].use = 0;

 FUNC_0(VAR_2, VAR_4->channel_id);


 if (VAR_4->channel_id != VAR_0) {
  int VAR_5;
  VAR_5 = FUNC_1(VAR_2, VAR_4->channel_id, 0);
  if (VAR_5 < 0)
   return VAR_5;
 }


 return 0;
}
