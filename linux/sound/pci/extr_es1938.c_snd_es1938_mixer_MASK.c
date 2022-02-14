
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {void* private_free; } ;
struct snd_card {int mixername; } ;
struct es1938 {struct snd_kcontrol* hw_switch; struct snd_kcontrol* hw_volume; struct snd_kcontrol* master_switch; struct snd_kcontrol* master_volume; struct snd_card* card; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_card*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_2 (int *,struct es1938*) ;
 int * VAR_0 ;
 void* VAR_1 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct es1938 *VAR_2)
{
 struct snd_card *VAR_3;
 unsigned int VAR_4;
 int VAR_5;

 VAR_3 = VAR_2->card;

 FUNC_3(VAR_3->mixername, "ESS Solo-1");

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  struct snd_kcontrol *VAR_6;
  VAR_6 = FUNC_2(&VAR_0[VAR_4], VAR_2);
  switch (VAR_4) {
   case 0:
    VAR_2->master_volume = VAR_6;
    VAR_6->private_free = VAR_1;
    break;
   case 1:
    VAR_2->master_switch = VAR_6;
    VAR_6->private_free = VAR_1;
    break;
   case 2:
    VAR_2->hw_volume = VAR_6;
    VAR_6->private_free = VAR_1;
    break;
   case 3:
    VAR_2->hw_switch = VAR_6;
    VAR_6->private_free = VAR_1;
    break;
   }
  if ((VAR_5 = FUNC_1(VAR_3, VAR_6)) < 0)
   return VAR_5;
 }
 return 0;
}
