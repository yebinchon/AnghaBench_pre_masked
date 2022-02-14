
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct da7219_priv {int gain_ramp_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;




 struct da7219_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_2,
      struct snd_kcontrol *VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_3(VAR_2->dapm);
 struct da7219_priv *VAR_6 = FUNC_0(VAR_5);

 switch (VAR_4) {
 case 128:
 case 129:

  VAR_6->gain_ramp_ctrl =
   FUNC_1(VAR_5, VAR_0);
  FUNC_2(VAR_5, VAR_0,
         VAR_1);
  break;
 case 130:
 case 131:

  FUNC_2(VAR_5, VAR_0,
         VAR_6->gain_ramp_ctrl);
  break;
 }

 return 0;
}
