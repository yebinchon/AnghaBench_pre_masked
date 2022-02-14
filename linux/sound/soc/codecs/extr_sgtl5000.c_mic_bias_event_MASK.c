
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct sgtl5000_priv {int micbias_resistor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 struct sgtl5000_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_3,
 struct snd_kcontrol *VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = FUNC_2(VAR_3->dapm);
 struct sgtl5000_priv *VAR_7 = FUNC_0(VAR_6);

 switch (VAR_5) {
 case 129:

  FUNC_1(VAR_6, VAR_2,
   VAR_0,
   VAR_7->micbias_resistor << VAR_1);
  break;

 case 128:
  FUNC_1(VAR_6, VAR_2,
    VAR_0, 0);
  break;
 }
 return 0;
}
