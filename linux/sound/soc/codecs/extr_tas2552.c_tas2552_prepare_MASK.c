
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tas2552_data {scalar_t__ dai_fmt; scalar_t__ tdm_delay; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct tas2552_data* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_3,
      struct snd_soc_dai *VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_4->component;
 struct tas2552_data *VAR_6 = FUNC_0(VAR_5);
 int VAR_7 = 0;


 if (VAR_6->dai_fmt == VAR_0)
  VAR_7 += (VAR_6->tdm_delay + 1);
 else if (VAR_6->dai_fmt == VAR_1)
  VAR_7 += VAR_6->tdm_delay;


 FUNC_1(VAR_5, VAR_2, VAR_7);

 return 0;
}
