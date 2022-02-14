
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_struct {int dummy; } ;
struct kernel_siginfo {int dummy; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_1 (struct cred const*) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct task_struct*) ;

__attribute__((used)) static int FUNC_5(struct task_struct *VAR_3, struct kernel_siginfo *VAR_4,
    int VAR_5, const struct cred *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;

 if (!VAR_5)
  VAR_8 = VAR_0;
 else
  VAR_8 = FUNC_3(VAR_5);
 if (!VAR_6)
  VAR_7 = FUNC_2();
 else
  VAR_7 = FUNC_1(VAR_6);
 return FUNC_0(&VAR_2,
       VAR_7, FUNC_4(VAR_3), VAR_1, VAR_8, ((void*)0));
}
