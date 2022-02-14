
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long band; int child_handle; } ;
struct tc_prio_qopt_offload {int command; TYPE_1__ graft_params; int parent; int handle; } ;
struct prio_sched_data {int * queues; } ;
struct netlink_ext_ack {int dummy; } ;
struct Qdisc {int handle; int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct Qdisc VAR_2 ;
 int FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (int ,struct Qdisc*,struct Qdisc*,struct Qdisc*,int ,struct tc_prio_qopt_offload*,struct netlink_ext_ack*) ;
 struct prio_sched_data* FUNC_2 (struct Qdisc*) ;
 struct Qdisc* FUNC_3 (struct Qdisc*,struct Qdisc*,int *) ;

__attribute__((used)) static int FUNC_4(struct Qdisc *VAR_3, unsigned long VAR_4, struct Qdisc *VAR_5,
        struct Qdisc **VAR_6, struct netlink_ext_ack *VAR_7)
{
 struct prio_sched_data *VAR_8 = FUNC_2(VAR_3);
 struct tc_prio_qopt_offload VAR_9;
 unsigned long VAR_10 = VAR_4 - 1;

 if (VAR_5 == ((void*)0))
  VAR_5 = &VAR_2;

 *VAR_6 = FUNC_3(VAR_3, VAR_5, &VAR_8->queues[VAR_10]);

 VAR_9.handle = VAR_3->handle;
 VAR_9.parent = VAR_3->parent;
 VAR_9.graft_params.band = VAR_10;
 VAR_9.graft_params.child_handle = VAR_5->handle;
 VAR_9.command = VAR_0;

 FUNC_1(FUNC_0(VAR_3), VAR_3, VAR_5, *VAR_6,
       VAR_1, &VAR_9,
       VAR_7);
 return 0;
}
