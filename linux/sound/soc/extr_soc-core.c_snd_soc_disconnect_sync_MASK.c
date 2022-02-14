
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* card; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int snd_card; } ;


 int FUNC_0 (int ) ;
 struct snd_soc_component* FUNC_1 (struct device*,int *) ;

void FUNC_2(struct device *VAR_0)
{
 struct snd_soc_component *VAR_1 =
   FUNC_1(VAR_0, ((void*)0));

 if (!VAR_1 || !VAR_1->card)
  return;

 FUNC_0(VAR_1->card->snd_card);
}
