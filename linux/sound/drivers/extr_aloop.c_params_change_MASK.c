
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int rate; int format; struct loopback_pcm* private_data; } ;
struct loopback_pcm {struct loopback_cable* cable; } ;
struct TYPE_2__ {int channels_max; int channels_min; int rate_max; int rate_min; int formats; } ;
struct loopback_cable {TYPE_1__ hw; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct loopback_pcm *VAR_2 = VAR_1->private_data;
 struct loopback_cable *VAR_3 = VAR_2->cable;

 VAR_3->hw.formats = FUNC_0(VAR_1->format);
 VAR_3->hw.rate_min = VAR_1->rate;
 VAR_3->hw.rate_max = VAR_1->rate;
 VAR_3->hw.channels_min = VAR_1->channels;
 VAR_3->hw.channels_max = VAR_1->channels;
}
