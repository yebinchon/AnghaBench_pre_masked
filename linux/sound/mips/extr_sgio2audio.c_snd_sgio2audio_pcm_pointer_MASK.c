
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_sgio2audio_chan {size_t idx; } ;
struct snd_sgio2audio {TYPE_1__* channel; } ;
struct snd_pcm_substream {TYPE_2__* runtime; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_4__ {struct snd_sgio2audio_chan* private_data; } ;
struct TYPE_3__ {int pos; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 struct snd_sgio2audio* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_sgio2audio *VAR_1 = FUNC_1(VAR_0);
 struct snd_sgio2audio_chan *VAR_2 = VAR_0->runtime->private_data;


 return FUNC_0(VAR_0->runtime,
          VAR_1->channel[VAR_2->idx].pos);
}
