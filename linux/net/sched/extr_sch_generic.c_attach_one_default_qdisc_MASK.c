
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {struct Qdisc* qdisc_sleeping; } ;
struct net_device {int priv_flags; scalar_t__ type; } ;
struct Qdisc_ops {int dummy; } ;
struct Qdisc {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct Qdisc_ops* VAR_5 ;
 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct net_device*) ;
 struct Qdisc_ops VAR_6 ;
 struct Qdisc_ops VAR_7 ;
 struct Qdisc* FUNC_2 (struct netdev_queue*,struct Qdisc_ops const*,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_8,
         struct netdev_queue *VAR_9,
         void *VAR_10)
{
 struct Qdisc *VAR_11;
 const struct Qdisc_ops *VAR_12 = VAR_5;

 if (VAR_8->priv_flags & VAR_1)
  VAR_12 = &VAR_6;
 else if(VAR_8->type == VAR_0)
  VAR_12 = &VAR_7;

 VAR_11 = FUNC_2(VAR_9, VAR_12, VAR_4, ((void*)0));
 if (!VAR_11) {
  FUNC_0(VAR_8, "activation failed\n");
  return;
 }
 if (!FUNC_1(VAR_8))
  VAR_11->flags |= VAR_3 | VAR_2;
 VAR_9->qdisc_sleeping = VAR_11;
}
