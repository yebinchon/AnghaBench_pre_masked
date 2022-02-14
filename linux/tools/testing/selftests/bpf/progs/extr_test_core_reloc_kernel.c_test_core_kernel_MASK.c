
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct task_struct {int tgid; int pid; } ;
struct TYPE_2__ {int* out; } ;


 scalar_t__ FUNC_0 (int*,int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 TYPE_1__ VAR_0 ;

int FUNC_3(void *VAR_1)
{
 struct task_struct *VAR_2 = (void *)FUNC_2();
 uint64_t VAR_3 = FUNC_1();
 int VAR_4, VAR_5;

 if (FUNC_0(&VAR_4, &VAR_2->pid) ||
     FUNC_0(&VAR_5, &VAR_2->tgid))
  return 1;


 VAR_0.out[0] = (((uint64_t)VAR_4 << 32) | VAR_5) == VAR_3;

 return 0;
}
