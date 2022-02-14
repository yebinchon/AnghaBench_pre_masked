
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_entry {int mode; } ;
struct snd_dice {TYPE_1__* card; } ;
struct TYPE_2__ {int proc_root; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_dice*,struct snd_info_entry*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_info_entry* FUNC_1 (TYPE_1__*,char*,int ) ;

void FUNC_2(struct snd_dice *VAR_3)
{
 struct snd_info_entry *VAR_4;





 VAR_4 = FUNC_1(VAR_3->card, "firewire",
       VAR_3->card->proc_root);
 if (!VAR_4)
  return;
 VAR_4->mode = VAR_0 | 0555;

 FUNC_0(VAR_3, VAR_4, "dice", VAR_1);
 FUNC_0(VAR_3, VAR_4, "formation", VAR_2);
}
