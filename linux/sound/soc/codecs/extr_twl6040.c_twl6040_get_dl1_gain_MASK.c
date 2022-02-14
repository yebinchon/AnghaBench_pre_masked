
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_soc_dapm_context* FUNC_0 (struct snd_soc_component*) ;
 scalar_t__ FUNC_1 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;

int FUNC_3(struct snd_soc_component *VAR_2)
{
 struct snd_soc_dapm_context *VAR_3 = FUNC_0(VAR_2);

 if (FUNC_1(VAR_3, "EP"))
  return -1;

 if (FUNC_1(VAR_3, "HSOR") ||
  FUNC_1(VAR_3, "HSOL")) {

  u8 VAR_4 = FUNC_2(VAR_2, VAR_1);
  if (VAR_4 & VAR_0)

   return -8;
  else

   return -1;
 }
 return 0;
}
