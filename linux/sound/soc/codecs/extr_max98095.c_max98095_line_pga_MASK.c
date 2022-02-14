
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dapm_widget {int shift; int reg; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct max98095_priv {int lin_state; } ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (int) ;
 struct max98095_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_1,
        int VAR_2, u8 VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_3(VAR_1->dapm);
 struct max98095_priv *VAR_5 = FUNC_1(VAR_4);
 u8 *VAR_6;

 if (FUNC_0(!(VAR_3 == 1 || VAR_3 == 2)))
  return -VAR_0;

 VAR_6 = &VAR_5->lin_state;

 switch (VAR_2) {
 case 128:
  *VAR_6 |= VAR_3;
  FUNC_2(VAR_4, VAR_1->reg,
   (1 << VAR_1->shift), (1 << VAR_1->shift));
  break;
 case 129:
  *VAR_6 &= ~VAR_3;
  if (*VAR_6 == 0) {
   FUNC_2(VAR_4, VAR_1->reg,
    (1 << VAR_1->shift), 0);
  }
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
