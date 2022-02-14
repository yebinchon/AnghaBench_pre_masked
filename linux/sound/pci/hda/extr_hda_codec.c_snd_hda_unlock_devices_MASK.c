
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int files_lock; scalar_t__ shutdown; } ;
struct hda_bus {struct snd_card* card; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct hda_bus *VAR_0)
{
 struct snd_card *VAR_1 = VAR_0->card;

 FUNC_0(&VAR_1->files_lock);
 VAR_1->shutdown = 0;
 FUNC_1(&VAR_1->files_lock);
}
