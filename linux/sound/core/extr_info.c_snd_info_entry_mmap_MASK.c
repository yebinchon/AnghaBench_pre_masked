
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct snd_info_private_data {int file_private_data; struct snd_info_entry* entry; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct snd_info_entry {TYPE_2__ c; } ;
struct inode {int dummy; } ;
struct file {struct snd_info_private_data* private_data; } ;
struct TYPE_3__ {int (* mmap ) (struct snd_info_entry*,int ,struct inode*,struct file*,struct vm_area_struct*) ;} ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct snd_info_entry*,int ,struct inode*,struct file*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct inode *VAR_3 = FUNC_0(VAR_1);
 struct snd_info_private_data *VAR_4;
 struct snd_info_entry *VAR_5;

 VAR_4 = VAR_1->private_data;
 if (VAR_4 == ((void*)0))
  return 0;
 VAR_5 = VAR_4->entry;
 if (!VAR_5->c.ops->mmap)
  return -VAR_0;
 return VAR_5->c.ops->mmap(VAR_5, VAR_4->file_private_data,
      VAR_3, VAR_1, VAR_2);
}
