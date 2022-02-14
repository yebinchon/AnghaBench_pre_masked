
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int runtime; } ;
struct arizona_priv {unsigned int sysclk; unsigned int asyncclk; struct arizona_dai_priv* dai; } ;
struct TYPE_2__ {int mask; } ;
struct arizona_dai_priv {int clk; TYPE_1__ constraint; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,TYPE_1__*) ;
 struct arizona_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_4,
      struct snd_soc_dai *VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_5->component;
 struct arizona_priv *VAR_7 = FUNC_1(VAR_6);
 struct arizona_dai_priv *VAR_8 = &VAR_7->dai[VAR_5->id - 1];
 unsigned int VAR_9;

 if (!VAR_4->runtime)
  return 0;

 switch (VAR_8->clk) {
 case 128:
  VAR_9 = VAR_7->sysclk;
  break;
 case 129:
  VAR_9 = VAR_7->asyncclk;
  break;
 default:
  return 0;
 }

 if (VAR_9 == 0)
  VAR_8->constraint.mask = VAR_2;
 else if (VAR_9 % 8000)
  VAR_8->constraint.mask = VAR_0;
 else
  VAR_8->constraint.mask = VAR_1;

 return FUNC_0(VAR_4->runtime, 0,
       VAR_3,
       &VAR_8->constraint);
}
