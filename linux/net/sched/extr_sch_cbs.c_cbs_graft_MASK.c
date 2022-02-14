
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct cbs_sched_data {int qdisc; } ;
struct Qdisc {int handle; int dev_queue; } ;


 struct Qdisc VAR_0 ;
 int VAR_1 ;
 struct Qdisc* FUNC_0 (int ,int *,int ,int *) ;
 struct cbs_sched_data* FUNC_1 (struct Qdisc*) ;
 struct Qdisc* FUNC_2 (struct Qdisc*,struct Qdisc*,int *) ;

__attribute__((used)) static int FUNC_3(struct Qdisc *VAR_2, unsigned long VAR_3, struct Qdisc *VAR_4,
       struct Qdisc **VAR_5, struct netlink_ext_ack *VAR_6)
{
 struct cbs_sched_data *VAR_7 = FUNC_1(VAR_2);

 if (!VAR_4) {
  VAR_4 = FUNC_0(VAR_2->dev_queue, &VAR_1,
     VAR_2->handle, ((void*)0));
  if (!VAR_4)
   VAR_4 = &VAR_0;
 }

 *VAR_5 = FUNC_2(VAR_2, VAR_4, &VAR_7->qdisc);
 return 0;
}
