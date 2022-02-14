
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


 FUNC_0(VAR_1, "HPOUT2P");
 FUNC_0(VAR_1, "HPOUT2N");
 FUNC_0(VAR_1, "SPKOUTLN");
 FUNC_0(VAR_1, "SPKOUTLP");
 FUNC_0(VAR_1, "SPKOUTRP");
 FUNC_0(VAR_1, "SPKOUTRN");
 FUNC_0(VAR_1, "LINEOUT1N");
 FUNC_0(VAR_1, "LINEOUT1P");
 FUNC_0(VAR_1, "LINEOUT2N");
 FUNC_0(VAR_1, "LINEOUT2P");
 FUNC_0(VAR_1, "IN1LP");
 FUNC_0(VAR_1, "IN2LP:VXRN");
 FUNC_0(VAR_1, "IN1RP");
 FUNC_0(VAR_1, "IN2RP:VXRP");

 return 0;
}
