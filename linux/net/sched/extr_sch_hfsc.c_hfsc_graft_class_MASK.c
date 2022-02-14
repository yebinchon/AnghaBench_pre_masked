
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {int classid; } ;
struct hfsc_class {scalar_t__ level; int qdisc; TYPE_1__ cl_common; } ;
struct Qdisc {int dev_queue; } ;


 int VAR_0 ;
 struct Qdisc VAR_1 ;
 int VAR_2 ;
 struct Qdisc* FUNC_0 (int ,int *,int ,int *) ;
 struct Qdisc* FUNC_1 (struct Qdisc*,struct Qdisc*,int *) ;

__attribute__((used)) static int
FUNC_2(struct Qdisc *VAR_3, unsigned long VAR_4, struct Qdisc *VAR_5,
   struct Qdisc **VAR_6, struct netlink_ext_ack *VAR_7)
{
 struct hfsc_class *VAR_8 = (struct hfsc_class *)VAR_4;

 if (VAR_8->level > 0)
  return -VAR_0;
 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_0(VAR_3->dev_queue, &VAR_2,
     VAR_8->cl_common.classid, ((void*)0));
  if (VAR_5 == ((void*)0))
   VAR_5 = &VAR_1;
 }

 *VAR_6 = FUNC_1(VAR_3, VAR_5, &VAR_8->qdisc);
 return 0;
}
