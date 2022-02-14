
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {size_t id; int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct q6afe_tdm_cfg {int sync_mode; int sync_src; int data_align_type; int num_channels; int sample_rate; int bit_width; } ;
struct q6afe_dai_data {TYPE_2__* priv; TYPE_1__* port_config; } ;
struct TYPE_4__ {int sync_mode; int sync_src; int data_align; } ;
struct TYPE_3__ {struct q6afe_tdm_cfg tdm; } ;


 struct q6afe_dai_data* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0,
      struct snd_pcm_hw_params *VAR_1,
      struct snd_soc_dai *VAR_2)
{
 struct q6afe_dai_data *VAR_3 = FUNC_0(VAR_2->dev);
 struct q6afe_tdm_cfg *VAR_4 = &VAR_3->port_config[VAR_2->id].tdm;

 VAR_4->bit_width = FUNC_3(VAR_1);
 VAR_4->sample_rate = FUNC_2(VAR_1);
 VAR_4->num_channels = FUNC_1(VAR_1);
 VAR_4->data_align_type = VAR_3->priv[VAR_2->id].data_align;
 VAR_4->sync_src = VAR_3->priv[VAR_2->id].sync_src;
 VAR_4->sync_mode = VAR_3->priv[VAR_2->id].sync_mode;

 return 0;
}
