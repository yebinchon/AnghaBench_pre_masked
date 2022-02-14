
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_info_entry {int mode; } ;
struct snd_bebob {TYPE_1__* spec; TYPE_2__* card; } ;
struct TYPE_4__ {int proc_root; } ;
struct TYPE_3__ {int * meter; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_bebob*,struct snd_info_entry*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct snd_info_entry* FUNC_1 (TYPE_2__*,char*,int ) ;

void FUNC_2(struct snd_bebob *VAR_5)
{
 struct snd_info_entry *VAR_6;





 VAR_6 = FUNC_1(VAR_5->card, "firewire",
       VAR_5->card->proc_root);
 if (VAR_6 == ((void*)0))
  return;
 VAR_6->mode = VAR_0 | 0555;

 FUNC_0(VAR_5, VAR_6, "clock", VAR_1);
 FUNC_0(VAR_5, VAR_6, "firmware", VAR_3);
 FUNC_0(VAR_5, VAR_6, "formation", VAR_2);

 if (VAR_5->spec->meter != ((void*)0))
  FUNC_0(VAR_5, VAR_6, "meter", VAR_4);
}
