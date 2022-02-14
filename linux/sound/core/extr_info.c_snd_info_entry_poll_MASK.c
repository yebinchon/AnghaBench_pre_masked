
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_info_private_data {int file_private_data; struct snd_info_entry* entry; } ;
struct TYPE_3__ {TYPE_2__* ops; } ;
struct snd_info_entry {TYPE_1__ c; } ;
struct file {struct snd_info_private_data* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_4__ {int (* poll ) (struct snd_info_entry*,int ,struct file*,int *) ;scalar_t__ write; scalar_t__ read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_info_entry*,int ,struct file*,int *) ;

__attribute__((used)) static __poll_t FUNC_1(struct file *VAR_4, poll_table *VAR_5)
{
 struct snd_info_private_data *VAR_6 = VAR_4->private_data;
 struct snd_info_entry *VAR_7 = VAR_6->entry;
 __poll_t VAR_8 = 0;

 if (VAR_7->c.ops->poll)
  return VAR_7->c.ops->poll(VAR_7,
       VAR_6->file_private_data,
       VAR_4, VAR_5);
 if (VAR_7->c.ops->read)
  VAR_8 |= VAR_0 | VAR_2;
 if (VAR_7->c.ops->write)
  VAR_8 |= VAR_1 | VAR_3;
 return VAR_8;
}
