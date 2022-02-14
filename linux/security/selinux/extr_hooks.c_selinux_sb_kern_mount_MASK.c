
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_root; } ;
struct cred {int dummy; } ;
struct TYPE_2__ {int dentry; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cred* FUNC_0 () ;
 int FUNC_1 (struct cred const*,struct super_block*,int ,struct common_audit_data*) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_2)
{
 const struct cred *VAR_3 = FUNC_0();
 struct common_audit_data VAR_4;

 VAR_4.type = VAR_1;
 VAR_4.u.dentry = VAR_2->s_root;
 return FUNC_1(VAR_3, VAR_2, VAR_0, &VAR_4);
}
