
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int idx; int size; int reference; int offset; int cpu; int tid; } ;
union perf_event {TYPE_1__ auxtrace; } ;
struct perf_session {int dummy; } ;
struct auxtrace_queues {int dummy; } ;
struct auxtrace_buffer {int pid; int size; int reference; int offset; int data_offset; int cpu; int tid; } ;
typedef int off_t ;


 int FUNC_0 (struct auxtrace_queues*,struct perf_session*,unsigned int,struct auxtrace_buffer*,struct auxtrace_buffer**) ;

int FUNC_1(struct auxtrace_queues *VAR_0,
          struct perf_session *VAR_1,
          union perf_event *VAR_2, off_t VAR_3,
          struct auxtrace_buffer **VAR_4)
{
 struct auxtrace_buffer VAR_5 = {
  .pid = -1,
  .tid = VAR_2->auxtrace.tid,
  .cpu = VAR_2->auxtrace.cpu,
  .data_offset = VAR_3,
  .offset = VAR_2->auxtrace.offset,
  .reference = VAR_2->auxtrace.reference,
  .size = VAR_2->auxtrace.size,
 };
 unsigned int VAR_6 = VAR_2->auxtrace.idx;

 return FUNC_0(VAR_0, VAR_1, VAR_6, &VAR_5,
        VAR_4);
}
