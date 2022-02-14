
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int connected; scalar_t__ force; } ;
struct snd_soc_dapm_context {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_dapm_context*) ;
 struct snd_soc_dapm_widget* FUNC_1 (struct snd_soc_dapm_context*,char const*,int) ;
 int FUNC_2 (struct snd_soc_dapm_widget*,char*) ;
 int FUNC_3 (struct snd_soc_dapm_widget*) ;
 int FUNC_4 (struct snd_soc_dapm_widget*) ;
 int FUNC_5 (int ,char*,char const*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_context *VAR_1,
    const char *VAR_2, int VAR_3)
{
 struct snd_soc_dapm_widget *VAR_4 = FUNC_1(VAR_1, VAR_2, 1);

 FUNC_0(VAR_1);

 if (!VAR_4) {
  FUNC_5(VAR_1->dev, "ASoC: DAPM unknown pin %s\n", VAR_2);
  return -VAR_0;
 }

 if (VAR_4->connected != VAR_3) {
  FUNC_2(VAR_4, "pin configuration");
  FUNC_3(VAR_4);
  FUNC_4(VAR_4);
 }

 VAR_4->connected = VAR_3;
 if (VAR_3 == 0)
  VAR_4->force = 0;

 return 0;
}
