
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct thread {int pid_; } ;
struct intel_bts_queue {int done; int pid; size_t queue_nr; TYPE_4__* bts; struct auxtrace_buffer* buffer; int cpu; int tid; } ;
struct auxtrace_queue {int dummy; } ;
struct auxtrace_buffer {int reference; scalar_t__ buffer_nr; scalar_t__ consecutive; int data; } ;
struct TYPE_7__ {int thread_stack; int callchain; } ;
struct TYPE_5__ {struct auxtrace_queue* queue_array; } ;
struct TYPE_8__ {scalar_t__ sampling_mode; scalar_t__ snapshot_mode; TYPE_3__ synth_opts; TYPE_2__* session; TYPE_1__ queues; int machine; } ;
struct TYPE_6__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct auxtrace_buffer*) ;
 int FUNC_1 (struct auxtrace_buffer*,int) ;
 void* FUNC_2 (struct auxtrace_queue*,struct auxtrace_buffer*) ;
 scalar_t__ FUNC_3 (struct auxtrace_queue*,struct auxtrace_buffer*) ;
 int FUNC_4 (struct intel_bts_queue*,struct auxtrace_buffer*,struct thread*) ;
 struct thread* FUNC_5 (int ,int,int ) ;
 struct thread* FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct thread*) ;
 int FUNC_9 (struct thread*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct intel_bts_queue *VAR_2, u64 *VAR_3)
{
 struct auxtrace_buffer *VAR_4 = VAR_2->buffer, *VAR_5 = VAR_4;
 struct auxtrace_queue *VAR_6;
 struct thread *VAR_7;
 int VAR_8;

 if (VAR_2->done)
  return 1;

 if (VAR_2->pid == -1) {
  VAR_7 = FUNC_5(VAR_2->bts->machine, -1,
           VAR_2->tid);
  if (VAR_7)
   VAR_2->pid = VAR_7->pid_;
 } else {
  VAR_7 = FUNC_6(VAR_2->bts->machine, VAR_2->pid,
       VAR_2->tid);
 }

 VAR_6 = &VAR_2->bts->queues.queue_array[VAR_2->queue_nr];

 if (!VAR_4)
  VAR_4 = FUNC_2(VAR_6, ((void*)0));

 if (!VAR_4) {
  if (!VAR_2->bts->sampling_mode)
   VAR_2->done = 1;
  VAR_8 = 1;
  goto out_put;
 }


 if (VAR_4->consecutive) {
  VAR_8 = -VAR_0;
  goto out_put;
 }

 if (!VAR_4->data) {
  int VAR_9 = FUNC_7(VAR_2->bts->session->data);

  VAR_4->data = FUNC_1(VAR_4, VAR_9);
  if (!VAR_4->data) {
   VAR_8 = -VAR_1;
   goto out_put;
  }
 }

 if (VAR_2->bts->snapshot_mode && !VAR_4->consecutive &&
     FUNC_3(VAR_6, VAR_4)) {
  VAR_8 = -VAR_1;
  goto out_put;
 }

 if (!VAR_2->bts->synth_opts.callchain &&
     !VAR_2->bts->synth_opts.thread_stack && VAR_7 &&
     (!VAR_5 || VAR_2->bts->sampling_mode ||
      (VAR_2->bts->snapshot_mode && !VAR_4->consecutive)))
  FUNC_9(VAR_7, VAR_2->cpu, VAR_4->buffer_nr + 1);

 VAR_8 = FUNC_4(VAR_2, VAR_4, VAR_7);

 FUNC_0(VAR_4);

 VAR_2->buffer = FUNC_2(VAR_6, VAR_4);
 if (VAR_2->buffer) {
  if (VAR_3)
   *VAR_3 = VAR_2->buffer->reference;
 } else {
  if (!VAR_2->bts->sampling_mode)
   VAR_2->done = 1;
 }
out_put:
 FUNC_8(VAR_7);
 return VAR_8;
}
