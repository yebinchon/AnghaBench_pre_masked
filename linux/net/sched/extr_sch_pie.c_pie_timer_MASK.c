
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ tupdate; } ;
struct pie_sched_data {TYPE_1__ params; int adapt_timer; struct Qdisc* sch; } ;
struct Qdisc {int dummy; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int FUNC_0 (struct Qdisc*) ;
 struct pie_sched_data* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 struct pie_sched_data* VAR_2 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_3)
{
 struct pie_sched_data *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_0);
 struct Qdisc *VAR_5 = VAR_4->sch;
 spinlock_t *VAR_6 = FUNC_3(FUNC_4(VAR_5));

 FUNC_5(VAR_6);
 FUNC_0(VAR_5);


 if (VAR_4->params.tupdate)
  FUNC_2(&VAR_4->adapt_timer, VAR_1 + VAR_4->params.tupdate);
 FUNC_6(VAR_6);
}
