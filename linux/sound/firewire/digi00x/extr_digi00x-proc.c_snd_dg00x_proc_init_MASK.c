
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_entry {int mode; } ;
struct snd_dg00x {TYPE_1__* card; } ;
struct TYPE_2__ {struct snd_info_entry* proc_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_info_entry* FUNC_0 (TYPE_1__*,char*,struct snd_info_entry*) ;
 int FUNC_1 (struct snd_info_entry*,struct snd_dg00x*,int ) ;

void FUNC_2(struct snd_dg00x *VAR_2)
{
 struct snd_info_entry *VAR_3, *VAR_4;





 VAR_3 = FUNC_0(VAR_2->card, "firewire",
       VAR_2->card->proc_root);
 if (VAR_3 == ((void*)0))
  return;

 VAR_3->mode = VAR_0 | 0555;

 VAR_4 = FUNC_0(VAR_2->card, "clock", VAR_3);
 if (VAR_4)
  FUNC_1(VAR_4, VAR_2, VAR_1);
}
