
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_mixer_control {int reg; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_ctl_elem_value {int dummy; } ;
struct mt6358_priv {unsigned int* ana_gain; int regmap; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;





 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 int FUNC_0 (int ,int const,unsigned int*) ;
 struct mt6358_priv* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_22,
       struct snd_ctl_elem_value *VAR_23)
{
 struct snd_soc_component *VAR_24 =
   FUNC_2(VAR_22);
 struct mt6358_priv *VAR_25 = FUNC_1(VAR_24);
 struct soc_mixer_control *VAR_26 =
   (struct soc_mixer_control *)VAR_22->private_value;
 unsigned int VAR_27;
 int VAR_28;

 VAR_28 = FUNC_3(VAR_22, VAR_23);
 if (VAR_28 < 0)
  return VAR_28;

 switch (VAR_26->reg) {
 case 129:
  FUNC_0(VAR_25->regmap, 129, &VAR_27);
  VAR_25->ana_gain[VAR_0] =
   (VAR_27 >> VAR_9) & VAR_8;
  VAR_25->ana_gain[VAR_1] =
   (VAR_27 >> VAR_11) & VAR_10;
  break;
 case 130:
  FUNC_0(VAR_25->regmap, 130, &VAR_27);
  VAR_25->ana_gain[VAR_4] =
   (VAR_27 >> VAR_15) & VAR_14;
  VAR_25->ana_gain[VAR_5] =
   (VAR_27 >> VAR_17) & VAR_16;
  break;
 case 128:
  FUNC_0(VAR_25->regmap, 128, &VAR_27);
  VAR_25->ana_gain[VAR_2] =
   (VAR_27 >> VAR_13) & VAR_12;
  VAR_25->ana_gain[VAR_3] =
   (VAR_27 >> VAR_13) & VAR_12;
  break;
 case 132:
 case 131:
  FUNC_0(VAR_25->regmap, 132, &VAR_27);
  VAR_25->ana_gain[VAR_6] =
   (VAR_27 >> VAR_19) & VAR_18;
  FUNC_0(VAR_25->regmap, 131, &VAR_27);
  VAR_25->ana_gain[VAR_7] =
   (VAR_27 >> VAR_21) & VAR_20;
  break;
 }

 return VAR_28;
}
