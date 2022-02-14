
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int next_prev_tid; int next_prev_pid; } ;
struct TYPE_3__ {int misc; } ;
union perf_event {TYPE_2__ context_switch; TYPE_1__ header; } ;
struct thread {int dummy; } ;
struct cs_etm_auxtrace {int machine; scalar_t__ timeless_decoding; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct thread* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct thread*) ;

__attribute__((used)) static int FUNC_2(struct cs_etm_auxtrace *VAR_2,
        union perf_event *VAR_3)
{
 struct thread *VAR_4;
 bool VAR_5 = VAR_3->header.misc & VAR_1;





 if (VAR_2->timeless_decoding)
  return 0;






 if (!VAR_5)
  return 0;





 VAR_4 = FUNC_0(VAR_2->machine,
         VAR_3->context_switch.next_prev_pid,
         VAR_3->context_switch.next_prev_tid);
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(VAR_4);

 return 0;
}
