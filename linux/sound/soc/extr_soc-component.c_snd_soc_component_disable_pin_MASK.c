
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int name_prefix; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*,int ,char const*) ;
 int FUNC_1 (char*) ;
 struct snd_soc_dapm_context* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_dapm_context*,char const*) ;

int FUNC_4(struct snd_soc_component *VAR_2,
      const char *VAR_3)
{
 struct snd_soc_dapm_context *VAR_4 =
  FUNC_2(VAR_2);
 char *VAR_5;
 int VAR_6;

 if (!VAR_2->name_prefix)
  return FUNC_3(VAR_4, VAR_3);

 VAR_5 = FUNC_0(VAR_1, "%s %s", VAR_2->name_prefix, VAR_3);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_4, VAR_5);
 FUNC_1(VAR_5);

 return VAR_6;
}
