
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct thread {int dummy; } ;
struct TYPE_6__ {int length; } ;
struct intel_bts_queue {int sample_flags; TYPE_3__ intel_pt_insn; int cpu; TYPE_2__* bts; } ;
struct branch {int to; int from; } ;
struct auxtrace_buffer {size_t use_size; size_t size; scalar_t__ buffer_nr; struct branch* data; struct branch* use_data; } ;
struct TYPE_4__ {scalar_t__ thread_stack; } ;
struct TYPE_5__ {int branches_filter; TYPE_1__ synth_opts; int sample_branches; } ;


 int FUNC_0 (struct intel_bts_queue*,struct branch*) ;
 int FUNC_1 (struct intel_bts_queue*,struct branch*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct thread*,int ,int,int ,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct intel_bts_queue *VAR_0,
        struct auxtrace_buffer *VAR_1,
        struct thread *VAR_2)
{
 struct branch *VAR_3;
 size_t VAR_4, VAR_5 = sizeof(struct branch);
 u32 VAR_6 = VAR_0->bts->branches_filter;
 int VAR_7 = 0;

 if (VAR_1->use_data) {
  VAR_4 = VAR_1->use_size;
  VAR_3 = VAR_1->use_data;
 } else {
  VAR_4 = VAR_1->size;
  VAR_3 = VAR_1->data;
 }

 if (!VAR_0->bts->sample_branches)
  return 0;

 for (; VAR_4 > VAR_5; VAR_3 += 1, VAR_4 -= VAR_5) {
  if (!VAR_3->from && !VAR_3->to)
   continue;
  FUNC_0(VAR_0, VAR_3);
  if (VAR_0->bts->synth_opts.thread_stack)
   FUNC_3(VAR_2, VAR_0->cpu, VAR_0->sample_flags,
         FUNC_2(VAR_3->from),
         FUNC_2(VAR_3->to),
         VAR_0->intel_pt_insn.length,
         VAR_1->buffer_nr + 1);
  if (VAR_6 && !(VAR_6 & VAR_0->sample_flags))
   continue;
  VAR_7 = FUNC_1(VAR_0, VAR_3);
  if (VAR_7)
   break;
 }
 return VAR_7;
}
