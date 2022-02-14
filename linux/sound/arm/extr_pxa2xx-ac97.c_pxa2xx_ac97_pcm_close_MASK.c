
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_3__* pcm; } ;
struct TYPE_8__ {int priv; int (* shutdown ) (struct snd_pcm_substream*,int ) ;} ;
typedef TYPE_4__ pxa2xx_audio_ops_t ;
struct TYPE_7__ {TYPE_2__* card; } ;
struct TYPE_6__ {TYPE_1__* dev; } ;
struct TYPE_5__ {TYPE_4__* platform_data; } ;


 int FUNC_0 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 pxa2xx_audio_ops_t *VAR_1;

 VAR_1 = VAR_0->pcm->card->dev->platform_data;
 if (VAR_1 && VAR_1->shutdown)
  VAR_1->shutdown(VAR_0, VAR_1->priv);

 return 0;
}
