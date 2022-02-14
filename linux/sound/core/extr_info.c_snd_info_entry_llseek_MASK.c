
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_info_private_data {int file_private_data; struct snd_info_entry* entry; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct snd_info_entry {scalar_t__ size; int access; TYPE_2__ c; } ;
struct file {scalar_t__ f_pos; struct snd_info_private_data* private_data; } ;
typedef scalar_t__ loff_t ;
struct TYPE_3__ {scalar_t__ (* llseek ) (struct snd_info_entry*,int ,struct file*,scalar_t__,int) ;} ;


 scalar_t__ VAR_0 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct snd_info_entry*,int ,struct file*,scalar_t__,int) ;

__attribute__((used)) static loff_t FUNC_3(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 struct snd_info_private_data *VAR_4;
 struct snd_info_entry *VAR_5;
 loff_t VAR_6 = -VAR_0, VAR_7;

 VAR_4 = VAR_1->private_data;
 VAR_5 = VAR_4->entry;
 FUNC_0(&VAR_5->access);
 if (VAR_5->c.ops->llseek) {
  VAR_2 = VAR_5->c.ops->llseek(VAR_5,
           VAR_4->file_private_data,
           VAR_1, VAR_2, VAR_3);
  goto out;
 }

 VAR_7 = VAR_5->size;
 switch (VAR_3) {
 case 128:
  break;
 case 130:
  VAR_2 += VAR_1->f_pos;
  break;
 case 129:
  if (!VAR_7)
   goto out;
  VAR_2 += VAR_7;
  break;
 default:
  goto out;
 }
 if (VAR_2 < 0)
  goto out;
 if (VAR_7 && VAR_2 > VAR_7)
  VAR_2 = VAR_7;
 VAR_1->f_pos = VAR_2;
 VAR_6 = VAR_2;
 out:
 FUNC_1(&VAR_5->access);
 return VAR_6;
}
