
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int reg; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct max98095_priv {int mic2pre; int mic1pre; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 struct max98095_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_4,
        struct snd_kcontrol *VAR_5, int VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_2(VAR_4->dapm);
 struct max98095_priv *VAR_8 = FUNC_0(VAR_7);

 switch (VAR_6) {
 case 128:
  if (VAR_4->reg == VAR_1) {
   FUNC_1(VAR_7, VAR_4->reg, VAR_2,
    (1+VAR_8->mic1pre)<<VAR_3);
  } else {
   FUNC_1(VAR_7, VAR_4->reg, VAR_2,
    (1+VAR_8->mic2pre)<<VAR_3);
  }
  break;
 case 129:
  FUNC_1(VAR_7, VAR_4->reg, VAR_2, 0);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
