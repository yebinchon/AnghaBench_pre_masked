
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max; TYPE_2__* table; } ;
struct thread_trace {TYPE_1__ files; } ;
struct syscall_arg {int val; int thread; } ;
struct TYPE_4__ {int pathname; } ;


 size_t FUNC_0 (char*,size_t,struct syscall_arg*) ;
 struct thread_trace* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static size_t FUNC_3(char *VAR_0, size_t VAR_1,
           struct syscall_arg *VAR_2)
{
 int VAR_3 = VAR_2->val;
 size_t VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 struct thread_trace *VAR_5 = FUNC_1(VAR_2->thread);

 if (VAR_5 && VAR_3 >= 0 && VAR_3 <= VAR_5->files.max)
  FUNC_2(&VAR_5->files.table[VAR_3].pathname);

 return VAR_4;
}
