
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct thread_stack {int cnt; } ;
struct thread {int dummy; } ;
struct perf_sample {int time; } ;


 int FUNC_0 (struct thread*,struct thread_stack*,int ,int ,int ,int) ;
 scalar_t__ FUNC_1 (struct thread_stack*) ;

__attribute__((used)) static int FUNC_2(struct thread *VAR_0, struct thread_stack *VAR_1,
    struct perf_sample *VAR_2, u64 VAR_3)
{
 u64 VAR_4 = VAR_2->time;
 int VAR_5;


 while (FUNC_1(VAR_1)) {
  VAR_5 = FUNC_0(VAR_0, VAR_1, --VAR_1->cnt,
      VAR_4, VAR_3, 1);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
