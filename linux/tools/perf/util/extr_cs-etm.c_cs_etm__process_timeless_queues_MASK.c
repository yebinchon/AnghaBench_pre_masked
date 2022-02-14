
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_etm_traceid_queue {int tid; } ;
struct cs_etm_queue {int dummy; } ;
struct auxtrace_queues {unsigned int nr_queues; struct auxtrace_queue* queue_array; } ;
struct cs_etm_auxtrace {struct auxtrace_queues queues; } ;
struct auxtrace_queue {struct cs_etm_queue* priv; } ;
typedef int pid_t ;


 int VAR_0 ;
 struct cs_etm_traceid_queue* FUNC_0 (struct cs_etm_queue*,int ) ;
 int FUNC_1 (struct cs_etm_queue*) ;
 int FUNC_2 (struct cs_etm_auxtrace*,struct cs_etm_traceid_queue*) ;

__attribute__((used)) static int FUNC_3(struct cs_etm_auxtrace *VAR_1,
        pid_t VAR_2)
{
 unsigned int VAR_3;
 struct auxtrace_queues *VAR_4 = &VAR_1->queues;

 for (VAR_3 = 0; VAR_3 < VAR_4->nr_queues; VAR_3++) {
  struct auxtrace_queue *VAR_5 = &VAR_1->queues.queue_array[VAR_3];
  struct cs_etm_queue *VAR_6 = VAR_5->priv;
  struct cs_etm_traceid_queue *VAR_7;

  if (!VAR_6)
   continue;

  VAR_7 = FUNC_0(VAR_6,
      VAR_0);

  if (!VAR_7)
   continue;

  if ((VAR_2 == -1) || (VAR_7->tid == VAR_2)) {
   FUNC_2(VAR_1, VAR_7);
   FUNC_1(VAR_6);
  }
 }

 return 0;
}
