
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_3__ {int classid; } ;
struct TYPE_4__ {int ref; TYPE_1__ common; int * sock; int * vcc; int filter_list; int block; int * q; int list; } ;
struct atm_qdisc_data {int task; TYPE_2__ link; int flows; } ;
struct Qdisc {int handle; int dev_queue; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,...) ;
 int * FUNC_3 (int ,int *,int ,struct netlink_ext_ack*) ;
 struct atm_qdisc_data* FUNC_4 (struct Qdisc*) ;
 int VAR_2 ;
 int FUNC_5 (int *,int ,unsigned long) ;
 int FUNC_6 (int *,int *,struct Qdisc*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_7(struct Qdisc *VAR_3, struct nlattr *VAR_4,
         struct netlink_ext_ack *VAR_5)
{
 struct atm_qdisc_data *VAR_6 = FUNC_4(VAR_3);
 int VAR_7;

 FUNC_2("atm_tc_init(sch %p,[qdisc %p],opt %p)\n", VAR_3, VAR_6, VAR_4);
 FUNC_0(&VAR_6->flows);
 FUNC_0(&VAR_6->link.list);
 FUNC_1(&VAR_6->link.list, &VAR_6->flows);
 VAR_6->link.q = FUNC_3(VAR_3->dev_queue,
          &VAR_1, VAR_3->handle, VAR_5);
 if (!VAR_6->link.q)
  VAR_6->link.q = &VAR_0;
 FUNC_2("atm_tc_init: link (%p) qdisc %p\n", &VAR_6->link, VAR_6->link.q);

 VAR_7 = FUNC_6(&VAR_6->link.block, &VAR_6->link.filter_list, VAR_3,
       VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_6->link.vcc = ((void*)0);
 VAR_6->link.sock = ((void*)0);
 VAR_6->link.common.classid = VAR_3->handle;
 VAR_6->link.ref = 1;
 FUNC_5(&VAR_6->task, VAR_2, (unsigned long)VAR_3);
 return 0;
}
