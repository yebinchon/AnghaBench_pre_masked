
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_bts_queue {int cpu; int on_heap; TYPE_1__* buffer; int tid; } ;
struct intel_bts {int heap; scalar_t__ sampling_mode; } ;
struct auxtrace_queue {int cpu; int tid; struct intel_bts_queue* priv; int head; } ;
struct TYPE_2__ {int reference; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct auxtrace_queue*,int *) ;
 int FUNC_1 (int *,unsigned int,int ) ;
 struct intel_bts_queue* FUNC_2 (struct intel_bts*,unsigned int) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct intel_bts *VAR_1,
     struct auxtrace_queue *VAR_2,
     unsigned int VAR_3)
{
 struct intel_bts_queue *VAR_4 = VAR_2->priv;

 if (FUNC_3(&VAR_2->head))
  return 0;

 if (!VAR_4) {
  VAR_4 = FUNC_2(VAR_1, VAR_3);
  if (!VAR_4)
   return -VAR_0;
  VAR_2->priv = VAR_4;

  if (VAR_2->cpu != -1)
   VAR_4->cpu = VAR_2->cpu;
  VAR_4->tid = VAR_2->tid;
 }

 if (VAR_1->sampling_mode)
  return 0;

 if (!VAR_4->on_heap && !VAR_4->buffer) {
  int VAR_5;

  VAR_4->buffer = FUNC_0(VAR_2, ((void*)0));
  if (!VAR_4->buffer)
   return 0;

  VAR_5 = FUNC_1(&VAR_1->heap, VAR_3,
      VAR_4->buffer->reference);
  if (VAR_5)
   return VAR_5;
  VAR_4->on_heap = 1;
 }

 return 0;
}
