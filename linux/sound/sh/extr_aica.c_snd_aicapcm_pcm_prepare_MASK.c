
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_3__* runtime; TYPE_1__* pcm; } ;
struct snd_card_aica {struct snd_pcm_substream* substream; TYPE_2__* channel; } ;
struct TYPE_6__ {scalar_t__ format; int rate; } ;
struct TYPE_5__ {int freq; int sfmt; } ;
struct TYPE_4__ {struct snd_card_aica* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct snd_pcm_substream
       *VAR_2)
{
 struct snd_card_aica *VAR_3 = VAR_2->pcm->private_data;
 if ((VAR_2->runtime)->format == VAR_1)
  VAR_3->channel->sfmt = VAR_0;
 VAR_3->channel->freq = VAR_2->runtime->rate;
 VAR_3->substream = VAR_2;
 return 0;
}
