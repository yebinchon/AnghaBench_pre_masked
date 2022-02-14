
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_info_private_data {TYPE_3__* rbuffer; struct snd_info_entry* entry; } ;
struct TYPE_4__ {int (* read ) (struct snd_info_entry*,TYPE_3__*) ;} ;
struct TYPE_5__ {TYPE_1__ text; } ;
struct snd_info_entry {TYPE_2__ c; } ;
struct seq_file {struct snd_info_private_data* private; } ;
struct TYPE_6__ {char* buffer; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_info_entry*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 struct snd_info_private_data *VAR_3 = VAR_1->private;
 struct snd_info_entry *VAR_4 = VAR_3->entry;

 if (!VAR_4->c.text.read) {
  return -VAR_0;
 } else {
  VAR_3->rbuffer->buffer = (char *)VAR_1;
  VAR_4->c.text.read(VAR_4, VAR_3->rbuffer);
 }
 return 0;
}
