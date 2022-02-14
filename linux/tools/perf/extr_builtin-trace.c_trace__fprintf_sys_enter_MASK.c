
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace {int output; int raw_augmented_syscalls_args_size; int host; } ;
struct thread_trace {int dummy; } ;
struct thread {int dummy; } ;
struct syscall {int dummy; } ;
struct perf_sample {int tid; int pid; } ;
struct evsel {int dummy; } ;
typedef int msg ;


 int FUNC_0 (int ,char*,char*) ;
 int VAR_0 ;
 struct thread* FUNC_1 (int ,int ,int ) ;
 void* FUNC_2 (struct evsel*,void*,struct perf_sample*) ;
 int FUNC_3 (struct evsel*,int ,struct perf_sample*) ;
 void* FUNC_4 (struct syscall*,struct perf_sample*,int*,int ) ;
 int FUNC_5 (struct syscall*,char*,int,void*,void*,int,struct trace*,struct thread*) ;
 int FUNC_6 (struct thread*) ;
 struct thread_trace* FUNC_7 (struct thread*,int ) ;
 struct syscall* FUNC_8 (struct trace*,struct evsel*,int) ;

__attribute__((used)) static int FUNC_9(struct trace *VAR_1, struct evsel *VAR_2,
        struct perf_sample *VAR_3)
{
 struct thread_trace *VAR_4;
 struct thread *VAR_5;
 int VAR_6 = FUNC_3(VAR_2, VAR_6, VAR_3), VAR_7 = -1;
 struct syscall *VAR_8 = FUNC_8(VAR_1, VAR_2, VAR_6);
 char VAR_9[1024];
 void *VAR_10, *VAR_11 = ((void*)0);
 int VAR_12;

 if (VAR_8 == ((void*)0))
  return -1;

 VAR_5 = FUNC_1(VAR_1->host, VAR_3->pid, VAR_3->tid);
 VAR_4 = FUNC_7(VAR_5, VAR_1->output);




 if (VAR_4 == ((void*)0))
  goto out_put;

 VAR_10 = FUNC_2(VAR_2, VAR_10, VAR_3);
 VAR_11 = FUNC_4(VAR_8, VAR_3, &VAR_12, VAR_1->raw_augmented_syscalls_args_size);
 FUNC_5(VAR_8, VAR_9, sizeof(VAR_9), VAR_10, VAR_11, VAR_12, VAR_1, VAR_5);
 FUNC_0(VAR_1->output, "%s", VAR_9);
 VAR_7 = 0;
out_put:
 FUNC_6(VAR_5);
 return VAR_7;
}
