
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_context {int suspend_bias_off; TYPE_1__* card; scalar_t__ idle_bias_off; } ;
struct TYPE_2__ {int snd_card; } ;




 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct snd_soc_dapm_context *VAR_0)
{
 if (VAR_0->idle_bias_off)
  return 1;

 switch (FUNC_0(VAR_0->card->snd_card)) {
 case 128:
 case 129:
  return VAR_0->suspend_bias_off;
 default:
  break;
 }

 return 0;
}
