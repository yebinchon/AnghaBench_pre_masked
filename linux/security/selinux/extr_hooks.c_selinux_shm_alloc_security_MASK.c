
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kern_ipc_perm {int key; } ;
struct ipc_security_struct {int sid; } ;
struct TYPE_2__ {int ipc_id; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ,int ,struct common_audit_data*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ipc_security_struct*,int ) ;
 struct ipc_security_struct* FUNC_3 (struct kern_ipc_perm*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct kern_ipc_perm *VAR_4)
{
 struct ipc_security_struct *VAR_5;
 struct common_audit_data VAR_6;
 u32 VAR_7 = FUNC_1();
 int VAR_8;

 VAR_5 = FUNC_3(VAR_4);
 FUNC_2(VAR_5, VAR_1);

 VAR_6.type = VAR_0;
 VAR_6.u.ipc_id = VAR_4->key;

 VAR_8 = FUNC_0(&VAR_3,
     VAR_7, VAR_5->sid, VAR_1,
     VAR_2, &VAR_6);
 return VAR_8;
}
