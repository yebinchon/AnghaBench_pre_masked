
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct inode {int i_mode; int i_ctime; int i_mtime; int i_atime; int i_ino; } ;
struct dentry {TYPE_2__* d_inode; TYPE_1__* d_sb; } ;
struct TYPE_6__ {int mnt; int dentry; } ;
struct TYPE_5__ {int i_sb; } ;
struct TYPE_4__ {int s_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int FUNC_2 (struct dentry*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct inode*,int,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 struct dentry* FUNC_12 (int ,struct dentry*,int ) ;
 int FUNC_13 (struct vfsmount*) ;
 struct inode* FUNC_14 (int ) ;
 int FUNC_15 (int ,struct vfsmount**,int*) ;
 int FUNC_16 (struct vfsmount**,int*) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(struct dentry *VAR_7)
{
 struct vfsmount *VAR_8 = ((void*)0);
 struct dentry *VAR_9;
 struct inode *VAR_10;
 int VAR_11 = 0;
 int VAR_12 = FUNC_15(VAR_7->d_sb->s_type, &VAR_8, &VAR_11);

 if (VAR_12)
  return VAR_12;

 FUNC_10(FUNC_4(VAR_7));
 VAR_9 = FUNC_12(VAR_2, VAR_7, FUNC_17(VAR_2));
 if (FUNC_0(VAR_9)) {
  VAR_12 = FUNC_2(VAR_9);
  goto out;
 }
 VAR_10 = FUNC_14(VAR_7->d_inode->i_sb);
 if (!VAR_10) {
  VAR_12 = -VAR_0;
  goto out1;
 }

 VAR_10->i_ino = FUNC_8();
 VAR_10->i_mode = VAR_3 | VAR_4 | VAR_5;
 VAR_10->i_atime = VAR_10->i_mtime = VAR_10->i_ctime = FUNC_3(VAR_10);
 FUNC_9(VAR_10, VAR_3 | VAR_4 | VAR_5,
      FUNC_1(VAR_1, 3));
 FUNC_5(VAR_9, VAR_10);
 VAR_6.dentry = FUNC_6(VAR_9);
 VAR_6.mnt = FUNC_13(VAR_8);

 VAR_12 = 0;

out1:
 FUNC_7(VAR_9);
out:
 FUNC_11(FUNC_4(VAR_7));
 FUNC_16(&VAR_8, &VAR_11);
 return VAR_12;
}
