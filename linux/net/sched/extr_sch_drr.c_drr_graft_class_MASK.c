
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {int classid; } ;
struct drr_class {int qdisc; TYPE_1__ common; } ;
struct Qdisc {int dev_queue; } ;


 struct Qdisc VAR_0 ;
 int VAR_1 ;
 struct Qdisc* FUNC_0 (int ,int *,int ,int *) ;
 struct Qdisc* FUNC_1 (struct Qdisc*,struct Qdisc*,int *) ;

__attribute__((used)) static int FUNC_2(struct Qdisc *VAR_2, unsigned long VAR_3,
      struct Qdisc *VAR_4, struct Qdisc **VAR_5,
      struct netlink_ext_ack *VAR_6)
{
 struct drr_class *VAR_7 = (struct drr_class *)VAR_3;

 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_0(VAR_2->dev_queue, &VAR_1,
     VAR_7->common.classid, ((void*)0));
  if (VAR_4 == ((void*)0))
   VAR_4 = &VAR_0;
 }

 *VAR_5 = FUNC_1(VAR_2, VAR_4, &VAR_7->qdisc);
 return 0;
}
