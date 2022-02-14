
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int nr_queues; int * queue_array; } ;
struct intel_bts {TYPE_1__ queues; } ;


 int FUNC_0 (struct intel_bts*,int *,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct intel_bts *VAR_0)
{
 unsigned int VAR_1;
 int VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->queues.nr_queues; VAR_1++) {
  VAR_2 = FUNC_0(VAR_0, &VAR_0->queues.queue_array[VAR_1],
         VAR_1);
  if (VAR_2)
   return VAR_2;
 }
 return 0;
}
