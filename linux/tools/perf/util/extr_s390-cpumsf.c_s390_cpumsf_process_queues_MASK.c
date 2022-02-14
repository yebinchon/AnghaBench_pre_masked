
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct s390_cpumsf_queue {int dummy; } ;
struct TYPE_7__ {TYPE_2__* heap_array; scalar_t__ heap_cnt; } ;
struct TYPE_5__ {struct auxtrace_queue* queue_array; } ;
struct s390_cpumsf {TYPE_3__ heap; TYPE_1__ queues; } ;
struct auxtrace_queue {struct s390_cpumsf_queue* priv; } ;
struct TYPE_6__ {scalar_t__ ordinal; unsigned int queue_nr; } ;


 int FUNC_0 (TYPE_3__*,unsigned int,scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct s390_cpumsf_queue*,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct s390_cpumsf *VAR_0, u64 VAR_1)
{
 unsigned int VAR_2;
 u64 VAR_3;
 int VAR_4;

 while (1) {
  struct auxtrace_queue *VAR_5;
  struct s390_cpumsf_queue *VAR_6;

  if (!VAR_0->heap.heap_cnt)
   return 0;

  if (VAR_0->heap.heap_array[0].ordinal >= VAR_1)
   return 0;

  VAR_2 = VAR_0->heap.heap_array[0].queue_nr;
  VAR_5 = &VAR_0->queues.queue_array[VAR_2];
  VAR_6 = VAR_5->priv;

  FUNC_1(&VAR_0->heap);
  if (VAR_0->heap.heap_cnt) {
   VAR_3 = VAR_0->heap.heap_array[0].ordinal + 1;
   if (VAR_3 > VAR_1)
    VAR_3 = VAR_1;
  } else {
   VAR_3 = VAR_1;
  }

  VAR_4 = FUNC_2(VAR_6, &VAR_3);
  if (VAR_4 < 0) {
   FUNC_0(&VAR_0->heap, VAR_2, VAR_3);
   return VAR_4;
  }
  if (!VAR_4) {
   VAR_4 = FUNC_0(&VAR_0->heap, VAR_2, VAR_3);
   if (VAR_4 < 0)
    return VAR_4;
  }
 }
 return 0;
}
