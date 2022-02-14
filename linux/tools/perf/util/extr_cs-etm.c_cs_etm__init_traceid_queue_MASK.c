
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cs_etm_traceid_queue {int pid; void* packet; void* prev_packet; void* last_branch; void* last_branch_rb; int event_buf; int trace_chan_id; int tid; int packet_queue; } ;
struct cs_etm_queue {size_t queue_nr; struct cs_etm_auxtrace* etm; } ;
struct cs_etm_packet {int dummy; } ;
struct TYPE_4__ {int last_branch_sz; scalar_t__ last_branch; } ;
struct TYPE_3__ {struct auxtrace_queue* queue_array; } ;
struct cs_etm_auxtrace {TYPE_2__ synth_opts; TYPE_1__ queues; } ;
struct branch_stack {int dummy; } ;
struct branch_entry {int dummy; } ;
struct auxtrace_queue {int tid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (void**) ;

__attribute__((used)) static int FUNC_4(struct cs_etm_queue *VAR_2,
          struct cs_etm_traceid_queue *VAR_3,
          u8 VAR_4)
{
 int VAR_5 = -VAR_0;
 struct auxtrace_queue *VAR_6;
 struct cs_etm_auxtrace *VAR_7 = VAR_2->etm;

 FUNC_0(&VAR_3->packet_queue);

 VAR_6 = &VAR_2->etm->queues.queue_array[VAR_2->queue_nr];
 VAR_3->tid = VAR_6->tid;
 VAR_3->pid = -1;
 VAR_3->trace_chan_id = VAR_4;

 VAR_3->packet = FUNC_2(sizeof(struct cs_etm_packet));
 if (!VAR_3->packet)
  goto out;

 VAR_3->prev_packet = FUNC_2(sizeof(struct cs_etm_packet));
 if (!VAR_3->prev_packet)
  goto out_free;

 if (VAR_7->synth_opts.last_branch) {
  size_t VAR_8 = sizeof(struct branch_stack);

  VAR_8 += VAR_7->synth_opts.last_branch_sz *
        sizeof(struct branch_entry);
  VAR_3->last_branch = FUNC_2(VAR_8);
  if (!VAR_3->last_branch)
   goto out_free;
  VAR_3->last_branch_rb = FUNC_2(VAR_8);
  if (!VAR_3->last_branch_rb)
   goto out_free;
 }

 VAR_3->event_buf = FUNC_1(VAR_1);
 if (!VAR_3->event_buf)
  goto out_free;

 return 0;

out_free:
 FUNC_3(&VAR_3->last_branch_rb);
 FUNC_3(&VAR_3->last_branch);
 FUNC_3(&VAR_3->prev_packet);
 FUNC_3(&VAR_3->packet);
out:
 return VAR_5;
}
