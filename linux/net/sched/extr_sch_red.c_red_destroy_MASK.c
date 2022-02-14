
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct red_sched_data {int qdisc; int adapt_timer; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int *) ;
 struct red_sched_data* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct Qdisc*,int) ;

__attribute__((used)) static void FUNC_4(struct Qdisc *VAR_0)
{
 struct red_sched_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->adapt_timer);
 FUNC_3(VAR_0, 0);
 FUNC_2(VAR_1->qdisc);
}
