
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* card; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct TYPE_2__ {struct snd_soc_dapm_context dapm; } ;


 int FUNC_0 (struct snd_soc_dapm_context*,char*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_pcm_runtime *VAR_0)
{
 struct snd_soc_dapm_context *VAR_1 = &VAR_0->card->dapm;


 FUNC_0(VAR_1, "EARPIECE");
 FUNC_0(VAR_1, "PREDRIVEL");
 FUNC_0(VAR_1, "PREDRIVER");
 FUNC_0(VAR_1, "HSOL");
 FUNC_0(VAR_1, "HSOR");
 FUNC_0(VAR_1, "CARKITL");
 FUNC_0(VAR_1, "CARKITR");
 FUNC_0(VAR_1, "HFL");
 FUNC_0(VAR_1, "HFR");
 FUNC_0(VAR_1, "VIBRA");

 return 0;
}
