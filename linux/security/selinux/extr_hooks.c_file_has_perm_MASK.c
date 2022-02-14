
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct inode {int dummy; } ;
struct file_security_struct {scalar_t__ sid; } ;
struct file {int dummy; } ;
struct cred {int dummy; } ;
struct TYPE_2__ {struct file* file; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int ,int ,struct common_audit_data*) ;
 int FUNC_1 (struct file*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct cred const*) ;
 struct inode* FUNC_3 (struct file*) ;
 int FUNC_4 (struct cred const*,struct inode*,scalar_t__,struct common_audit_data*) ;
 struct file_security_struct* FUNC_5 (struct file*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(const struct cred *VAR_4,
    struct file *VAR_5,
    u32 VAR_6)
{
 struct file_security_struct *VAR_7 = FUNC_5(VAR_5);
 struct inode *VAR_8 = FUNC_3(VAR_5);
 struct common_audit_data VAR_9;
 u32 VAR_10 = FUNC_2(VAR_4);
 int VAR_11;

 VAR_9.type = VAR_1;
 VAR_9.u.file = VAR_5;

 if (VAR_10 != VAR_7->sid) {
  VAR_11 = FUNC_0(&VAR_3,
      VAR_10, VAR_7->sid,
      VAR_2,
      VAR_0,
      &VAR_9);
  if (VAR_11)
   goto out;
 }
 VAR_11 = 0;
 if (VAR_6)
  VAR_11 = FUNC_4(VAR_4, VAR_8, VAR_6, &VAR_9);

out:
 return VAR_11;
}
