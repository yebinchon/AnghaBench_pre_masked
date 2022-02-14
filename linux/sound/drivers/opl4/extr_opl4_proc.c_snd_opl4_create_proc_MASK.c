
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_opl4 {scalar_t__ hardware; struct snd_info_entry* proc_entry; TYPE_2__* card; } ;
struct TYPE_3__ {int * ops; } ;
struct snd_info_entry {int mode; int size; struct snd_opl4* private_data; int module; TYPE_1__ c; int content; } ;
struct TYPE_4__ {int proc_root; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_info_entry* FUNC_0 (TYPE_2__*,char*,int ) ;
 int VAR_3 ;

int FUNC_1(struct snd_opl4 *VAR_4)
{
 struct snd_info_entry *VAR_5;

 VAR_5 = FUNC_0(VAR_4->card, "opl4-mem", VAR_4->card->proc_root);
 if (VAR_5) {
  if (VAR_4->hardware < VAR_0) {

   VAR_5->mode |= 0200;
   VAR_5->size = 4 * 1024 * 1024;
  } else {

   VAR_5->size = 1 * 1024 * 1024;
  }
  VAR_5->content = VAR_1;
  VAR_5->c.ops = &VAR_3;
  VAR_5->module = VAR_2;
  VAR_5->private_data = VAR_4;
 }
 VAR_4->proc_entry = VAR_5;
 return 0;
}
