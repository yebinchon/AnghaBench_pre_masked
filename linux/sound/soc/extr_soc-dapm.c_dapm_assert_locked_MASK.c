
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_context {TYPE_1__* card; } ;
struct TYPE_2__ {int dapm_mutex; scalar_t__ instantiated; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct snd_soc_dapm_context *VAR_0)
{
 if (VAR_0->card && VAR_0->card->instantiated)
  FUNC_0(&VAR_0->card->dapm_mutex);
}
