
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode_operations {int dummy; } ;
struct inode {char* i_link; struct file_operations const* i_fop; struct inode_operations const* i_op; void* i_private; int i_ctime; int i_mtime; int i_atime; int i_mode; int i_ino; int i_sb; } ;
struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct inode*) ;
 struct inode* FUNC_8 (int ) ;
 struct inode_operations const VAR_1 ;
 struct file_operations const VAR_2 ;
 struct inode_operations const VAR_3 ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_4, struct dentry *VAR_5,
          umode_t VAR_6, void *VAR_7, char *VAR_8,
          const struct file_operations *VAR_9,
          const struct inode_operations *VAR_10)
{
 struct inode *VAR_11 = FUNC_8(VAR_4->i_sb);

 FUNC_0(!VAR_4);
 FUNC_0(!VAR_5);

 if (!VAR_11)
  return -VAR_0;

 VAR_11->i_ino = FUNC_6();
 VAR_11->i_mode = VAR_6;
 VAR_11->i_atime = VAR_11->i_mtime = VAR_11->i_ctime = FUNC_3(VAR_11);
 VAR_11->i_private = VAR_7;
 if (FUNC_1(VAR_6)) {
  VAR_11->i_op = VAR_10 ? VAR_10 : &VAR_1;
  VAR_11->i_fop = &VAR_2;
  FUNC_7(VAR_11);
  FUNC_7(VAR_4);
 } else if (FUNC_2(VAR_6)) {
  VAR_11->i_op = VAR_10 ? VAR_10 : &VAR_3;
  VAR_11->i_link = VAR_8;
 } else {
  VAR_11->i_fop = VAR_9;
 }
 FUNC_4(VAR_5, VAR_11);
 FUNC_5(VAR_5);

 return 0;
}
