
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_info_private_data {struct snd_info_private_data* wbuffer; int buffer; struct snd_info_private_data* rbuffer; struct snd_info_entry* entry; } ;
struct TYPE_3__ {int (* write ) (struct snd_info_entry*,struct snd_info_private_data*) ;} ;
struct TYPE_4__ {TYPE_1__ text; } ;
struct snd_info_entry {int module; TYPE_2__ c; } ;
struct seq_file {struct snd_info_private_data* private; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int FUNC_0 (struct snd_info_private_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,struct file*) ;
 int FUNC_4 (struct snd_info_entry*,struct snd_info_private_data*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, struct file *VAR_1)
{
 struct seq_file *VAR_2 = VAR_1->private_data;
 struct snd_info_private_data *VAR_3 = VAR_2->private;
 struct snd_info_entry *VAR_4 = VAR_3->entry;

 if (VAR_3->wbuffer && VAR_4->c.text.write)
  VAR_4->c.text.write(VAR_4, VAR_3->wbuffer);

 FUNC_3(VAR_0, VAR_1);
 FUNC_0(VAR_3->rbuffer);
 if (VAR_3->wbuffer) {
  FUNC_1(VAR_3->wbuffer->buffer);
  FUNC_0(VAR_3->wbuffer);
 }

 FUNC_2(VAR_4->module);
 FUNC_0(VAR_3);
 return 0;
}
