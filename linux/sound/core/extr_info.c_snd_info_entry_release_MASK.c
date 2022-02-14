
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_info_private_data {int file_private_data; struct snd_info_entry* entry; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct snd_info_entry {int module; TYPE_2__ c; } ;
struct inode {int dummy; } ;
struct file {int f_flags; struct snd_info_private_data* private_data; } ;
struct TYPE_3__ {int (* release ) (struct snd_info_entry*,int,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct snd_info_private_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_info_entry*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 struct snd_info_private_data *VAR_3 = VAR_2->private_data;
 struct snd_info_entry *VAR_4 = VAR_3->entry;

 if (VAR_4->c.ops->release)
  VAR_4->c.ops->release(VAR_4, VAR_2->f_flags & VAR_0,
          VAR_3->file_private_data);
 FUNC_1(VAR_4->module);
 FUNC_0(VAR_3);
 return 0;
}
