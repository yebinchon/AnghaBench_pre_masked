
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auxtrace_queues {unsigned int nr_queues; int new_data; int populated; int next_buffer_nr; struct auxtrace_queue* queue_array; } ;
struct auxtrace_queue {int set; scalar_t__ tid; scalar_t__ cpu; int head; } ;
struct auxtrace_buffer {scalar_t__ tid; scalar_t__ cpu; int list; scalar_t__ buffer_nr; } ;


 int VAR_0 ;
 int FUNC_0 (struct auxtrace_queues*,unsigned int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct auxtrace_queues *VAR_1,
      unsigned int VAR_2,
      struct auxtrace_buffer *VAR_3)
{
 struct auxtrace_queue *VAR_4;
 int VAR_5;

 if (VAR_2 >= VAR_1->nr_queues) {
  VAR_5 = FUNC_0(VAR_1, VAR_2 + 1);
  if (VAR_5)
   return VAR_5;
 }

 VAR_4 = &VAR_1->queue_array[VAR_2];

 if (!VAR_4->set) {
  VAR_4->set = 1;
  VAR_4->tid = VAR_3->tid;
  VAR_4->cpu = VAR_3->cpu;
 } else if (VAR_3->cpu != VAR_4->cpu || VAR_3->tid != VAR_4->tid) {
  FUNC_2("auxtrace queue conflict: cpu %d, tid %d vs cpu %d, tid %d\n",
         VAR_4->cpu, VAR_4->tid, VAR_3->cpu, VAR_3->tid);
  return -VAR_0;
 }

 VAR_3->buffer_nr = VAR_1->next_buffer_nr++;

 FUNC_1(&VAR_3->list, &VAR_4->head);

 VAR_1->new_data = 1;
 VAR_1->populated = 1;

 return 0;
}
