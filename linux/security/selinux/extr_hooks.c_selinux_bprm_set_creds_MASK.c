
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct task_security_struct {scalar_t__ sid; scalar_t__ osid; scalar_t__ exec_sid; scalar_t__ sockcreate_sid; scalar_t__ keycreate_sid; scalar_t__ create_sid; } ;
struct linux_binprm {int unsafe; int secureexec; int per_clear; int file; int cred; scalar_t__ called_set_creds; } ;
struct inode_security_struct {scalar_t__ sid; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int file; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int ,int ,struct common_audit_data*) ;
 int FUNC_1 (struct linux_binprm*,struct task_security_struct const*,struct task_security_struct*) ;
 int FUNC_2 () ;
 struct inode* FUNC_3 (int ) ;
 struct inode_security_struct* FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *,scalar_t__,scalar_t__,int ,int *,scalar_t__*) ;
 void* FUNC_7 (int ) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_8(struct linux_binprm *VAR_14)
{
 const struct task_security_struct *VAR_15;
 struct task_security_struct *VAR_16;
 struct inode_security_struct *VAR_17;
 struct common_audit_data VAR_18;
 struct inode *VAR_19 = FUNC_3(VAR_14->file);
 int VAR_20;



 if (VAR_14->called_set_creds)
  return 0;

 VAR_15 = FUNC_7(FUNC_2());
 VAR_16 = FUNC_7(VAR_14->cred);
 VAR_17 = FUNC_4(VAR_19);


 VAR_16->sid = VAR_15->sid;
 VAR_16->osid = VAR_15->sid;


 VAR_16->create_sid = 0;
 VAR_16->keycreate_sid = 0;
 VAR_16->sockcreate_sid = 0;

 if (VAR_15->exec_sid) {
  VAR_16->sid = VAR_15->exec_sid;

  VAR_16->exec_sid = 0;


  VAR_20 = FUNC_1(VAR_14, VAR_15, VAR_16);
  if (VAR_20)
   return VAR_20;
 } else {

  VAR_20 = FUNC_6(&VAR_13, VAR_15->sid,
          VAR_17->sid, VAR_12, ((void*)0),
          &VAR_16->sid);
  if (VAR_20)
   return VAR_20;





  VAR_20 = FUNC_1(VAR_14, VAR_15, VAR_16);
  if (VAR_20)
   VAR_16->sid = VAR_15->sid;
 }

 VAR_18.type = VAR_3;
 VAR_18.u.file = VAR_14->file;

 if (VAR_16->sid == VAR_15->sid) {
  VAR_20 = FUNC_0(&VAR_13,
      VAR_15->sid, VAR_17->sid,
      VAR_11, VAR_2, &VAR_18);
  if (VAR_20)
   return VAR_20;
 } else {

  VAR_20 = FUNC_0(&VAR_13,
      VAR_15->sid, VAR_16->sid,
      VAR_12, VAR_10, &VAR_18);
  if (VAR_20)
   return VAR_20;

  VAR_20 = FUNC_0(&VAR_13,
      VAR_16->sid, VAR_17->sid,
      VAR_11, VAR_1, &VAR_18);
  if (VAR_20)
   return VAR_20;


  if (VAR_14->unsafe & VAR_5) {
   VAR_20 = FUNC_0(&VAR_13,
       VAR_15->sid, VAR_16->sid,
       VAR_12, VAR_9,
       ((void*)0));
   if (VAR_20)
    return -VAR_0;
  }



  if (VAR_14->unsafe & VAR_4) {
   u32 VAR_21 = FUNC_5();
   if (VAR_21 != 0) {
    VAR_20 = FUNC_0(&VAR_13,
        VAR_21, VAR_16->sid,
        VAR_12,
        VAR_8, ((void*)0));
    if (VAR_20)
     return -VAR_0;
   }
  }


  VAR_14->per_clear |= VAR_6;




  VAR_20 = FUNC_0(&VAR_13,
      VAR_15->sid, VAR_16->sid,
      VAR_12, VAR_7,
      ((void*)0));
  VAR_14->secureexec |= !!VAR_20;
 }

 return 0;
}
