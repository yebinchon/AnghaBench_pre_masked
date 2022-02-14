
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int read; } ;
struct TYPE_4__ {TYPE_1__ text; } ;
struct snd_info_entry {TYPE_2__ c; struct snd_emux* private_data; int content; } ;
struct snd_emux {int dummy; } ;
struct snd_card {int proc_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_info_entry* FUNC_0 (struct snd_card*,char*,int ) ;
 int FUNC_1 (char*,char*,int) ;

void FUNC_2(struct snd_emux *VAR_2, struct snd_card *VAR_3, int VAR_4)
{
 struct snd_info_entry *VAR_5;
 char VAR_6[64];

 FUNC_1(VAR_6, "wavetableD%d", VAR_4);
 VAR_5 = FUNC_0(VAR_3, VAR_6, VAR_3->proc_root);
 if (VAR_5 == ((void*)0))
  return;

 VAR_5->content = VAR_0;
 VAR_5->private_data = VAR_2;
 VAR_5->c.text.read = VAR_1;
}
