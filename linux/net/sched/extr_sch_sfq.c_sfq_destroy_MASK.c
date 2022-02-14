
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfq_sched_data {int red_parms; int slots; int ht; int perturb_timer; scalar_t__ perturb_period; int block; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct sfq_sched_data* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct Qdisc *VAR_0)
{
 struct sfq_sched_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_4(VAR_1->block);
 VAR_1->perturb_period = 0;
 FUNC_0(&VAR_1->perturb_timer);
 FUNC_3(VAR_1->ht);
 FUNC_3(VAR_1->slots);
 FUNC_1(VAR_1->red_parms);
}
