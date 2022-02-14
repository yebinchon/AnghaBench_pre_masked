
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct vfs_ns_cap_data {int data; void* magic_etc; void* rootid; } ;
struct vfs_cap_data {void* magic_etc; int data; } ;
struct user_namespace {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct dentry {int dummy; } ;
typedef int kuid_t ;
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
 int VAR_8 ;
 void* FUNC_0 (int) ;
 int FUNC_1 () ;
 struct dentry* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (size_t,struct vfs_cap_data*) ;
 int FUNC_6 (size_t,struct vfs_cap_data*) ;
 int FUNC_7 (char*) ;
 void* FUNC_8 (int,int ) ;
 void* FUNC_9 (void*) ;
 int FUNC_10 (struct user_namespace*,scalar_t__) ;
 int FUNC_11 (int *,int *,int) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (char const*,char*) ;
 scalar_t__ FUNC_14 (struct dentry*,int ,char**,int,int ) ;

int FUNC_15(struct inode *VAR_9, const char *VAR_10, void **VAR_11,
     bool VAR_12)
{
 int VAR_13, VAR_14;
 kuid_t VAR_15;
 uid_t VAR_16, VAR_17;
 char *VAR_18 = ((void*)0);
 struct vfs_cap_data *VAR_19;
 struct vfs_ns_cap_data *VAR_20;
 struct dentry *VAR_21;
 struct user_namespace *VAR_22;

 if (FUNC_13(VAR_10, "capability") != 0)
  return -VAR_2;

 VAR_21 = FUNC_2(VAR_9);
 if (!VAR_21)
  return -VAR_0;

 VAR_13 = sizeof(struct vfs_ns_cap_data);
 VAR_14 = (int) FUNC_14(VAR_21, VAR_8,
     &VAR_18, VAR_13, VAR_4);
 FUNC_3(VAR_21);

 if (VAR_14 < 0)
  return VAR_14;

 VAR_22 = VAR_9->i_sb->s_user_ns;
 VAR_19 = (struct vfs_cap_data *) VAR_18;
 if (FUNC_5((size_t) VAR_14, VAR_19)) {


  if (VAR_12)
   *VAR_11 = VAR_18;
  else
   FUNC_7(VAR_18);
  return VAR_14;
 } else if (!FUNC_6((size_t) VAR_14, VAR_19)) {
  FUNC_7(VAR_18);
  return -VAR_0;
 }

 VAR_20 = (struct vfs_ns_cap_data *) VAR_18;
 VAR_16 = FUNC_9(VAR_20->rootid);
 VAR_15 = FUNC_10(VAR_22, VAR_16);



 VAR_17 = FUNC_4(FUNC_1(), VAR_15);
 if (VAR_17 != (uid_t)-1 && VAR_17 != (uid_t)0) {
  if (VAR_12) {
   *VAR_11 = VAR_18;
   VAR_20->rootid = FUNC_0(VAR_17);
  } else
   FUNC_7(VAR_18);
  return VAR_13;
 }

 if (!FUNC_12(VAR_15)) {
  FUNC_7(VAR_18);
  return -VAR_2;
 }


 VAR_13 = sizeof(struct vfs_cap_data);
 if (VAR_12) {
  *VAR_11 = FUNC_8(VAR_13, VAR_3);
  if (*VAR_11) {
   struct vfs_cap_data *VAR_23 = *VAR_11;
   __le32 VAR_24, VAR_25;
   VAR_25 = VAR_6;
   VAR_24 = FUNC_9(VAR_20->magic_etc);
   if (VAR_24 & VAR_5)
    VAR_25 |= VAR_5;
   FUNC_11(&VAR_23->data, &VAR_20->data, sizeof(__le32) * 2 * VAR_7);
   VAR_23->magic_etc = FUNC_0(VAR_25);
  } else {
   VAR_13 = -VAR_1;
  }
 }
 FUNC_7(VAR_18);
 return VAR_13;
}
