
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct task_struct {int dummy; } ;
struct inode_security_struct {scalar_t__ sid; int sclass; } ;
struct file_security_struct {scalar_t__ sid; } ;
struct TYPE_4__ {struct dentry* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct dentry {int dummy; } ;
struct TYPE_3__ {TYPE_2__ path; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,int ,int ,struct common_audit_data*) ;
 struct inode_security_struct* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct file*,scalar_t__) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct file*) ;
 struct file_security_struct* FUNC_6 (struct file*) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (struct task_struct*) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct task_struct *VAR_4,
     struct task_struct *VAR_5,
     struct file *VAR_6)
{
 u32 VAR_7 = FUNC_7(VAR_5);
 struct file_security_struct *VAR_8 = FUNC_6(VAR_6);
 struct dentry *VAR_9 = VAR_6->f_path.dentry;
 struct inode_security_struct *VAR_10;
 struct common_audit_data VAR_11;
 int VAR_12;

 VAR_11.type = VAR_1;
 VAR_11.u.path = VAR_6->f_path;

 if (VAR_7 != VAR_8->sid) {
  VAR_12 = FUNC_1(&VAR_3,
      VAR_7, VAR_8->sid,
      VAR_2,
      VAR_0,
      &VAR_11);
  if (VAR_12)
   return VAR_12;
 }







 if (FUNC_8(FUNC_0(FUNC_4(VAR_9))))
  return 0;

 VAR_10 = FUNC_2(VAR_9);
 return FUNC_1(&VAR_3,
       VAR_7, VAR_10->sid, VAR_10->sclass, FUNC_5(VAR_6),
       &VAR_11);
}
