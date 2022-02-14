
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_tplg {struct snd_soc_component* comp; } ;
struct snd_soc_component {int dev; TYPE_1__* card; } ;
struct snd_kcontrol_new {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_2__ {int snd_card; } ;


 int FUNC_0 (int ,int ,struct snd_kcontrol_new*,int *,struct snd_soc_component*,struct snd_kcontrol**) ;

__attribute__((used)) static int FUNC_1(struct soc_tplg *VAR_0,
 struct snd_kcontrol_new *VAR_1, struct snd_kcontrol **VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_0->comp;

 return FUNC_0(VAR_3->card->snd_card,
    VAR_3->dev, VAR_1, ((void*)0), VAR_3, VAR_2);
}
