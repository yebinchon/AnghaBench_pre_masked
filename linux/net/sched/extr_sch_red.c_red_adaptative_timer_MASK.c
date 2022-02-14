
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct red_sched_data {int adapt_timer; int vars; int parms; struct Qdisc* sch; } ;
struct Qdisc {int dummy; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct red_sched_data* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 struct red_sched_data* VAR_3 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline void FUNC_7(struct timer_list *VAR_4)
{
 struct red_sched_data *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_1);
 struct Qdisc *VAR_6 = VAR_5->sch;
 spinlock_t *VAR_7 = FUNC_2(FUNC_3(VAR_6));

 FUNC_5(VAR_7);
 FUNC_4(&VAR_5->parms, &VAR_5->vars);
 FUNC_1(&VAR_5->adapt_timer, VAR_2 + VAR_0/2);
 FUNC_6(VAR_7);
}
