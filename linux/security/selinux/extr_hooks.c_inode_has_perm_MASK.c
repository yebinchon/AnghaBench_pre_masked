
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode_security_struct {int sclass; int sid; } ;
struct inode {int dummy; } ;
struct cred {int dummy; } ;
struct common_audit_data {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,int ,int ,int ,int ,struct common_audit_data*) ;
 int FUNC_2 (struct cred const*) ;
 struct inode_security_struct* FUNC_3 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct cred const*) ;

__attribute__((used)) static int FUNC_6(const struct cred *VAR_1,
     struct inode *VAR_2,
     u32 VAR_3,
     struct common_audit_data *VAR_4)
{
 struct inode_security_struct *VAR_5;
 u32 VAR_6;

 FUNC_5(VAR_1);

 if (FUNC_4(FUNC_0(VAR_2)))
  return 0;

 VAR_6 = FUNC_2(VAR_1);
 VAR_5 = FUNC_3(VAR_2);

 return FUNC_1(&VAR_0,
       VAR_6, VAR_5->sid, VAR_5->sclass, VAR_3, VAR_4);
}
