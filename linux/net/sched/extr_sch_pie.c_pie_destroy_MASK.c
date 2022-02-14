
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tupdate; } ;
struct pie_sched_data {int adapt_timer; TYPE_1__ params; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int *) ;
 struct pie_sched_data* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_2(struct Qdisc *VAR_0)
{
 struct pie_sched_data *VAR_1 = FUNC_1(VAR_0);

 VAR_1->params.tupdate = 0;
 FUNC_0(&VAR_1->adapt_timer);
}
