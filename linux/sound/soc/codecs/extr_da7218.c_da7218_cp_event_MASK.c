
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct da7218_priv {scalar_t__ hp_single_supply; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 struct da7218_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_3,
      struct snd_kcontrol *VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = FUNC_2(VAR_3->dapm);
 struct da7218_priv *VAR_7 = FUNC_0(VAR_6);





 if (VAR_7->hp_single_supply)
  return 0;

 switch (VAR_5) {
 case 128:
  FUNC_1(VAR_6, VAR_0, VAR_1,
        VAR_1);
  return 0;
 case 129:
  FUNC_1(VAR_6, VAR_0, VAR_1,
        0);
  return 0;
 default:
  return -VAR_2;
 }
}
