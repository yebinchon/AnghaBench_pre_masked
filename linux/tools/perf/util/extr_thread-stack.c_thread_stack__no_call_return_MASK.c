
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct thread_stack {scalar_t__ kernel_start; int cnt; TYPE_2__* stack; TYPE_1__* crp; } ;
struct thread {int dummy; } ;
struct symbol {int dummy; } ;
struct perf_sample {scalar_t__ addr; scalar_t__ time; scalar_t__ ip; } ;
struct call_path {struct symbol* sym; } ;
struct call_path_root {struct call_path call_path; } ;
struct addr_location {struct symbol* sym; } ;
struct TYPE_4__ {int non_call; struct call_path* cp; } ;
struct TYPE_3__ {struct call_path_root* cpr; } ;


 struct call_path* FUNC_0 (struct call_path_root*,struct call_path*,struct symbol*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct thread*,struct thread_stack*,int,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct thread_stack*) ;
 int FUNC_3 (struct thread*,struct thread_stack*,struct perf_sample*,scalar_t__) ;
 int FUNC_4 (struct thread_stack*,scalar_t__,scalar_t__,scalar_t__,struct call_path*,int,int) ;

__attribute__((used)) static int FUNC_5(struct thread *VAR_0,
     struct thread_stack *VAR_1,
     struct perf_sample *VAR_2,
     struct addr_location *VAR_3,
     struct addr_location *VAR_4, u64 VAR_5)
{
 struct call_path_root *VAR_6 = VAR_1->crp->cpr;
 struct call_path *VAR_7 = &VAR_6->call_path;
 struct symbol *VAR_8 = VAR_3->sym;
 struct symbol *VAR_9 = VAR_4->sym;
 struct call_path *VAR_10, *VAR_11;
 u64 VAR_12 = VAR_1->kernel_start;
 u64 VAR_13 = VAR_2->addr;
 u64 VAR_14 = VAR_2->time;
 u64 VAR_15 = VAR_2->ip;
 int VAR_16;

 if (VAR_15 >= VAR_12 && VAR_13 < VAR_12) {

  VAR_16 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_5);
  if (VAR_16)
   return VAR_16;


  if (!VAR_1->cnt) {
   VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_9, VAR_13, VAR_12);
   return FUNC_4(VAR_1, 0, VAR_14, VAR_5, VAR_10, 1,
           0);
  }
 } else if (FUNC_2(VAR_1) && VAR_15 < VAR_12) {

  VAR_16 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_5);
  if (VAR_16)
   return VAR_16;
 }

 if (VAR_1->cnt)
  VAR_11 = VAR_1->stack[VAR_1->cnt - 1].cp;
 else
  VAR_11 = VAR_7;

 if (VAR_11->sym == VAR_3->sym) {





  if (VAR_1->cnt == 1) {
   VAR_16 = FUNC_1(VAR_0, VAR_1, --VAR_1->cnt,
       VAR_14, VAR_5, 0);
   if (VAR_16)
    return VAR_16;
  }

  if (!VAR_1->cnt) {
   VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_9, VAR_13, VAR_12);

   return FUNC_4(VAR_1, VAR_13, VAR_14, VAR_5, VAR_10,
           1, 0);
  }





  VAR_10 = FUNC_0(VAR_6, VAR_11, VAR_9, VAR_13, VAR_12);

  VAR_16 = FUNC_4(VAR_1, 0, VAR_14, VAR_5, VAR_10, 1, 0);
  if (!VAR_16)
   VAR_1->stack[VAR_1->cnt - 1].non_call = 1;

  return VAR_16;
 }






 VAR_10 = FUNC_0(VAR_6, VAR_11, VAR_9, VAR_13, VAR_12);

 VAR_16 = FUNC_4(VAR_1, VAR_13, VAR_14, VAR_5, VAR_10, 1, 0);
 if (VAR_16)
  return VAR_16;

 VAR_10 = FUNC_0(VAR_6, VAR_10, VAR_8, VAR_15, VAR_12);

 VAR_16 = FUNC_4(VAR_1, VAR_15, VAR_14, VAR_5, VAR_10, 1, 0);
 if (VAR_16)
  return VAR_16;

 return FUNC_1(VAR_0, VAR_1, --VAR_1->cnt, VAR_14, VAR_5, 0);
}
