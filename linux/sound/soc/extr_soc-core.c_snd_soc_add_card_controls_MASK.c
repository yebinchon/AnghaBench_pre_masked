
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int dev; struct snd_card* snd_card; } ;
struct snd_kcontrol_new {int dummy; } ;
struct snd_card {int dummy; } ;


 int FUNC_0 (struct snd_card*,int ,struct snd_kcontrol_new const*,int,int *,struct snd_soc_card*) ;

int FUNC_1(struct snd_soc_card *VAR_0,
 const struct snd_kcontrol_new *VAR_1, int VAR_2)
{
 struct snd_card *VAR_3 = VAR_0->snd_card;

 return FUNC_0(VAR_3, VAR_0->dev, VAR_1, VAR_2,
   ((void*)0), VAR_0);
}
