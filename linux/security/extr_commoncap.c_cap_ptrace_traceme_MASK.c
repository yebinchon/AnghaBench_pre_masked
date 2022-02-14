
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cred {scalar_t__ user_ns; int cap_permitted; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cred* FUNC_0 (struct task_struct*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct cred* FUNC_2 () ;
 scalar_t__ FUNC_3 (struct task_struct*,scalar_t__,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int FUNC_6(struct task_struct *VAR_2)
{
 int VAR_3 = 0;
 const struct cred *VAR_4, *VAR_5;

 FUNC_4();
 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = FUNC_2();
 if (VAR_4->user_ns == VAR_5->user_ns &&
     FUNC_1(VAR_5->cap_permitted, VAR_4->cap_permitted))
  goto out;
 if (FUNC_3(VAR_2, VAR_5->user_ns, VAR_0))
  goto out;
 VAR_3 = -VAR_1;
out:
 FUNC_5();
 return VAR_3;
}
