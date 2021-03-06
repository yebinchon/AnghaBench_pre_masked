
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* card; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_4__ {int formats; int channels_max; int channels_min; } ;
struct snd_pcm_runtime {TYPE_2__ hw; } ;
struct TYPE_3__ {int name; } ;


 int QUAD_CHANNEL ;
 int SNDRV_PCM_FMTBIT_S24_LE ;
 int SNDRV_PCM_HW_PARAM_CHANNELS ;
 int SNDRV_PCM_HW_PARAM_RATE ;
 int constraints_channels_quad ;
 int constraints_rates ;
 int snd_pcm_hw_constraint_list (struct snd_pcm_runtime*,int ,int ,int *) ;
 int snd_pcm_hw_constraint_msbits (struct snd_pcm_runtime*,int ,int,int) ;
 int strcmp (int ,char*) ;

__attribute__((used)) static int kabylake_dmic_startup(struct snd_pcm_substream *substream)
{
 struct snd_pcm_runtime *runtime = substream->runtime;
 struct snd_soc_pcm_runtime *soc_rt = substream->private_data;

 runtime->hw.channels_min = runtime->hw.channels_max = QUAD_CHANNEL;
 snd_pcm_hw_constraint_list(runtime, 0, SNDRV_PCM_HW_PARAM_CHANNELS,
   &constraints_channels_quad);






 if (!strcmp(soc_rt->card->name, "kblda7219m98373") ||
  !strcmp(soc_rt->card->name, "kblmax98373")) {
  runtime->hw.formats = SNDRV_PCM_FMTBIT_S24_LE;
  snd_pcm_hw_constraint_msbits(runtime, 0, 32, 24);
 }

 return snd_pcm_hw_constraint_list(substream->runtime, 0,
   SNDRV_PCM_HW_PARAM_RATE, &constraints_rates);
}
