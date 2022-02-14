
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int) ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_3 (struct snd_soc_dapm_context*) ;
 int FUNC_4 (struct snd_soc_dapm_context*) ;
 int FUNC_5 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static void FUNC_6(
 struct snd_soc_component *VAR_0)
{
 struct snd_soc_dapm_context *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1, "Bias");
 FUNC_2(VAR_1, "Analog power");
 FUNC_2(VAR_1, "Mic Bias");
 FUNC_5(VAR_1);
 FUNC_4(VAR_1);

 FUNC_0(20);
}
