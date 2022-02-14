
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_stream {int channels_min; } ;
struct snd_soc_dai {TYPE_1__* driver; } ;
struct TYPE_2__ {struct snd_soc_pcm_stream capture; struct snd_soc_pcm_stream playback; } ;


 int VAR_0 ;

bool FUNC_0(struct snd_soc_dai *VAR_1, int VAR_2)
{
 struct snd_soc_pcm_stream *VAR_3;

 if (VAR_2 == VAR_0)
  VAR_3 = &VAR_1->driver->playback;
 else
  VAR_3 = &VAR_1->driver->capture;


 return VAR_3->channels_min;
}
