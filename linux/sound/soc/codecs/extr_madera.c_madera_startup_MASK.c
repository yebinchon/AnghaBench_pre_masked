
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int runtime; } ;
struct madera_priv {unsigned int sysclk; unsigned int asyncclk; struct madera* madera; struct madera_dai_priv* dai; } ;
struct TYPE_2__ {int mask; } ;
struct madera_dai_priv {int clk; TYPE_1__ constraint; } ;
struct madera {int type; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,TYPE_1__*) ;
 struct madera_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_7,
     struct snd_soc_dai *VAR_8)
{
 struct snd_soc_component *VAR_9 = VAR_8->component;
 struct madera_priv *VAR_10 = FUNC_1(VAR_9);
 struct madera_dai_priv *VAR_11 = &VAR_10->dai[VAR_8->id - 1];
 struct madera *VAR_12 = VAR_10->madera;
 unsigned int VAR_13;

 if (!VAR_7->runtime)
  return 0;

 switch (VAR_11->clk) {
 case 130:
 case 129:
 case 128:
  VAR_13 = VAR_10->sysclk;
  break;
 case 132:
 case 131:
  VAR_13 = VAR_10->asyncclk;
  break;
 default:
  return 0;
 }

 switch (VAR_12->type) {
 case 135:
 case 134:
 case 133:
  if (VAR_13 == 0)
   VAR_11->constraint.mask = VAR_5;
  else if (VAR_13 % 4000)
   VAR_11->constraint.mask = VAR_3;
  else
   VAR_11->constraint.mask = VAR_4;
  break;
 default:
  if (VAR_13 == 0)
   VAR_11->constraint.mask = VAR_2;
  else if (VAR_13 % 4000)
   VAR_11->constraint.mask = VAR_0;
  else
   VAR_11->constraint.mask = VAR_1;
  break;
 }

 return FUNC_0(VAR_7->runtime, 0,
       VAR_6,
       &VAR_11->constraint);
}
