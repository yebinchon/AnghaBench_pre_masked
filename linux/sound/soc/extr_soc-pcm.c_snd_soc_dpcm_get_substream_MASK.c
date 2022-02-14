
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* pcm; } ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_4__ {TYPE_1__* streams; } ;
struct TYPE_3__ {struct snd_pcm_substream* substream; } ;



struct snd_pcm_substream *
 FUNC_0(struct snd_soc_pcm_runtime *VAR_0, int VAR_1)
{
 return VAR_0->pcm->streams[VAR_1].substream;
}
