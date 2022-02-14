
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct net_device {unsigned int num_tx_queues; int flags; struct Qdisc* qdisc; } ;
struct net {int dummy; } ;
struct Qdisc_class_ops {int (* graft ) (struct Qdisc*,unsigned long,struct Qdisc*,struct Qdisc**,struct netlink_ext_ack*) ;unsigned long (* find ) (struct Qdisc*,int ) ;} ;
struct Qdisc {int flags; TYPE_1__* ops; } ;
struct TYPE_2__ {struct Qdisc_class_ops* cl_ops; int (* attach ) (struct Qdisc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct Qdisc* FUNC_3 (struct netdev_queue*,struct Qdisc*) ;
 struct netdev_queue* FUNC_4 (struct net_device*) ;
 struct net* FUNC_5 (struct net_device*) ;
 struct netdev_queue* FUNC_6 (struct net_device*,unsigned int) ;
 struct Qdisc VAR_5 ;
 int FUNC_7 (struct net*,struct sk_buff*,struct nlmsghdr*,int ,struct Qdisc*,struct Qdisc*) ;
 int FUNC_8 (struct Qdisc*) ;
 int FUNC_9 (struct net_device*,struct Qdisc*,struct Qdisc*,struct netlink_ext_ack*) ;
 int FUNC_10 (struct Qdisc*) ;
 int FUNC_11 (struct Qdisc*) ;
 int FUNC_12 (struct Qdisc*) ;
 unsigned long FUNC_13 (struct Qdisc*,int ) ;
 int FUNC_14 (struct Qdisc*,unsigned long,struct Qdisc*,struct Qdisc**,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_6, struct Qdisc *VAR_7,
         struct sk_buff *VAR_8, struct nlmsghdr *VAR_9, u32 VAR_10,
         struct Qdisc *VAR_11, struct Qdisc *VAR_12,
         struct netlink_ext_ack *VAR_13)
{
 struct Qdisc *VAR_14 = VAR_12;
 struct net *VAR_15 = FUNC_5(VAR_6);

 if (VAR_7 == ((void*)0)) {
  unsigned int VAR_16, VAR_17, VAR_18;

  VAR_18 = 0;
  VAR_17 = VAR_6->num_tx_queues;
  if ((VAR_14 && VAR_14->flags & VAR_3) ||
      (VAR_11 && VAR_11->flags & VAR_3)) {
   VAR_17 = 1;
   VAR_18 = 1;
   if (!FUNC_4(VAR_6)) {
    FUNC_0(VAR_13, "Device does not have an ingress queue");
    return -VAR_0;
   }
  }

  if (VAR_6->flags & VAR_2)
   FUNC_2(VAR_6);

  FUNC_9(VAR_6, VAR_11, VAR_12, VAR_13);

  if (VAR_11 && VAR_11->ops->attach)
   goto skip;

  for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
   struct netdev_queue *VAR_19 = FUNC_4(VAR_6);

   if (!VAR_18)
    VAR_19 = FUNC_6(VAR_6, VAR_16);

   VAR_12 = FUNC_3(VAR_19, VAR_11);
   if (VAR_11 && VAR_16 > 0)
    FUNC_11(VAR_11);

   if (!VAR_18)
    FUNC_10(VAR_12);
  }

skip:
  if (!VAR_18) {
   FUNC_7(VAR_15, VAR_8, VAR_9, VAR_10,
        VAR_6->qdisc, VAR_11);
   if (VAR_11 && !VAR_11->ops->attach)
    FUNC_11(VAR_11);
   VAR_6->qdisc = VAR_11 ? : &VAR_5;

   if (VAR_11 && VAR_11->ops->attach)
    VAR_11->ops->attach(VAR_11);
  } else {
   FUNC_7(VAR_15, VAR_8, VAR_9, VAR_10, VAR_12, VAR_11);
  }

  if (VAR_6->flags & VAR_2)
   FUNC_1(VAR_6);
 } else {
  const struct Qdisc_class_ops *VAR_20 = VAR_7->ops->cl_ops;
  unsigned long VAR_21;
  int VAR_22;


  if (VAR_11 && (VAR_11->flags & VAR_4) &&
      VAR_7 && !(VAR_7->flags & VAR_4))
   FUNC_8(VAR_11);

  if (!VAR_20 || !VAR_20->graft)
   return -VAR_1;

  VAR_21 = VAR_20->find(VAR_7, VAR_10);
  if (!VAR_21) {
   FUNC_0(VAR_13, "Specified class not found");
   return -VAR_0;
  }

  VAR_22 = VAR_20->graft(VAR_7, VAR_21, VAR_11, &VAR_12, VAR_13);
  if (VAR_22)
   return VAR_22;
  FUNC_7(VAR_15, VAR_8, VAR_9, VAR_10, VAR_12, VAR_11);
 }
 return 0;
}
