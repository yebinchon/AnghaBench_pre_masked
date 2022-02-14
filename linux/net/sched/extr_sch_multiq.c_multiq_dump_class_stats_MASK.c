
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multiq_sched_data {struct Qdisc** queues; } ;
struct gnet_dump {int dummy; } ;
struct Qdisc {int bstats; } ;


 scalar_t__ FUNC_0 (int ,struct gnet_dump*,int *,int *) ;
 struct multiq_sched_data* FUNC_1 (struct Qdisc*) ;
 scalar_t__ FUNC_2 (struct gnet_dump*,struct Qdisc*) ;
 int FUNC_3 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_4(struct Qdisc *VAR_0, unsigned long VAR_1,
     struct gnet_dump *VAR_2)
{
 struct multiq_sched_data *VAR_3 = FUNC_1(VAR_0);
 struct Qdisc *VAR_4;

 VAR_4 = VAR_3->queues[VAR_1 - 1];
 if (FUNC_0(FUNC_3(VAR_0),
      VAR_2, ((void*)0), &VAR_4->bstats) < 0 ||
     FUNC_2(VAR_2, VAR_4) < 0)
  return -1;

 return 0;
}
