
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int ignore_suspend; } ;
struct snd_soc_dapm_context {int dev; } ;


 int VAR_0 ;
 struct snd_soc_dapm_widget* FUNC_0 (struct snd_soc_dapm_context*,char const*,int) ;
 int FUNC_1 (int ,char*,char const*) ;

int FUNC_2(struct snd_soc_dapm_context *VAR_1,
    const char *VAR_2)
{
 struct snd_soc_dapm_widget *VAR_3 = FUNC_0(VAR_1, VAR_2, 0);

 if (!VAR_3) {
  FUNC_1(VAR_1->dev, "ASoC: unknown pin %s\n", VAR_2);
  return -VAR_0;
 }

 VAR_3->ignore_suspend = 1;

 return 0;
}
