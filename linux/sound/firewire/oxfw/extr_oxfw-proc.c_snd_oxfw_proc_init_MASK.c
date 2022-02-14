
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_oxfw {TYPE_1__* card; } ;
struct snd_info_entry {int mode; } ;
struct TYPE_2__ {int proc_root; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_oxfw*,struct snd_info_entry*,char*,int ) ;
 int VAR_1 ;
 struct snd_info_entry* FUNC_1 (TYPE_1__*,char*,int ) ;

void FUNC_2(struct snd_oxfw *VAR_2)
{
 struct snd_info_entry *VAR_3;





 VAR_3 = FUNC_1(VAR_2->card, "firewire",
       VAR_2->card->proc_root);
 if (VAR_3 == ((void*)0))
  return;
 VAR_3->mode = VAR_0 | 0555;

 FUNC_0(VAR_2, VAR_3, "formation", VAR_1);
}
