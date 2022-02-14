
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int type; } ;
struct TYPE_4__ {TYPE_1__ header; } ;
union perf_event {TYPE_2__ sample; } ;
struct perf_sample {int insn; int insn_len; int cpu; int tid; int pid; } ;
struct perf_event_header {int dummy; } ;
struct intel_pt_queue {int insn; int insn_len; int cpu; int tid; int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct intel_pt_queue *VAR_2,
       union perf_event *VAR_3,
       struct perf_sample *VAR_4)
{
 VAR_3->sample.header.type = VAR_1;
 VAR_3->sample.header.size = sizeof(struct perf_event_header);

 VAR_4->pid = VAR_2->pid;
 VAR_4->tid = VAR_2->tid;
 VAR_4->cpu = VAR_2->cpu;
 VAR_4->insn_len = VAR_2->insn_len;
 FUNC_0(VAR_4->insn, VAR_2->insn, VAR_0);
}
