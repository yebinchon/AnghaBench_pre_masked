
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {scalar_t__ max; scalar_t__ min; } ;
struct asoc_simple_data {scalar_t__ convert_channels; scalar_t__ convert_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;

void FUNC_1(struct asoc_simple_data *VAR_2,
          struct snd_pcm_hw_params *VAR_3)
{
 struct snd_interval *VAR_4 = FUNC_0(VAR_3,
      VAR_1);
 struct snd_interval *VAR_5 = FUNC_0(VAR_3,
      VAR_0);

 if (VAR_2->convert_rate)
  VAR_4->min =
  VAR_4->max = VAR_2->convert_rate;

 if (VAR_2->convert_channels)
  VAR_5->min =
  VAR_5->max = VAR_2->convert_channels;
}
