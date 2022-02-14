
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct superblock_security_struct {int sid; } ;
struct super_block {struct superblock_security_struct* s_security; } ;
struct cred {int dummy; } ;
struct common_audit_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int ,struct common_audit_data*) ;
 int FUNC_1 (struct cred const*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(const struct cred *VAR_2,
          struct super_block *VAR_3,
          u32 VAR_4,
          struct common_audit_data *VAR_5)
{
 struct superblock_security_struct *VAR_6;
 u32 VAR_7 = FUNC_1(VAR_2);

 VAR_6 = VAR_3->s_security;
 return FUNC_0(&VAR_1,
       VAR_7, VAR_6->sid, VAR_0, VAR_4, VAR_5);
}
