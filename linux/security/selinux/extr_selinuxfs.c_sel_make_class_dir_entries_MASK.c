
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct selinux_fs_info* s_fs_info; } ;
struct selinux_fs_info {int last_class_ino; } ;
struct inode {int i_ino; int * i_fop; } ;
struct dentry {struct super_block* d_sb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_3 (struct dentry*,char*) ;
 int FUNC_4 (struct dentry*) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 struct dentry* FUNC_6 (struct dentry*,char*,int *) ;
 struct inode* FUNC_7 (struct super_block*,int) ;
 int FUNC_8 (char*,int,struct dentry*) ;

__attribute__((used)) static int FUNC_9(char *VAR_4, int VAR_5,
     struct dentry *VAR_6)
{
 struct super_block *VAR_7 = VAR_6->d_sb;
 struct selinux_fs_info *VAR_8 = VAR_7->s_fs_info;
 struct dentry *VAR_9 = ((void*)0);
 struct inode *VAR_10 = ((void*)0);
 int VAR_11;

 VAR_9 = FUNC_3(VAR_6, "index");
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_7(VAR_6->d_sb, VAR_1|VAR_2);
 if (!VAR_10) {
  FUNC_4(VAR_9);
  return -VAR_0;
 }

 VAR_10->i_fop = &VAR_3;
 VAR_10->i_ino = FUNC_5(VAR_5);
 FUNC_2(VAR_9, VAR_10);

 VAR_9 = FUNC_6(VAR_6, "perms", &VAR_8->last_class_ino);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_11 = FUNC_8(VAR_4, VAR_5, VAR_9);

 return VAR_11;
}
