
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kern_ipc_perm {int key; } ;
struct ipc_security_struct {int sclass; int sid; } ;
struct TYPE_2__ {int ipc_id; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int ,struct common_audit_data*) ;
 int FUNC_1 () ;
 struct ipc_security_struct* FUNC_2 (struct kern_ipc_perm*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct kern_ipc_perm *VAR_2,
   u32 VAR_3)
{
 struct ipc_security_struct *VAR_4;
 struct common_audit_data VAR_5;
 u32 VAR_6 = FUNC_1();

 VAR_4 = FUNC_2(VAR_2);

 VAR_5.type = VAR_0;
 VAR_5.u.ipc_id = VAR_2->key;

 return FUNC_0(&VAR_1,
       VAR_6, VAR_4->sid, VAR_4->sclass, VAR_3, &VAR_5);
}
