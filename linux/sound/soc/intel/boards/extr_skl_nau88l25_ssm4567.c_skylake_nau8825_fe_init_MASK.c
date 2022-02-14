
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* cpu_dai; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {struct snd_soc_component* component; } ;


 struct snd_soc_dapm_context* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_dapm_context*,char*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_pcm_runtime *VAR_0)
{
 struct snd_soc_dapm_context *VAR_1;
 struct snd_soc_component *VAR_2 = VAR_0->cpu_dai->component;

 VAR_1 = FUNC_0(VAR_2);
 FUNC_1(VAR_1, "Reference Capture");

 return 0;
}
