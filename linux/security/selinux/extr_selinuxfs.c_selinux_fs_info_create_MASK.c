
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct selinux_fs_info* s_fs_info; } ;
struct selinux_fs_info {struct super_block* sb; int * state; scalar_t__ last_ino; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct selinux_fs_info* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_4)
{
 struct selinux_fs_info *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_1(&VAR_5->mutex);
 VAR_5->last_ino = VAR_2 - 1;
 VAR_5->state = &VAR_3;
 VAR_5->sb = VAR_4;
 VAR_4->s_fs_info = VAR_5;
 return 0;
}
