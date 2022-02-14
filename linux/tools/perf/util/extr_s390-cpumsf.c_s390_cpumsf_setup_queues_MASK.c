
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {unsigned int nr_queues; int * queue_array; } ;
struct s390_cpumsf {TYPE_1__ queues; } ;


 int FUNC_0 (struct s390_cpumsf*,int *,unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(struct s390_cpumsf *VAR_0, u64 VAR_1)
{
 unsigned int VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->queues.nr_queues; VAR_2++) {
  VAR_3 = FUNC_0(VAR_0, &VAR_0->queues.queue_array[VAR_2],
           VAR_2, VAR_1);
  if (VAR_3)
   break;
 }
 return VAR_3;
}
