
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_motu {TYPE_1__* card; } ;
struct snd_info_entry {int mode; } ;
struct TYPE_2__ {int proc_root; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_motu*,struct snd_info_entry*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_info_entry* FUNC_1 (TYPE_1__*,char*,int ) ;

void FUNC_2(struct snd_motu *VAR_3)
{
 struct snd_info_entry *VAR_4;





 VAR_4 = FUNC_1(VAR_3->card, "firewire",
       VAR_3->card->proc_root);
 if (VAR_4 == ((void*)0))
  return;
 VAR_4->mode = VAR_0 | 0555;

 FUNC_0(VAR_3, VAR_4, "clock", VAR_1);
 FUNC_0(VAR_3, VAR_4, "format", VAR_2);
}
