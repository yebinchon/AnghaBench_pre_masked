
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode_operations {int dummy; } ;
struct inode {int dummy; } ;
struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct dentry* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct inode*,struct dentry*,int,void*,void*,struct file_operations const*,struct inode_operations const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct inode* FUNC_5 (struct dentry*) ;
 scalar_t__ FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 struct dentry* FUNC_10 (char const*,struct dentry*,int ) ;
 int FUNC_11 (int *,int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (char const*) ;

__attribute__((used)) static struct dentry *FUNC_14(const char *VAR_7, umode_t VAR_8,
      struct dentry *VAR_9, void *VAR_10, void *VAR_11,
      const struct file_operations *VAR_12,
      const struct inode_operations *VAR_13)
{
 struct dentry *VAR_14;
 struct inode *VAR_15;
 int VAR_16;

 FUNC_0(!VAR_7);
 FUNC_0(!VAR_9);

 if (!(VAR_8 & VAR_2))
  VAR_8 = (VAR_8 & VAR_1) | VAR_3;

 VAR_16 = FUNC_11(&VAR_6, &VAR_5, &VAR_4);
 if (VAR_16)
  return FUNC_1(VAR_16);

 VAR_15 = FUNC_5(VAR_9);

 FUNC_8(VAR_15);
 VAR_14 = FUNC_10(VAR_7, VAR_9, FUNC_13(VAR_7));
 if (FUNC_2(VAR_14)) {
  VAR_16 = FUNC_3(VAR_14);
  goto fail_lock;
 }

 if (FUNC_6(VAR_14)) {
  VAR_16 = -VAR_0;
  goto fail_dentry;
 }

 VAR_16 = FUNC_4(VAR_15, VAR_14, VAR_8, VAR_10, VAR_11, VAR_12, VAR_13);
 if (VAR_16)
  goto fail_dentry;
 FUNC_9(VAR_15);

 return VAR_14;

fail_dentry:
 FUNC_7(VAR_14);

fail_lock:
 FUNC_9(VAR_15);
 FUNC_12(&VAR_5, &VAR_4);

 return FUNC_1(VAR_16);
}
