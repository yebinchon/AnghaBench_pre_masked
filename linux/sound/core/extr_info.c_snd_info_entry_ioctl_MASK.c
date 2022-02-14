
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_info_private_data {int file_private_data; struct snd_info_entry* entry; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct snd_info_entry {TYPE_2__ c; } ;
struct file {struct snd_info_private_data* private_data; } ;
struct TYPE_3__ {long (* ioctl ) (struct snd_info_entry*,int ,struct file*,unsigned int,unsigned long) ;} ;


 long VAR_0 ;
 long FUNC_0 (struct snd_info_entry*,int ,struct file*,unsigned int,unsigned long) ;

__attribute__((used)) static long FUNC_1(struct file *VAR_1, unsigned int VAR_2,
    unsigned long VAR_3)
{
 struct snd_info_private_data *VAR_4 = VAR_1->private_data;
 struct snd_info_entry *VAR_5 = VAR_4->entry;

 if (!VAR_5->c.ops->ioctl)
  return -VAR_0;
 return VAR_5->c.ops->ioctl(VAR_5, VAR_4->file_private_data,
       VAR_1, VAR_2, VAR_3);
}
