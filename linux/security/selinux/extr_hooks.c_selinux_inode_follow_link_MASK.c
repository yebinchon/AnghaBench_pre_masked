
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct inode_security_struct {int sclass; int sid; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct cred {int dummy; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode_security_struct*) ;
 int VAR_1 ;
 int FUNC_1 (struct inode_security_struct*) ;
 int FUNC_2 (int *,int ,int ,int ,int ,struct common_audit_data*) ;
 int FUNC_3 (struct cred const*) ;
 struct cred* FUNC_4 () ;
 struct inode_security_struct* FUNC_5 (struct inode*,int) ;
 int VAR_2 ;
 int FUNC_6 (struct cred const*) ;

__attribute__((used)) static int FUNC_7(struct dentry *VAR_3, struct inode *VAR_4,
         bool VAR_5)
{
 const struct cred *VAR_6 = FUNC_4();
 struct common_audit_data VAR_7;
 struct inode_security_struct *VAR_8;
 u32 VAR_9;

 FUNC_6(VAR_6);

 VAR_7.type = VAR_1;
 VAR_7.u.dentry = VAR_3;
 VAR_9 = FUNC_3(VAR_6);
 VAR_8 = FUNC_5(VAR_4, VAR_5);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 return FUNC_2(&VAR_2,
       VAR_9, VAR_8->sid, VAR_8->sclass, VAR_0, &VAR_7);
}
