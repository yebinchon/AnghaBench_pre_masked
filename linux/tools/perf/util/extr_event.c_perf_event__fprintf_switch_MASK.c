
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int next_prev_pid; int next_prev_tid; } ;
struct TYPE_4__ {int misc; scalar_t__ type; } ;
union perf_event {TYPE_1__ context_switch; TYPE_2__ header; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (int *,char*,char const*,...) ;

size_t FUNC_1(union perf_event *VAR_3, FILE *VAR_4)
{
 bool VAR_5 = VAR_3->header.misc & VAR_0;
 const char *VAR_6 = !VAR_5 ? "IN         " :
  !(VAR_3->header.misc & VAR_1) ?
        "OUT        " : "OUT preempt";

 if (VAR_3->header.type == VAR_2)
  return FUNC_0(VAR_4, " %s\n", VAR_6);

 return FUNC_0(VAR_4, " %s  %s pid/tid: %5u/%-5u\n",
         VAR_6, VAR_5 ? "next" : "prev",
         VAR_3->context_switch.next_prev_pid,
         VAR_3->context_switch.next_prev_tid);
}
