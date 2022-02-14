
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {int dev; TYPE_2__* component; } ;
struct snd_kcontrol_new {int dummy; } ;
struct snd_card {int dummy; } ;
struct TYPE_4__ {TYPE_1__* card; } ;
struct TYPE_3__ {struct snd_card* snd_card; } ;


 int FUNC_0 (struct snd_card*,int ,struct snd_kcontrol_new const*,int,int *,struct snd_soc_dai*) ;

int FUNC_1(struct snd_soc_dai *VAR_0,
 const struct snd_kcontrol_new *VAR_1, int VAR_2)
{
 struct snd_card *VAR_3 = VAR_0->component->card->snd_card;

 return FUNC_0(VAR_3, VAR_0->dev, VAR_1, VAR_2,
   ((void*)0), VAR_0);
}
