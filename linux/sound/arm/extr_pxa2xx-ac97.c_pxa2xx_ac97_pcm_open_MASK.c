
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; TYPE_4__* pcm; struct snd_pcm_runtime* runtime; } ;
struct TYPE_7__ {int channels_min; int channels_max; int rates; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct TYPE_11__ {int (* startup ) (struct snd_pcm_substream*,int ) ;int priv; } ;
typedef TYPE_5__ pxa2xx_audio_ops_t ;
struct TYPE_12__ {int * rates; } ;
struct TYPE_10__ {TYPE_3__* card; } ;
struct TYPE_9__ {TYPE_2__* dev; } ;
struct TYPE_8__ {TYPE_5__* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_6__* VAR_3 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_runtime*) ;
 int FUNC_3 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = VAR_4->runtime;
 pxa2xx_audio_ops_t *VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_1(VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_5->hw.channels_min = 2;
 VAR_5->hw.channels_max = 2;

 VAR_8 = (VAR_4->stream == VAR_2) ?
  VAR_1 : VAR_0;
 VAR_5->hw.rates = VAR_3->rates[VAR_8];
 FUNC_2(VAR_5);

 VAR_6 = VAR_4->pcm->card->dev->platform_data;
 if (VAR_6 && VAR_6->startup) {
  VAR_7 = VAR_6->startup(VAR_4, VAR_6->priv);
  if (VAR_7 < 0)
   FUNC_0(VAR_4);
 }

 return VAR_7;
}
