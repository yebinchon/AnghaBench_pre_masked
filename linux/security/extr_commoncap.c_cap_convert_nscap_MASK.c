
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
struct vfs_ns_cap_data {int data; void* magic_etc; void* rootid; } ;
struct vfs_cap_data {int data; int magic_etc; } ;
struct user_namespace {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct dentry {int dummy; } ;
typedef int kuid_t ;
typedef int __u32 ;
typedef int __le32 ;
struct TYPE_2__ {struct user_namespace* s_user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (struct inode*,int ) ;
 void* FUNC_1 (int) ;
 struct user_namespace* FUNC_2 () ;
 struct inode* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct user_namespace*,int ) ;
 struct vfs_ns_cap_data* FUNC_5 (size_t,int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *,int) ;
 scalar_t__ FUNC_9 (struct user_namespace*,int ) ;
 int FUNC_10 (void*,size_t,struct user_namespace*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (size_t,struct vfs_cap_data const*) ;

int FUNC_13(struct dentry *VAR_9, void **VAR_10, size_t VAR_11)
{
 struct vfs_ns_cap_data *VAR_12;
 uid_t VAR_13;
 const struct vfs_cap_data *VAR_14 = *VAR_10;
 __u32 VAR_15, VAR_16;
 struct inode *VAR_17 = FUNC_3(VAR_9);
 struct user_namespace *VAR_18 = FUNC_2(),
  *VAR_19 = VAR_17->i_sb->s_user_ns;
 kuid_t VAR_20;
 size_t VAR_21;

 if (!*VAR_10)
  return -VAR_1;
 if (!FUNC_12(VAR_11, VAR_14))
  return -VAR_1;
 if (!FUNC_0(VAR_17, VAR_0))
  return -VAR_3;
 if (VAR_11 == VAR_8)
  if (FUNC_9(VAR_17->i_sb->s_user_ns, VAR_0))

   return VAR_11;

 VAR_20 = FUNC_10(*VAR_10, VAR_11, VAR_18);
 if (!FUNC_11(VAR_20))
  return -VAR_1;

 VAR_13 = FUNC_4(VAR_19, VAR_20);
 if (VAR_13 == -1)
  return -VAR_1;

 VAR_21 = sizeof(struct vfs_ns_cap_data);
 VAR_12 = FUNC_5(VAR_21, VAR_4);
 if (!VAR_12)
  return -VAR_2;
 VAR_12->rootid = FUNC_1(VAR_13);
 VAR_16 = VAR_6;
 VAR_15 = FUNC_7(VAR_14->magic_etc);
 if (VAR_15 & VAR_5)
  VAR_16 |= VAR_5;
 VAR_12->magic_etc = FUNC_1(VAR_16);
 FUNC_8(&VAR_12->data, &VAR_14->data, sizeof(__le32) * 2 * VAR_7);

 FUNC_6(*VAR_10);
 *VAR_10 = VAR_12;
 return VAR_21;
}
