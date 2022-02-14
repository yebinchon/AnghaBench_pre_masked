
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_prio_qopt {int bands; int* priomap; } ;
struct prio_sched_data {int bands; struct Qdisc** queues; int prio2band; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct Qdisc {int handle; int dev_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int*,int) ;
 struct tc_prio_qopt* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 struct Qdisc VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct Qdisc*,struct tc_prio_qopt*) ;
 struct Qdisc* FUNC_5 (int ,int *,int ,struct netlink_ext_ack*) ;
 int FUNC_6 (struct Qdisc*,int) ;
 struct prio_sched_data* FUNC_7 (struct Qdisc*) ;
 int FUNC_8 (struct Qdisc*) ;
 int FUNC_9 (struct Qdisc*) ;
 int FUNC_10 (struct Qdisc*) ;
 int FUNC_11 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_12(struct Qdisc *VAR_6, struct nlattr *VAR_7,
       struct netlink_ext_ack *VAR_8)
{
 struct prio_sched_data *VAR_9 = FUNC_7(VAR_6);
 struct Qdisc *VAR_10[VAR_2];
 int VAR_11 = VAR_9->bands, VAR_12;
 struct tc_prio_qopt *VAR_13;

 if (FUNC_3(VAR_7) < sizeof(*VAR_13))
  return -VAR_0;
 VAR_13 = FUNC_2(VAR_7);

 if (VAR_13->bands > VAR_2 || VAR_13->bands < 2)
  return -VAR_0;

 for (VAR_12 = 0; VAR_12 <= VAR_3; VAR_12++) {
  if (VAR_13->priomap[VAR_12] >= VAR_13->bands)
   return -VAR_0;
 }


 for (VAR_12 = VAR_11; VAR_12 < VAR_13->bands; VAR_12++) {
  VAR_10[VAR_12] = FUNC_5(VAR_6->dev_queue, &VAR_5,
           FUNC_0(VAR_6->handle, VAR_12 + 1),
           VAR_8);
  if (!VAR_10[VAR_12]) {
   while (VAR_12 > VAR_11)
    FUNC_8(VAR_10[--VAR_12]);
   return -VAR_1;
  }
 }

 FUNC_4(VAR_6, VAR_13);
 FUNC_10(VAR_6);
 VAR_9->bands = VAR_13->bands;
 FUNC_1(VAR_9->prio2band, VAR_13->priomap, VAR_3+1);

 for (VAR_12 = VAR_9->bands; VAR_12 < VAR_11; VAR_12++)
  FUNC_9(VAR_9->queues[VAR_12]);

 for (VAR_12 = VAR_11; VAR_12 < VAR_9->bands; VAR_12++) {
  VAR_9->queues[VAR_12] = VAR_10[VAR_12];
  if (VAR_9->queues[VAR_12] != &VAR_4)
   FUNC_6(VAR_9->queues[VAR_12], 1);
 }

 FUNC_11(VAR_6);

 for (VAR_12 = VAR_9->bands; VAR_12 < VAR_11; VAR_12++)
  FUNC_8(VAR_9->queues[VAR_12]);
 return 0;
}
