
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_snd_front_info {TYPE_1__* xb_dev; struct xen_snd_front_card_info* card_info; } ;
struct xen_snd_front_card_info {struct snd_card* card; } ;
struct snd_card {int number; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct snd_card*) ;

void FUNC_2(struct xen_snd_front_info *VAR_0)
{
 struct xen_snd_front_card_info *VAR_1;
 struct snd_card *VAR_2;

 VAR_1 = VAR_0->card_info;
 if (!VAR_1)
  return;

 VAR_2 = VAR_1->card;
 if (!VAR_2)
  return;

 FUNC_0(&VAR_0->xb_dev->dev, "Removing virtual sound card %d\n",
  VAR_2->number);
 FUNC_1(VAR_2);


 VAR_1->card = ((void*)0);
}
