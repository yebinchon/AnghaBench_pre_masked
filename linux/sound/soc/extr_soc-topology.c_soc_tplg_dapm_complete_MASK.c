
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_tplg {int dev; TYPE_1__* comp; } ;
struct snd_soc_card {int instantiated; } ;
struct TYPE_2__ {struct snd_soc_card* card; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_3(struct soc_tplg *VAR_0)
{
 struct snd_soc_card *VAR_1 = VAR_0->comp->card;
 int VAR_2;




 if (!VAR_1 || !VAR_1->instantiated) {
  FUNC_1(VAR_0->dev, "ASoC: Parent card not yet available,"
   " widget card binding deferred\n");
  return 0;
 }

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 < 0)
  FUNC_0(VAR_0->dev, "ASoC: failed to create new widgets %d\n",
   VAR_2);

 return 0;
}
