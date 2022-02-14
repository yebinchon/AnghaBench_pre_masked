
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_trace {size_t (* ret_scnprintf ) (char*,size_t,struct syscall_arg*) ;} ;
struct syscall_arg {int thread; } ;


 struct thread_trace* FUNC_0 (int ) ;

void FUNC_1(struct syscall_arg *VAR_0,
        size_t (*VAR_1)(char *VAR_2, size_t VAR_3, struct syscall_arg *VAR_4))
{
 struct thread_trace *VAR_5 = FUNC_0(VAR_0->thread);

 VAR_5->ret_scnprintf = VAR_1;
}
