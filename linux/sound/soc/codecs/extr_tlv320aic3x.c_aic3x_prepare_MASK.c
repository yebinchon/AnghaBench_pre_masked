
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct aic3x_priv {int slot_width; scalar_t__ dai_fmt; int tdm_delay; } ;
struct TYPE_2__ {int sample_bits; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct aic3x_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_3,
    struct snd_soc_dai *VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_4->component;
 struct aic3x_priv *VAR_6 = FUNC_0(VAR_5);
 int VAR_7 = 0;
 int VAR_8 = VAR_6->slot_width;

 if (!VAR_8)
  VAR_8 = VAR_3->runtime->sample_bits;


 if (VAR_6->dai_fmt == VAR_1)
  VAR_7 += (VAR_6->tdm_delay*VAR_8 + 1);
 else if (VAR_6->dai_fmt == VAR_2)
  VAR_7 += VAR_6->tdm_delay*VAR_8;


 FUNC_1(VAR_5, VAR_0, VAR_7);

 return 0;
}
