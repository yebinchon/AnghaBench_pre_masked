
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auxtrace_queues {int queue_array; int nr_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct auxtrace_queues *VAR_2)
{
 VAR_2->nr_queues = VAR_0;
 VAR_2->queue_array = FUNC_0(VAR_2->nr_queues);
 if (!VAR_2->queue_array)
  return -VAR_1;
 return 0;
}
