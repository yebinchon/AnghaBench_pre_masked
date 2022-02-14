
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8580_priv {int supplies; TYPE_1__* drvdata; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_2__ {int num_dacs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ) ;
 struct snd_soc_dapm_context* FUNC_5 (struct snd_soc_component*) ;
 struct wm8580_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ,int ) ;
 int FUNC_8 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_9 (struct snd_soc_dapm_context*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_10(struct snd_soc_component *VAR_4)
{
 struct wm8580_priv *VAR_5 = FUNC_6(VAR_4);
 struct snd_soc_dapm_context *VAR_6 = FUNC_5(VAR_4);
 int VAR_7 = 0;

 switch (VAR_5->drvdata->num_dacs) {
 case 4:
  FUNC_4(VAR_4, VAR_3,
     FUNC_0(VAR_3));
  FUNC_9(VAR_6, VAR_2,
     FUNC_0(VAR_2));
  FUNC_8(VAR_6, VAR_1,
     FUNC_0(VAR_1));
  break;
 default:
  break;
 }

 VAR_7 = FUNC_3(FUNC_0(VAR_5->supplies),
        VAR_5->supplies);
 if (VAR_7 != 0) {
  FUNC_1(VAR_4->dev, "Failed to enable supplies: %d\n", VAR_7);
  goto err_regulator_get;
 }


 VAR_7 = FUNC_7(VAR_4, VAR_0, 0);
 if (VAR_7 != 0) {
  FUNC_1(VAR_4->dev, "Failed to reset component: %d\n", VAR_7);
  goto err_regulator_enable;
 }

 return 0;

err_regulator_enable:
 FUNC_2(FUNC_0(VAR_5->supplies), VAR_5->supplies);
err_regulator_get:
 return VAR_7;
}
