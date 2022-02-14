
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct intel_bts_queue {int on_heap; } ;
struct TYPE_7__ {TYPE_1__* heap_array; int heap_cnt; } ;
struct TYPE_6__ {struct auxtrace_queue* queue_array; } ;
struct intel_bts {TYPE_3__ heap; TYPE_2__ queues; } ;
struct auxtrace_queue {struct intel_bts_queue* priv; } ;
struct TYPE_5__ {scalar_t__ ordinal; unsigned int queue_nr; } ;


 int FUNC_0 (TYPE_3__*,unsigned int,scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct intel_bts_queue*,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct intel_bts *VAR_0, u64 VAR_1)
{
 while (1) {
  unsigned int VAR_2;
  struct auxtrace_queue *VAR_3;
  struct intel_bts_queue *VAR_4;
  u64 VAR_5 = 0;
  int VAR_6;

  if (!VAR_0->heap.heap_cnt)
   return 0;

  if (VAR_0->heap.heap_array[0].ordinal > VAR_1)
   return 0;

  VAR_2 = VAR_0->heap.heap_array[0].queue_nr;
  VAR_3 = &VAR_0->queues.queue_array[VAR_2];
  VAR_4 = VAR_3->priv;

  FUNC_1(&VAR_0->heap);

  VAR_6 = FUNC_2(VAR_4, &VAR_5);
  if (VAR_6 < 0) {
   FUNC_0(&VAR_0->heap, VAR_2, VAR_5);
   return VAR_6;
  }

  if (!VAR_6) {
   VAR_6 = FUNC_0(&VAR_0->heap, VAR_2, VAR_5);
   if (VAR_6 < 0)
    return VAR_6;
  } else {
   VAR_4->on_heap = 0;
  }
 }

 return 0;
}
