
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct ak5386_priv {int reset_gpio; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct ak5386_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0,
       struct snd_pcm_hw_params *VAR_1,
       struct snd_soc_dai *VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_2->component;
 struct ak5386_priv *VAR_4 = FUNC_2(VAR_3);
 if (FUNC_0(VAR_4->reset_gpio))
  FUNC_1(VAR_4->reset_gpio, 1);

 return 0;
}
