
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int reg; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct max98090_priv {unsigned int pa1en; unsigned int pa2en; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;


 struct max98090_priv* FUNC_0 (struct snd_soc_component*) ;
 unsigned int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_6,
     struct snd_kcontrol *VAR_7, int VAR_8)
{
 struct snd_soc_component *VAR_9 = FUNC_3(VAR_6->dapm);
 struct max98090_priv *VAR_10 = FUNC_0(VAR_9);

 unsigned int VAR_11 = FUNC_1(VAR_9, VAR_6->reg);

 if (VAR_6->reg == VAR_5)
  VAR_11 = (VAR_11 & VAR_1) >> VAR_2;
 else
  VAR_11 = (VAR_11 & VAR_3) >> VAR_4;

 if (VAR_11 >= 1) {
  if (VAR_6->reg == VAR_5) {
   VAR_10->pa1en = VAR_11 - 1;
  } else {
   VAR_10->pa2en = VAR_11 - 1;
  }
 }

 switch (VAR_8) {
 case 128:

  if (VAR_6->reg == VAR_5)
   VAR_11 = VAR_10->pa1en + 1;
  else
   VAR_11 = VAR_10->pa2en + 1;
  break;
 case 129:

  VAR_11 = 0;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_6->reg == VAR_5)
  FUNC_2(VAR_9, VAR_6->reg, VAR_1,
   VAR_11 << VAR_2);
 else
  FUNC_2(VAR_9, VAR_6->reg, VAR_3,
   VAR_11 << VAR_4);

 return 0;
}
