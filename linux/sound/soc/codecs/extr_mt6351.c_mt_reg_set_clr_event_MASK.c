
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int reg; int shift; int off_val; int on_val; int dapm; } ;
struct snd_soc_component {int regmap; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (int ,int,int,int) ;
 struct snd_soc_component* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_1,
    struct snd_kcontrol *VAR_2,
    int VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_1(VAR_1->dapm);

 switch (VAR_3) {
 case 129:
  if (VAR_1->on_val) {

   FUNC_0(VAR_4->regmap,
        VAR_1->reg + VAR_0,
        0x1 << VAR_1->shift,
        0x1 << VAR_1->shift);
  } else {

   FUNC_0(VAR_4->regmap,
        VAR_1->reg + VAR_0 * 2,
        0x1 << VAR_1->shift,
        0x1 << VAR_1->shift);
  }
  break;
 case 128:
  if (VAR_1->off_val) {

   FUNC_0(VAR_4->regmap,
        VAR_1->reg + VAR_0,
        0x1 << VAR_1->shift,
        0x1 << VAR_1->shift);
  } else {

   FUNC_0(VAR_4->regmap,
        VAR_1->reg + VAR_0 * 2,
        0x1 << VAR_1->shift,
        0x1 << VAR_1->shift);
  }
  break;
 default:
  break;
 }

 return 0;
}
