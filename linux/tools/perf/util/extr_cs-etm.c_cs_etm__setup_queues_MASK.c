
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int nr_queues; int * queue_array; } ;
struct cs_etm_auxtrace {TYPE_1__ queues; int machine; scalar_t__ kernel_start; } ;


 int FUNC_0 (struct cs_etm_auxtrace*,int *,unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct cs_etm_auxtrace *VAR_0)
{
 unsigned int VAR_1;
 int VAR_2;

 if (!VAR_0->kernel_start)
  VAR_0->kernel_start = FUNC_1(VAR_0->machine);

 for (VAR_1 = 0; VAR_1 < VAR_0->queues.nr_queues; VAR_1++) {
  VAR_2 = FUNC_0(VAR_0, &VAR_0->queues.queue_array[VAR_1], VAR_1);
  if (VAR_2)
   return VAR_2;
 }

 return 0;
}
