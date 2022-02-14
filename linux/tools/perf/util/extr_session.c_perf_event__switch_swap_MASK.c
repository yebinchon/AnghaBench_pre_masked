
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* next_prev_tid; void* next_prev_pid; } ;
struct TYPE_3__ {scalar_t__ type; } ;
union perf_event {TYPE_2__ context_switch; TYPE_1__ header; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (union perf_event*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(union perf_event *VAR_1, bool VAR_2)
{
 if (VAR_1->header.type == VAR_0) {
  VAR_1->context_switch.next_prev_pid =
    FUNC_0(VAR_1->context_switch.next_prev_pid);
  VAR_1->context_switch.next_prev_tid =
    FUNC_0(VAR_1->context_switch.next_prev_tid);
 }

 if (VAR_2)
  FUNC_1(VAR_1, &VAR_1->context_switch + 1);
}
