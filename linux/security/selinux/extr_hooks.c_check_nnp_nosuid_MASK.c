
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct task_security_struct {scalar_t__ sid; } ;
struct linux_binprm {int unsafe; TYPE_2__* file; } ;
struct TYPE_3__ {int mnt; } ;
struct TYPE_4__ {TYPE_1__ f_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(const struct linux_binprm *VAR_7,
       const struct task_security_struct *VAR_8,
       const struct task_security_struct *VAR_9)
{
 int VAR_10 = (VAR_7->unsafe & VAR_2);
 int VAR_11 = !FUNC_1(VAR_7->file->f_path.mnt);
 int VAR_12;
 u32 VAR_13;

 if (!VAR_10 && !VAR_11)
  return 0;

 if (VAR_9->sid == VAR_8->sid)
  return 0;







 if (FUNC_3()) {
  VAR_13 = 0;
  if (VAR_10)
   VAR_13 |= VAR_3;
  if (VAR_11)
   VAR_13 |= VAR_4;
  VAR_12 = FUNC_0(&VAR_6,
      VAR_8->sid, VAR_9->sid,
      VAR_5, VAR_13, ((void*)0));
  if (!VAR_12)
   return 0;
 }






 VAR_12 = FUNC_2(&VAR_6, VAR_8->sid,
      VAR_9->sid);
 if (!VAR_12)
  return 0;






 if (VAR_10)
  return -VAR_1;
 return -VAR_0;
}
