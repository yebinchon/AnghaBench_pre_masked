
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long queue; int child_handle; } ;
struct tc_mq_qopt_offload {int command; TYPE_1__ graft_params; int handle; } ;
struct netlink_ext_ack {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int flags; } ;
struct Qdisc {int flags; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct Qdisc* FUNC_2 (struct netdev_queue*,struct Qdisc*) ;
 struct netdev_queue* FUNC_3 (struct Qdisc*,unsigned long) ;
 struct net_device* FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (struct net_device*,struct Qdisc*,struct Qdisc*,struct Qdisc*,int ,struct tc_mq_qopt_offload*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_5, unsigned long VAR_6, struct Qdisc *VAR_7,
      struct Qdisc **VAR_8, struct netlink_ext_ack *VAR_9)
{
 struct netdev_queue *VAR_10 = FUNC_3(VAR_5, VAR_6);
 struct tc_mq_qopt_offload VAR_11;
 struct net_device *VAR_12 = FUNC_4(VAR_5);

 if (VAR_12->flags & VAR_0)
  FUNC_1(VAR_12);

 *VAR_8 = FUNC_2(VAR_10, VAR_7);
 if (VAR_7)
  VAR_7->flags |= VAR_2 | VAR_1;
 if (VAR_12->flags & VAR_0)
  FUNC_0(VAR_12);

 VAR_11.handle = VAR_5->handle;
 VAR_11.graft_params.queue = VAR_6 - 1;
 VAR_11.graft_params.child_handle = VAR_7 ? VAR_7->handle : 0;
 VAR_11.command = VAR_3;

 FUNC_5(FUNC_4(VAR_5), VAR_5, VAR_7, *VAR_8,
       VAR_4, &VAR_11, VAR_9);
 return 0;
}
