
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct thread_stack {int kernel_start; TYPE_1__* crp; } ;
struct symbol {int dummy; } ;
struct perf_sample {int time; scalar_t__ addr; scalar_t__ ip; } ;
struct call_path_root {int call_path; } ;
struct call_path {int dummy; } ;
struct addr_location {struct symbol* sym; } ;
struct TYPE_2__ {struct call_path_root* cpr; } ;


 struct call_path* FUNC_0 (struct call_path_root*,int *,struct symbol*,scalar_t__,int ) ;
 int FUNC_1 (struct thread_stack*,scalar_t__,int ,scalar_t__,struct call_path*,int,int) ;

__attribute__((used)) static int FUNC_2(struct thread_stack *VAR_0,
    struct perf_sample *VAR_1,
    struct addr_location *VAR_2,
    struct addr_location *VAR_3, u64 VAR_4)
{
 struct call_path_root *VAR_5 = VAR_0->crp->cpr;
 struct call_path *VAR_6;
 struct symbol *VAR_7;
 u64 VAR_8;

 if (VAR_1->ip) {
  VAR_8 = VAR_1->ip;
  VAR_7 = VAR_2->sym;
 } else if (VAR_1->addr) {
  VAR_8 = VAR_1->addr;
  VAR_7 = VAR_3->sym;
 } else {
  return 0;
 }

 VAR_6 = FUNC_0(VAR_5, &VAR_5->call_path, VAR_7, VAR_8,
    VAR_0->kernel_start);

 return FUNC_1(VAR_0, VAR_8, VAR_1->time, VAR_4, VAR_6,
         1, 0);
}
