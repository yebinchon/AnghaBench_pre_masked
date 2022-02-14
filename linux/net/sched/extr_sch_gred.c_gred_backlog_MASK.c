
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gred_sched_data {unsigned int backlog; } ;
struct gred_sched {int dummy; } ;
struct TYPE_2__ {unsigned int backlog; } ;
struct Qdisc {TYPE_1__ qstats; } ;


 scalar_t__ FUNC_0 (struct gred_sched*) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct gred_sched *VAR_0,
     struct gred_sched_data *VAR_1,
     struct Qdisc *VAR_2)
{
 if (FUNC_0(VAR_0))
  return VAR_2->qstats.backlog;
 else
  return VAR_1->backlog;
}
