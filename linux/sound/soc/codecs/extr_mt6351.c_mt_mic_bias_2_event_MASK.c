
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int regmap; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,int ,int,int) ;
 struct snd_soc_component* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_3,
          struct snd_kcontrol *VAR_4,
          int VAR_5)
{
 struct snd_soc_component *VAR_6 = FUNC_1(VAR_3->dapm);

 switch (VAR_5) {
 case 128:

  FUNC_0(VAR_6->regmap, VAR_0,
       0x3 << VAR_1, 0x0);

  FUNC_0(VAR_6->regmap, VAR_0,
       0x7 << VAR_2,
       0x2 << VAR_2);
  break;
 case 129:

  FUNC_0(VAR_6->regmap, VAR_0,
       0x7 << VAR_2,
       0x0 << VAR_2);
  break;
 default:
  break;
 }
 return 0;
}
