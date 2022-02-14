
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct cs42xx8_priv {int regmap; TYPE_1__* drvdata; } ;
struct TYPE_2__ {int num_adcs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ) ;
 struct snd_soc_dapm_context* FUNC_3 (struct snd_soc_component*) ;
 struct cs42xx8_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_6 (struct snd_soc_dapm_context*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_5)
{
 struct cs42xx8_priv *VAR_6 = FUNC_4(VAR_5);
 struct snd_soc_dapm_context *VAR_7 = FUNC_3(VAR_5);

 switch (VAR_6->drvdata->num_adcs) {
 case 3:
  FUNC_2(VAR_5, VAR_4,
     FUNC_0(VAR_4));
  FUNC_6(VAR_7, VAR_3,
     FUNC_0(VAR_3));
  FUNC_5(VAR_7, VAR_2,
     FUNC_0(VAR_2));
  break;
 default:
  break;
 }


 FUNC_1(VAR_6->regmap, VAR_0, VAR_1);

 return 0;
}
