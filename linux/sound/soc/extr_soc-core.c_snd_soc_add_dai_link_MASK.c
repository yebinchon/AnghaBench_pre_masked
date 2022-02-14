
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct snd_soc_dai_link {int list; TYPE_1__ dobj; } ;
struct snd_soc_card {int dai_link_list; int (* add_dai_link ) (struct snd_soc_card*,struct snd_soc_dai_link*) ;int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_soc_card*,struct snd_soc_dai_link*) ;

int FUNC_4(struct snd_soc_card *VAR_3,
  struct snd_soc_dai_link *VAR_4)
{
 if (VAR_4->dobj.type
     && VAR_4->dobj.type != VAR_1) {
  FUNC_0(VAR_3->dev, "Invalid dai link type %d\n",
   VAR_4->dobj.type);
  return -VAR_0;
 }

 FUNC_2(&VAR_2);




 if (VAR_4->dobj.type && VAR_3->add_dai_link)
  VAR_3->add_dai_link(VAR_3, VAR_4);


 FUNC_1(&VAR_4->list, &VAR_3->dai_link_list);

 return 0;
}
