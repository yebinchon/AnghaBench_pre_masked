
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max; } ;
struct thread_trace {int syscall_stats; TYPE_1__ files; } ;


 int FUNC_0 (int *) ;
 struct thread_trace* FUNC_1 (int) ;

__attribute__((used)) static struct thread_trace *FUNC_2(void)
{
 struct thread_trace *VAR_0 = FUNC_1(sizeof(struct thread_trace));

 if (VAR_0) {
  VAR_0->files.max = -1;
  VAR_0->syscall_stats = FUNC_0(((void*)0));
 }

 return VAR_0;
}
