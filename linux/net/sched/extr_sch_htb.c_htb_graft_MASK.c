
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct TYPE_3__ {int q; } ;
struct TYPE_4__ {int classid; } ;
struct htb_class {TYPE_1__ leaf; TYPE_2__ common; scalar_t__ level; } ;
struct Qdisc {int dev_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct Qdisc* FUNC_0 (int ,int *,int ,struct netlink_ext_ack*) ;
 struct Qdisc* FUNC_1 (struct Qdisc*,struct Qdisc*,int *) ;

__attribute__((used)) static int FUNC_2(struct Qdisc *VAR_3, unsigned long VAR_4, struct Qdisc *VAR_5,
       struct Qdisc **VAR_6, struct netlink_ext_ack *VAR_7)
{
 struct htb_class *VAR_8 = (struct htb_class *)VAR_4;

 if (VAR_8->level)
  return -VAR_0;
 if (VAR_5 == ((void*)0) &&
     (VAR_5 = FUNC_0(VAR_3->dev_queue, &VAR_2,
         VAR_8->common.classid, VAR_7)) == ((void*)0))
  return -VAR_1;

 *VAR_6 = FUNC_1(VAR_3, VAR_5, &VAR_8->leaf.q);
 return 0;
}
