
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tc_hfsc_qopt {int defcls; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_4__ {int classid; } ;
struct TYPE_3__ {TYPE_2__ cl_common; void* cf_tree; void* vt_tree; int children; int * qdisc; struct hfsc_sched* sched; int filter_list; int block; } ;
struct hfsc_sched {int clhash; TYPE_1__ root; void* eligible; int defcls; int watchdog; } ;
struct Qdisc {int handle; int dev_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 void* VAR_1 ;
 struct tc_hfsc_qopt* FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct Qdisc*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int * FUNC_6 (int ,int *,int ,int *) ;
 int FUNC_7 (int *,int) ;
 struct hfsc_sched* FUNC_8 (struct Qdisc*) ;
 int FUNC_9 (int *,struct Qdisc*) ;
 int FUNC_10 (int *,int *,struct Qdisc*,struct netlink_ext_ack*) ;

__attribute__((used)) static int
FUNC_11(struct Qdisc *VAR_4, struct nlattr *VAR_5,
  struct netlink_ext_ack *VAR_6)
{
 struct hfsc_sched *VAR_7 = FUNC_8(VAR_4);
 struct tc_hfsc_qopt *VAR_8;
 int VAR_9;

 FUNC_9(&VAR_7->watchdog, VAR_4);

 if (!VAR_5 || FUNC_2(VAR_5) < sizeof(*VAR_8))
  return -VAR_0;
 VAR_8 = FUNC_1(VAR_5);

 VAR_7->defcls = VAR_8->defcls;
 VAR_9 = FUNC_4(&VAR_7->clhash);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_7->eligible = VAR_1;

 VAR_9 = FUNC_10(&VAR_7->root.block, &VAR_7->root.filter_list, VAR_4, VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_7->root.cl_common.classid = VAR_4->handle;
 VAR_7->root.sched = VAR_7;
 VAR_7->root.qdisc = FUNC_6(VAR_4->dev_queue, &VAR_3,
       VAR_4->handle, ((void*)0));
 if (VAR_7->root.qdisc == ((void*)0))
  VAR_7->root.qdisc = &VAR_2;
 else
  FUNC_7(VAR_7->root.qdisc, 1);
 FUNC_0(&VAR_7->root.children);
 VAR_7->root.vt_tree = VAR_1;
 VAR_7->root.cf_tree = VAR_1;

 FUNC_5(&VAR_7->clhash, &VAR_7->root.cl_common);
 FUNC_3(VAR_4, &VAR_7->clhash);

 return 0;
}
