
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbq_class {int rate_est; int R_tab; int q; int block; int filters; } ;
struct cbq_sched_data {struct cbq_class link; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cbq_class*) ;
 struct cbq_sched_data* FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct Qdisc *VAR_0, struct cbq_class *VAR_1)
{
 struct cbq_sched_data *VAR_2 = FUNC_3(VAR_0);

 FUNC_0(VAR_1->filters);

 FUNC_6(VAR_1->block);
 FUNC_4(VAR_1->q);
 FUNC_5(VAR_1->R_tab);
 FUNC_1(&VAR_1->rate_est);
 if (VAR_1 != &VAR_2->link)
  FUNC_2(VAR_1);
}
