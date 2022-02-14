
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct inode_security_struct {scalar_t__ sid; } ;
struct file_security_struct {scalar_t__ sid; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct file* file; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int ,int ,struct common_audit_data*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct file*) ;
 struct inode_security_struct* FUNC_3 (int ) ;
 struct file_security_struct* FUNC_4 (struct file*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct file *VAR_6)
{
 struct common_audit_data VAR_7;
 struct inode_security_struct *VAR_8;
 struct file_security_struct *VAR_9;
 u32 VAR_10 = FUNC_1();
 int VAR_11;


 if (VAR_6 == ((void*)0))
  return FUNC_0(&VAR_5,
        VAR_10, VAR_10, VAR_3,
     VAR_4, ((void*)0));



 VAR_7.type = VAR_1;
 VAR_7.u.file = VAR_6;

 VAR_9 = FUNC_4(VAR_6);
 if (VAR_10 != VAR_9->sid) {
  VAR_11 = FUNC_0(&VAR_5,
      VAR_10, VAR_9->sid, VAR_2, VAR_0, &VAR_7);
  if (VAR_11)
   return VAR_11;
 }

 VAR_8 = FUNC_3(FUNC_2(VAR_6));
 return FUNC_0(&VAR_5,
       VAR_10, VAR_8->sid, VAR_3,
    VAR_4, &VAR_7);
}
