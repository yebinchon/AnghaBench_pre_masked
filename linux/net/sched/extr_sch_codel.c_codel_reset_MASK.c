
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct codel_sched_data {int vars; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int *) ;
 struct codel_sched_data* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_3(struct Qdisc *VAR_0)
{
 struct codel_sched_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_0);
 FUNC_0(&VAR_1->vars);
}
