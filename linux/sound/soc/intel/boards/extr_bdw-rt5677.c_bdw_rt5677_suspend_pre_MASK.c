
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_card {int dummy; } ;
struct bdw_rt5677_priv {scalar_t__ component; } ;


 struct bdw_rt5677_priv* FUNC_0 (struct snd_soc_card*) ;
 struct snd_soc_dapm_context* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct snd_soc_dapm_context*,char*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_card *VAR_0)
{
 struct bdw_rt5677_priv *VAR_1 = FUNC_0(VAR_0);
 struct snd_soc_dapm_context *VAR_2;

 if (VAR_1->component) {
  VAR_2 = FUNC_1(VAR_1->component);
  FUNC_2(VAR_2, "MICBIAS1");
 }
 return 0;
}
