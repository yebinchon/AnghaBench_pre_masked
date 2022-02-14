
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int connected; } ;
struct snd_soc_dapm_context {int dummy; } ;


 struct snd_soc_dapm_widget* FUNC_0 (struct snd_soc_dapm_context*,char const*,int) ;

int FUNC_1(struct snd_soc_dapm_context *VAR_0,
    const char *VAR_1)
{
 struct snd_soc_dapm_widget *VAR_2 = FUNC_0(VAR_0, VAR_1, 1);

 if (VAR_2)
  return VAR_2->connected;

 return 0;
}
