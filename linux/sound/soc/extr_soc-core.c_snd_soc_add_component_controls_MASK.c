
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int name_prefix; int dev; TYPE_1__* card; } ;
struct snd_kcontrol_new {int dummy; } ;
struct snd_card {int dummy; } ;
struct TYPE_2__ {struct snd_card* snd_card; } ;


 int FUNC_0 (struct snd_card*,int ,struct snd_kcontrol_new const*,unsigned int,int ,struct snd_soc_component*) ;

int FUNC_1(struct snd_soc_component *VAR_0,
 const struct snd_kcontrol_new *VAR_1, unsigned int VAR_2)
{
 struct snd_card *VAR_3 = VAR_0->card->snd_card;

 return FUNC_0(VAR_3, VAR_0->dev, VAR_1,
   VAR_2, VAR_0->name_prefix, VAR_0);
}
