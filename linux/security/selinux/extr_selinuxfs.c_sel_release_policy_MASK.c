
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct selinux_fs_info {scalar_t__ policy_opened; } ;
struct policy_load_memory {int data; } ;
struct inode {TYPE_1__* i_sb; } ;
struct file {struct policy_load_memory* private_data; } ;
struct TYPE_2__ {struct selinux_fs_info* s_fs_info; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct policy_load_memory*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct selinux_fs_info *VAR_2 = VAR_0->i_sb->s_fs_info;
 struct policy_load_memory *VAR_3 = VAR_1->private_data;

 FUNC_0(!VAR_3);

 VAR_2->policy_opened = 0;

 FUNC_2(VAR_3->data);
 FUNC_1(VAR_3);

 return 0;
}
