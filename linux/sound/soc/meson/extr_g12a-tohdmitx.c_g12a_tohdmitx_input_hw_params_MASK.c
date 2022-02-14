
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_dai {TYPE_3__* driver; struct g12a_tohdmitx_input* playback_dma_data; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_4__ {int formats; int sig_bits; void* channels_max; void* channels_min; void* rate_max; void* rate_min; int rates; } ;
struct g12a_tohdmitx_input {TYPE_1__ params; } ;
struct TYPE_5__ {int sig_bits; } ;
struct TYPE_6__ {TYPE_2__ playback; } ;


 void* FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 void* FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0,
      struct snd_pcm_hw_params *VAR_1,
      struct snd_soc_dai *VAR_2)
{
 struct g12a_tohdmitx_input *VAR_3 = VAR_2->playback_dma_data;

 VAR_3->params.rates = FUNC_3(FUNC_2(VAR_1));
 VAR_3->params.rate_min = FUNC_2(VAR_1);
 VAR_3->params.rate_max = FUNC_2(VAR_1);
 VAR_3->params.formats = 1 << FUNC_1(VAR_1);
 VAR_3->params.channels_min = FUNC_0(VAR_1);
 VAR_3->params.channels_max = FUNC_0(VAR_1);
 VAR_3->params.sig_bits = VAR_2->driver->playback.sig_bits;

 return 0;
}
