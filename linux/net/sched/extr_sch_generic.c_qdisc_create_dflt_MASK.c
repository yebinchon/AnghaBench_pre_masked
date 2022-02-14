
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct Qdisc_ops {scalar_t__ (* init ) (struct Qdisc*,int *,struct netlink_ext_ack*) ;int owner; } ;
struct Qdisc {unsigned int parent; } ;


 scalar_t__ FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (int ) ;
 struct Qdisc* FUNC_3 (struct netdev_queue*,struct Qdisc_ops const*,struct netlink_ext_ack*) ;
 int FUNC_4 (struct Qdisc*) ;
 scalar_t__ FUNC_5 (struct Qdisc*,int *,struct netlink_ext_ack*) ;
 int FUNC_6 (int ) ;

struct Qdisc *FUNC_7(struct netdev_queue *VAR_0,
    const struct Qdisc_ops *VAR_1,
    unsigned int VAR_2,
    struct netlink_ext_ack *VAR_3)
{
 struct Qdisc *VAR_4;

 if (!FUNC_6(VAR_1->owner)) {
  FUNC_1(VAR_3, "Failed to increase module reference counter");
  return ((void*)0);
 }

 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_3);
 if (FUNC_0(VAR_4)) {
  FUNC_2(VAR_1->owner);
  return ((void*)0);
 }
 VAR_4->parent = VAR_2;

 if (!VAR_1->init || VAR_1->init(VAR_4, ((void*)0), VAR_3) == 0)
  return VAR_4;

 FUNC_4(VAR_4);
 return ((void*)0);
}
