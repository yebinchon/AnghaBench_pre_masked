
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auxtrace_queues {unsigned int nr_queues; struct auxtrace_queue* queue_array; } ;
struct auxtrace_queue {int priv; int set; int cpu; int tid; int head; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct auxtrace_queue* FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct auxtrace_queues *VAR_3,
     unsigned int VAR_4)
{
 unsigned int VAR_5 = VAR_3->nr_queues;
 struct auxtrace_queue *VAR_6;
 unsigned int VAR_7;

 if (!VAR_5)
  VAR_5 = VAR_0;

 while (VAR_5 && VAR_5 < VAR_4)
  VAR_5 <<= 1;

 if (VAR_5 < VAR_3->nr_queues || VAR_5 < VAR_4)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_5);
 if (!VAR_6)
  return -VAR_2;

 for (VAR_7 = 0; VAR_7 < VAR_3->nr_queues; VAR_7++) {
  FUNC_1(&VAR_3->queue_array[VAR_7].head,
     &VAR_6[VAR_7].head);
  VAR_6[VAR_7].tid = VAR_3->queue_array[VAR_7].tid;
  VAR_6[VAR_7].cpu = VAR_3->queue_array[VAR_7].cpu;
  VAR_6[VAR_7].set = VAR_3->queue_array[VAR_7].set;
  VAR_6[VAR_7].priv = VAR_3->queue_array[VAR_7].priv;
 }

 VAR_3->nr_queues = VAR_5;
 VAR_3->queue_array = VAR_6;

 return 0;
}
