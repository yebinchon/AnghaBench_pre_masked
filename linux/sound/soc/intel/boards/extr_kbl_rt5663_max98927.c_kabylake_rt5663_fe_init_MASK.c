
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int dev; TYPE_1__* cpu_dai; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {struct snd_soc_component* component; } ;


 int FUNC_0 (int ,char*,int) ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_dapm_context*,char*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_pcm_runtime *VAR_0)
{
 int VAR_1;
 struct snd_soc_dapm_context *VAR_2;
 struct snd_soc_component *VAR_3 = VAR_0->cpu_dai->component;

 VAR_2 = FUNC_1(VAR_3);
 VAR_1 = FUNC_2(VAR_2, "Reference Capture");
 if (VAR_1) {
  FUNC_0(VAR_0->dev, "Ref Cap ignore suspend failed %d\n", VAR_1);
  return VAR_1;
 }

 return VAR_1;
}
