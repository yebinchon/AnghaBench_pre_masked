
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multiq_sched_data {int bands; int * queues; int block; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int *) ;
 struct multiq_sched_data* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct Qdisc *VAR_0)
{
 int VAR_1;
 struct multiq_sched_data *VAR_2 = FUNC_1(VAR_0);

 FUNC_3(VAR_2->block);
 for (VAR_1 = 0; VAR_1 < VAR_2->bands; VAR_1++)
  FUNC_2(VAR_2->queues[VAR_1]);

 FUNC_0(VAR_2->queues);
}
