
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct inode_security_struct {int sclass; int sid; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int,int ,int ,int,struct common_audit_data*) ;
 struct inode_security_struct* FUNC_1 (struct dentry*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 struct inode_security_struct* FUNC_5 (struct inode*) ;
 int VAR_9 ;

__attribute__((used)) static inline int FUNC_6(struct inode *VAR_10,
        struct dentry *VAR_11,
        struct inode *VAR_12,
        struct dentry *VAR_13)
{
 struct inode_security_struct *VAR_14, *VAR_15, *VAR_16, *VAR_17;
 struct common_audit_data VAR_18;
 u32 VAR_19 = FUNC_2();
 u32 VAR_20;
 int VAR_21, VAR_22;
 int VAR_23;

 VAR_14 = FUNC_5(VAR_10);
 VAR_16 = FUNC_1(VAR_11);
 VAR_21 = FUNC_3(VAR_11);
 VAR_15 = FUNC_5(VAR_12);

 VAR_18.type = VAR_7;

 VAR_18.u.dentry = VAR_11;
 VAR_23 = FUNC_0(&VAR_9,
     VAR_19, VAR_14->sid, VAR_8,
     VAR_1 | VAR_4, &VAR_18);
 if (VAR_23)
  return VAR_23;
 VAR_23 = FUNC_0(&VAR_9,
     VAR_19, VAR_16->sid,
     VAR_16->sclass, VAR_5, &VAR_18);
 if (VAR_23)
  return VAR_23;
 if (VAR_21 && VAR_12 != VAR_10) {
  VAR_23 = FUNC_0(&VAR_9,
      VAR_19, VAR_16->sid,
      VAR_16->sclass, VAR_2, &VAR_18);
  if (VAR_23)
   return VAR_23;
 }

 VAR_18.u.dentry = VAR_13;
 VAR_20 = VAR_0 | VAR_4;
 if (FUNC_4(VAR_13))
  VAR_20 |= VAR_1;
 VAR_23 = FUNC_0(&VAR_9,
     VAR_19, VAR_15->sid, VAR_8, VAR_20, &VAR_18);
 if (VAR_23)
  return VAR_23;
 if (FUNC_4(VAR_13)) {
  VAR_17 = FUNC_1(VAR_13);
  VAR_22 = FUNC_3(VAR_13);
  VAR_23 = FUNC_0(&VAR_9,
      VAR_19, VAR_17->sid,
      VAR_17->sclass,
      (VAR_22 ? VAR_3 : VAR_6), &VAR_18);
  if (VAR_23)
   return VAR_23;
 }

 return 0;
}
