
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct snd_soc_dai_link {int list; TYPE_1__ dobj; } ;
struct snd_soc_card {int (* remove_dai_link ) (struct snd_soc_card*,struct snd_soc_dai_link*) ;int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_soc_card*,struct snd_soc_dai_link*) ;

void FUNC_4(struct snd_soc_card *VAR_2,
        struct snd_soc_dai_link *VAR_3)
{
 if (VAR_3->dobj.type
     && VAR_3->dobj.type != VAR_0) {
  FUNC_0(VAR_2->dev, "Invalid dai link type %d\n",
   VAR_3->dobj.type);
  return;
 }

 FUNC_2(&VAR_1);




 if (VAR_3->dobj.type && VAR_2->remove_dai_link)
  VAR_2->remove_dai_link(VAR_2, VAR_3);

 FUNC_1(&VAR_3->list);
}
