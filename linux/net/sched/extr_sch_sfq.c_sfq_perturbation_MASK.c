
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct sfq_sched_data {scalar_t__ perturb_period; int perturb_timer; scalar_t__ tail; int filter_list; int perturbation; struct Qdisc* sch; } ;
struct Qdisc {int dummy; } ;
typedef int spinlock_t ;
typedef int siphash_key_t ;
typedef int nkey ;


 struct sfq_sched_data* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_1 ;
 struct sfq_sched_data* VAR_2 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_3)
{
 struct sfq_sched_data *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_1);
 struct Qdisc *VAR_5 = VAR_4->sch;
 spinlock_t *VAR_6 = FUNC_3(FUNC_4(VAR_5));
 siphash_key_t VAR_7;

 FUNC_1(&VAR_7, sizeof(VAR_7));
 FUNC_6(VAR_6);
 VAR_4->perturbation = VAR_7;
 if (!VAR_4->filter_list && VAR_4->tail)
  FUNC_5(VAR_5);
 FUNC_7(VAR_6);

 if (VAR_4->perturb_period)
  FUNC_2(&VAR_4->perturb_timer, VAR_0 + VAR_4->perturb_period);
}
