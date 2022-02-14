
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct task_struct {int dummy; } ;
struct msg_security_struct {int sid; } ;
struct msg_msg {int dummy; } ;
struct kern_ipc_perm {int key; } ;
struct ipc_security_struct {int sid; } ;
struct TYPE_2__ {int ipc_id; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,int ,int ,struct common_audit_data*) ;
 struct ipc_security_struct* FUNC_1 (struct kern_ipc_perm*) ;
 struct msg_security_struct* FUNC_2 (struct msg_msg*) ;
 int VAR_5 ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static int FUNC_4(struct kern_ipc_perm *VAR_6, struct msg_msg *VAR_7,
        struct task_struct *VAR_8,
        long VAR_9, int VAR_10)
{
 struct ipc_security_struct *VAR_11;
 struct msg_security_struct *VAR_12;
 struct common_audit_data VAR_13;
 u32 VAR_14 = FUNC_3(VAR_8);
 int VAR_15;

 VAR_11 = FUNC_1(VAR_6);
 VAR_12 = FUNC_2(VAR_7);

 VAR_13.type = VAR_0;
 VAR_13.u.ipc_id = VAR_6->key;

 VAR_15 = FUNC_0(&VAR_5,
     VAR_14, VAR_11->sid,
     VAR_4, VAR_1, &VAR_13);
 if (!VAR_15)
  VAR_15 = FUNC_0(&VAR_5,
      VAR_14, VAR_12->sid,
      VAR_3, VAR_2, &VAR_13);
 return VAR_15;
}
