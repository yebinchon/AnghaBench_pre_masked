
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_context {TYPE_1__* card; } ;
struct TYPE_2__ {int instantiated; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1(struct snd_soc_dapm_context *VAR_1)
{




 if (!VAR_1->card || !VAR_1->card->instantiated)
  return 0;

 return FUNC_0(VAR_1->card, VAR_0);
}
