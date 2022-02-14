
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int umode_t ;
struct inode_operations {int dummy; } ;
struct inode {int i_mode; struct file_operations const* i_fop; void* i_link; struct inode_operations const* i_op; void* i_private; int i_ctime; int i_mtime; int i_atime; int i_ino; int i_sb; } ;
struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {struct dentry* mnt_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*,struct inode*) ;
 scalar_t__ FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct dentry*) ;
 int VAR_5 ;
 int FUNC_10 () ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 struct dentry* FUNC_14 (char const*,struct dentry*,int ) ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 struct inode* FUNC_15 (int ) ;
 int FUNC_16 (char*,char const*) ;
 struct inode_operations const VAR_8 ;
 struct file_operations const VAR_9 ;
 int FUNC_17 (int *,TYPE_1__**,int *) ;
 int FUNC_18 (TYPE_1__**,int *) ;
 struct inode_operations const VAR_10 ;
 int FUNC_19 (char const*) ;

__attribute__((used)) static struct dentry *FUNC_20(const char *VAR_11, umode_t VAR_12,
     struct dentry *VAR_13, void *VAR_14,
     const struct file_operations *VAR_15,
     const struct inode_operations *VAR_16)
{
 struct dentry *VAR_17;
 struct inode *VAR_18, *VAR_19;
 int VAR_20;

 if (!(VAR_12 & VAR_3))
  VAR_12 = (VAR_12 & VAR_2) | VAR_4;

 FUNC_16("securityfs: creating file '%s'\n",VAR_11);

 VAR_20 = FUNC_17(&VAR_5, &VAR_6, &VAR_7);
 if (VAR_20)
  return FUNC_0(VAR_20);

 if (!VAR_13)
  VAR_13 = VAR_6->mnt_root;

 VAR_18 = FUNC_5(VAR_13);

 FUNC_12(VAR_18);
 VAR_17 = FUNC_14(VAR_11, VAR_13, FUNC_19(VAR_11));
 if (FUNC_1(VAR_17))
  goto out;

 if (FUNC_7(VAR_17)) {
  VAR_20 = -VAR_0;
  goto out1;
 }

 VAR_19 = FUNC_15(VAR_18->i_sb);
 if (!VAR_19) {
  VAR_20 = -VAR_1;
  goto out1;
 }

 VAR_19->i_ino = FUNC_10();
 VAR_19->i_mode = VAR_12;
 VAR_19->i_atime = VAR_19->i_mtime = VAR_19->i_ctime = FUNC_4(VAR_19);
 VAR_19->i_private = VAR_14;
 if (FUNC_2(VAR_12)) {
  VAR_19->i_op = &VAR_8;
  VAR_19->i_fop = &VAR_9;
  FUNC_11(VAR_19);
  FUNC_11(VAR_18);
 } else if (FUNC_3(VAR_12)) {
  VAR_19->i_op = VAR_16 ? VAR_16 : &VAR_10;
  VAR_19->i_link = VAR_14;
 } else {
  VAR_19->i_fop = VAR_15;
 }
 FUNC_6(VAR_17, VAR_19);
 FUNC_8(VAR_17);
 FUNC_13(VAR_18);
 return VAR_17;

out1:
 FUNC_9(VAR_17);
 VAR_17 = FUNC_0(VAR_20);
out:
 FUNC_13(VAR_18);
 FUNC_18(&VAR_6, &VAR_7);
 return VAR_17;
}
