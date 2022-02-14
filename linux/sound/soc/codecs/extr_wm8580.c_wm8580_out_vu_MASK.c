
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8580_priv {int regmap; } ;
struct soc_mixer_control {unsigned int reg; unsigned int rreg; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_ctl_elem_value {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,unsigned int,int,int) ;
 struct wm8580_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,unsigned int,int,int) ;
 struct snd_soc_component* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_0,
    struct snd_ctl_elem_value *VAR_1)
{
 struct soc_mixer_control *VAR_2 =
  (struct soc_mixer_control *)VAR_0->private_value;
 struct snd_soc_component *VAR_3 = FUNC_4(VAR_0);
 struct wm8580_priv *VAR_4 = FUNC_2(VAR_3);
 unsigned int VAR_5 = VAR_2->reg;
 unsigned int VAR_6 = VAR_2->rreg;
 int VAR_7;


 FUNC_0(VAR_4->regmap, 1);
 FUNC_1(VAR_4->regmap, VAR_5, 0x100, 0x000);
 FUNC_1(VAR_4->regmap, VAR_6, 0x100, 0x000);
 FUNC_0(VAR_4->regmap, 0);

 VAR_7 = FUNC_5(VAR_0, VAR_1);
 if (VAR_7 < 0)
  return VAR_7;


 FUNC_3(VAR_3, VAR_5, 0x100, 0x100);
 FUNC_3(VAR_3, VAR_6, 0x100, 0x100);

 return 0;
}
