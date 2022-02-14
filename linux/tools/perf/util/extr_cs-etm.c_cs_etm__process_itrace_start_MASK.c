
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tid; int pid; } ;
union perf_event {TYPE_1__ itrace_start; } ;
struct thread {int dummy; } ;
struct cs_etm_auxtrace {int machine; scalar_t__ timeless_decoding; } ;


 int VAR_0 ;
 struct thread* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct thread*) ;

__attribute__((used)) static int FUNC_2(struct cs_etm_auxtrace *VAR_1,
     union perf_event *VAR_2)
{
 struct thread *VAR_3;

 if (VAR_1->timeless_decoding)
  return 0;





 VAR_3 = FUNC_0(VAR_1->machine,
         VAR_2->itrace_start.pid,
         VAR_2->itrace_start.tid);
 if (!VAR_3)
  return -VAR_0;

 FUNC_1(VAR_3);

 return 0;
}
