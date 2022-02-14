
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cred {scalar_t__ user_ns; int cap_permitted; int cap_effective; } ;
typedef int kernel_cap_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct cred* FUNC_0 (struct task_struct*) ;
 scalar_t__ FUNC_1 (int ,int const) ;
 struct cred* FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int FUNC_6(struct task_struct *VAR_3, unsigned int VAR_4)
{
 int VAR_5 = 0;
 const struct cred *VAR_6, *VAR_7;
 const kernel_cap_t *VAR_8;

 FUNC_4();
 VAR_6 = FUNC_2();
 VAR_7 = FUNC_0(VAR_3);
 if (VAR_4 & VAR_2)
  VAR_8 = &VAR_6->cap_effective;
 else
  VAR_8 = &VAR_6->cap_permitted;
 if (VAR_6->user_ns == VAR_7->user_ns &&
     FUNC_1(VAR_7->cap_permitted, *VAR_8))
  goto out;
 if (FUNC_3(VAR_7->user_ns, VAR_0))
  goto out;
 VAR_5 = -VAR_1;
out:
 FUNC_5();
 return VAR_5;
}
