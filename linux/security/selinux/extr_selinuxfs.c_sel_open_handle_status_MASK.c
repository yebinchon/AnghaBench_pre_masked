
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct selinux_fs_info {int state; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct page* private_data; } ;
struct TYPE_4__ {TYPE_1__* i_sb; } ;
struct TYPE_3__ {struct selinux_fs_info* s_fs_info; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct file*) ;
 struct page* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 struct selinux_fs_info *VAR_3 = FUNC_0(VAR_2)->i_sb->s_fs_info;
 struct page *VAR_4 = FUNC_1(VAR_3->state);

 if (!VAR_4)
  return -VAR_0;

 VAR_2->private_data = VAR_4;

 return 0;
}
