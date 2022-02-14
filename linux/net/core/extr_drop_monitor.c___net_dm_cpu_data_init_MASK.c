
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int syncp; } ;
struct per_cpu_dm_data {TYPE_1__ stats; int drop_queue; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct per_cpu_dm_data *VAR_0)
{
 FUNC_1(&VAR_0->lock);
 FUNC_0(&VAR_0->drop_queue);
 FUNC_2(&VAR_0->stats.syncp);
}
