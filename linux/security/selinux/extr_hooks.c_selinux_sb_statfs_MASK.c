
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {TYPE_2__* d_sb; } ;
struct cred {int dummy; } ;
struct TYPE_3__ {int dentry; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;
struct TYPE_4__ {int s_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cred* FUNC_0 () ;
 int FUNC_1 (struct cred const*,TYPE_2__*,int ,struct common_audit_data*) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_2)
{
 const struct cred *VAR_3 = FUNC_0();
 struct common_audit_data VAR_4;

 VAR_4.type = VAR_1;
 VAR_4.u.dentry = VAR_2->d_sb->s_root;
 return FUNC_1(VAR_3, VAR_2->d_sb, VAR_0, &VAR_4);
}
