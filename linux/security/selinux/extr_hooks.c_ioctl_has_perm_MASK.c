
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct lsm_ioctlop_audit {int cmd; int path; } ;
struct inode_security_struct {int sclass; int sid; } ;
struct inode {int dummy; } ;
struct file_security_struct {scalar_t__ sid; } ;
struct file {int f_path; } ;
struct cred {int dummy; } ;
struct TYPE_2__ {struct lsm_ioctlop_audit* op; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,scalar_t__,int ,int ,scalar_t__,int,int,struct common_audit_data*) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,int ,int ,struct common_audit_data*) ;
 scalar_t__ FUNC_3 (struct cred const*) ;
 struct inode* FUNC_4 (struct file*) ;
 struct inode_security_struct* FUNC_5 (struct inode*) ;
 struct file_security_struct* FUNC_6 (struct file*) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(const struct cred *VAR_4, struct file *VAR_5,
  u32 VAR_6, u16 VAR_7)
{
 struct common_audit_data VAR_8;
 struct file_security_struct *VAR_9 = FUNC_6(VAR_5);
 struct inode *VAR_10 = FUNC_4(VAR_5);
 struct inode_security_struct *VAR_11;
 struct lsm_ioctlop_audit VAR_12;
 u32 VAR_13 = FUNC_3(VAR_4);
 int VAR_14;
 u8 VAR_15 = VAR_7 >> 8;
 u8 VAR_16 = VAR_7 & 0xff;

 VAR_8.type = VAR_1;
 VAR_8.u.op = &VAR_12;
 VAR_8.u.op->cmd = VAR_7;
 VAR_8.u.op->path = VAR_5->f_path;

 if (VAR_13 != VAR_9->sid) {
  VAR_14 = FUNC_2(&VAR_3,
      VAR_13, VAR_9->sid,
    VAR_2,
    VAR_0,
    &VAR_8);
  if (VAR_14)
   goto out;
 }

 if (FUNC_7(FUNC_0(VAR_10)))
  return 0;

 VAR_11 = FUNC_5(VAR_10);
 VAR_14 = FUNC_1(&VAR_3,
        VAR_13, VAR_11->sid, VAR_11->sclass,
        VAR_6, VAR_15, VAR_16, &VAR_8);
out:
 return VAR_14;
}
