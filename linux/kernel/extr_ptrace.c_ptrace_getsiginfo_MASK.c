
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int * last_siginfo; } ;
typedef int kernel_siginfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct task_struct*,unsigned long*) ;
 int FUNC_3 (struct task_struct*,unsigned long*) ;

__attribute__((used)) static int FUNC_4(struct task_struct *VAR_2, kernel_siginfo_t *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = -VAR_1;

 if (FUNC_2(VAR_2, &VAR_4)) {
  VAR_5 = -VAR_0;
  if (FUNC_1(VAR_2->last_siginfo != ((void*)0))) {
   FUNC_0(VAR_3, VAR_2->last_siginfo);
   VAR_5 = 0;
  }
  FUNC_3(VAR_2, &VAR_4);
 }
 return VAR_5;
}
