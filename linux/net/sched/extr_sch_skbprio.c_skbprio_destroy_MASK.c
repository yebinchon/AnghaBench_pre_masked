
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skbprio_sched_data {int * qdiscs; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct skbprio_sched_data* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_2(struct Qdisc *VAR_1)
{
 struct skbprio_sched_data *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(&VAR_2->qdiscs[VAR_3]);
}
