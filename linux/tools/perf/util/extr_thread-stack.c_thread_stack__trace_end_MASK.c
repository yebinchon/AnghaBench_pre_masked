
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct thread_stack {int cnt; int kernel_start; TYPE_1__* stack; TYPE_2__* crp; } ;
struct perf_sample {int time; scalar_t__ insn_len; scalar_t__ ip; } ;
struct call_path_root {int dummy; } ;
struct call_path {int dummy; } ;
struct TYPE_4__ {struct call_path_root* cpr; } ;
struct TYPE_3__ {int cp; scalar_t__ ref; } ;


 struct call_path* FUNC_0 (struct call_path_root*,int ,int *,int ,int ) ;
 int FUNC_1 (struct thread_stack*,scalar_t__,int ,scalar_t__,struct call_path*,int,int) ;

__attribute__((used)) static int FUNC_2(struct thread_stack *VAR_0,
       struct perf_sample *VAR_1, u64 VAR_2)
{
 struct call_path_root *VAR_3 = VAR_0->crp->cpr;
 struct call_path *VAR_4;
 u64 VAR_5;


 if (!VAR_0->cnt || (VAR_0->cnt == 1 && VAR_0->stack[0].ref == VAR_2))
  return 0;

 VAR_4 = FUNC_0(VAR_3, VAR_0->stack[VAR_0->cnt - 1].cp, ((void*)0), 0,
    VAR_0->kernel_start);

 VAR_5 = VAR_1->ip + VAR_1->insn_len;

 return FUNC_1(VAR_0, VAR_5, VAR_1->time, VAR_2, VAR_4,
         0, 1);
}
