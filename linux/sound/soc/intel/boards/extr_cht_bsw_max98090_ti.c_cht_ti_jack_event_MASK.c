
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_jack {TYPE_1__* card; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct notifier_block {int dummy; } ;
struct TYPE_2__ {struct snd_soc_dapm_context dapm; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_1 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_2 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_1,
  unsigned long VAR_2, void *VAR_3)
{
 struct snd_soc_jack *VAR_4 = (struct snd_soc_jack *)VAR_3;
 struct snd_soc_dapm_context *VAR_5 = &VAR_4->card->dapm;

 if (VAR_2 & VAR_0) {
  FUNC_1(VAR_5, "SHDN");
  FUNC_1(VAR_5, "MICBIAS");
  FUNC_2(VAR_5);
 } else {
  FUNC_0(VAR_5, "MICBIAS");
  FUNC_0(VAR_5, "SHDN");
  FUNC_2(VAR_5);
 }

 return 0;
}
