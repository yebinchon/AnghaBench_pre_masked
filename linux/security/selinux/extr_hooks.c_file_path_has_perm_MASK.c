
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct file {int dummy; } ;
struct cred {int dummy; } ;
struct TYPE_2__ {struct file* file; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct cred const*,int ,int ,struct common_audit_data*) ;

__attribute__((used)) static inline int FUNC_2(const struct cred *VAR_1,
         struct file *VAR_2,
         u32 VAR_3)
{
 struct common_audit_data VAR_4;

 VAR_4.type = VAR_0;
 VAR_4.u.file = VAR_2;
 return FUNC_1(VAR_1, FUNC_0(VAR_2), VAR_3, &VAR_4);
}
