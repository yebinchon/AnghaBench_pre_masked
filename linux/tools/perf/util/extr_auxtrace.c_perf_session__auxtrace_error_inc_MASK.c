
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_record_auxtrace_error {size_t type; } ;
union perf_event {struct perf_record_auxtrace_error auxtrace_error; } ;
struct perf_session {TYPE_2__* evlist; } ;
struct TYPE_3__ {int* nr_auxtrace_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 size_t VAR_0 ;

void FUNC_0(struct perf_session *VAR_1,
          union perf_event *VAR_2)
{
 struct perf_record_auxtrace_error *VAR_3 = &VAR_2->auxtrace_error;

 if (VAR_3->type < VAR_0)
  VAR_1->evlist->stats.nr_auxtrace_errors[VAR_3->type] += 1;
}
