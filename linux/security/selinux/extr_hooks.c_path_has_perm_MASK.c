
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct path {int dentry; } ;
struct inode {int dummy; } ;
struct cred {int dummy; } ;
struct TYPE_2__ {struct path path; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int ,int) ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 (struct cred const*,struct inode*,int ,struct common_audit_data*) ;

__attribute__((used)) static inline int FUNC_3(const struct cred *VAR_1,
    const struct path *VAR_2,
    u32 VAR_3)
{
 struct inode *VAR_4 = FUNC_1(VAR_2->dentry);
 struct common_audit_data VAR_5;

 VAR_5.type = VAR_0;
 VAR_5.u.path = *VAR_2;
 FUNC_0(VAR_4, VAR_2->dentry, 1);
 return FUNC_2(VAR_1, VAR_4, VAR_3, &VAR_5);
}
