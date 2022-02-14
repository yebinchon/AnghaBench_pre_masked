
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {int connected; int force; TYPE_1__* dapm; } ;
struct snd_soc_dapm_context {int dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct snd_soc_dapm_widget* FUNC_0 (struct snd_soc_dapm_context*,char const*,int) ;
 int FUNC_1 (struct snd_soc_dapm_widget*,char*) ;
 int FUNC_2 (struct snd_soc_dapm_widget*) ;
 int FUNC_3 (struct snd_soc_dapm_widget*) ;
 int FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (int ,char*,char const*) ;

int FUNC_6(struct snd_soc_dapm_context *VAR_1,
      const char *VAR_2)
{
 struct snd_soc_dapm_widget *VAR_3 = FUNC_0(VAR_1, VAR_2, 1);

 if (!VAR_3) {
  FUNC_5(VAR_1->dev, "ASoC: unknown pin %s\n", VAR_2);
  return -VAR_0;
 }

 FUNC_4(VAR_3->dapm->dev, "ASoC: force enable pin %s\n", VAR_2);
 if (!VAR_3->connected) {




  FUNC_2(VAR_3);
  FUNC_3(VAR_3);
  VAR_3->connected = 1;
 }
 VAR_3->force = 1;
 FUNC_1(VAR_3, "force enable");

 return 0;
}
