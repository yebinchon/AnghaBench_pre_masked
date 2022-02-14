
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct msg_security_struct {scalar_t__ sid; } ;
struct msg_msg {int dummy; } ;
struct kern_ipc_perm {int key; } ;
struct ipc_security_struct {scalar_t__ sid; } ;
struct TYPE_2__ {int ipc_id; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int ,int ,struct common_audit_data*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,int ,int *,scalar_t__*) ;
 struct ipc_security_struct* FUNC_3 (struct kern_ipc_perm*) ;
 struct msg_security_struct* FUNC_4 (struct msg_msg*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(struct kern_ipc_perm *VAR_8, struct msg_msg *VAR_9, int VAR_10)
{
 struct ipc_security_struct *VAR_11;
 struct msg_security_struct *VAR_12;
 struct common_audit_data VAR_13;
 u32 VAR_14 = FUNC_1();
 int VAR_15;

 VAR_11 = FUNC_3(VAR_8);
 VAR_12 = FUNC_4(VAR_9);




 if (VAR_12->sid == VAR_6) {




  VAR_15 = FUNC_2(&VAR_7, VAR_14, VAR_11->sid,
          VAR_4, ((void*)0), &VAR_12->sid);
  if (VAR_15)
   return VAR_15;
 }

 VAR_13.type = VAR_0;
 VAR_13.u.ipc_id = VAR_8->key;


 VAR_15 = FUNC_0(&VAR_7,
     VAR_14, VAR_11->sid, VAR_5,
     VAR_2, &VAR_13);
 if (!VAR_15)

  VAR_15 = FUNC_0(&VAR_7,
      VAR_14, VAR_12->sid, VAR_4,
      VAR_3, &VAR_13);
 if (!VAR_15)

  VAR_15 = FUNC_0(&VAR_7,
      VAR_12->sid, VAR_11->sid, VAR_5,
      VAR_1, &VAR_13);

 return VAR_15;
}
