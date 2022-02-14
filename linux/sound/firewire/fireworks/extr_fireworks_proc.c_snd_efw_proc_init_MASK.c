
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_entry {int mode; } ;
struct snd_efw {TYPE_1__* card; } ;
struct TYPE_2__ {int proc_root; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_efw*,struct snd_info_entry*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct snd_info_entry* FUNC_1 (TYPE_1__*,char*,int ) ;

void FUNC_2(struct snd_efw *VAR_5)
{
 struct snd_info_entry *VAR_6;





 VAR_6 = FUNC_1(VAR_5->card, "firewire",
       VAR_5->card->proc_root);
 if (VAR_6 == ((void*)0))
  return;
 VAR_6->mode = VAR_0 | 0555;

 FUNC_0(VAR_5, VAR_6, "clock", VAR_1);
 FUNC_0(VAR_5, VAR_6, "firmware", VAR_2);
 FUNC_0(VAR_5, VAR_6, "meters", VAR_3);
 FUNC_0(VAR_5, VAR_6, "queues", VAR_4);
}
