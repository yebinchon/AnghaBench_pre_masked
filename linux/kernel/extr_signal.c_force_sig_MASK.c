
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_siginfo {int si_signo; scalar_t__ si_uid; scalar_t__ si_pid; int si_code; scalar_t__ si_errno; } ;


 int VAR_0 ;
 int FUNC_0 (struct kernel_siginfo*) ;
 int FUNC_1 (struct kernel_siginfo*) ;

void FUNC_2(int VAR_1)
{
 struct kernel_siginfo VAR_2;

 FUNC_0(&VAR_2);
 VAR_2.si_signo = VAR_1;
 VAR_2.si_errno = 0;
 VAR_2.si_code = VAR_0;
 VAR_2.si_pid = 0;
 VAR_2.si_uid = 0;
 FUNC_1(&VAR_2);
}
