
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dapm_widget {int ignore_suspend; int name; TYPE_2__* dapm; } ;
struct TYPE_4__ {int dev; TYPE_1__* card; } ;
struct TYPE_3__ {int snd_card; } ;




 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0->dapm->card->snd_card);

 switch (VAR_1) {
 case 128:
 case 129:
  if (VAR_0->ignore_suspend)
   FUNC_0(VAR_0->dapm->dev, "ASoC: %s ignoring suspend\n",
    VAR_0->name);
  return VAR_0->ignore_suspend;
 default:
  return 1;
 }
}
