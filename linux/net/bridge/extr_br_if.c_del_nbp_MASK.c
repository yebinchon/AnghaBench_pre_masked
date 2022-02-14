
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int priv_flags; int name; } ;
struct net_bridge_port {int rcu; int kobj; int list; struct net_device* dev; struct net_bridge* br; } ;
struct net_bridge {TYPE_1__* dev; int lock; int ifobj; } ;
struct TYPE_2__ {scalar_t__ needed_headroom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_bridge*,struct net_bridge_port*,int ,int) ;
 int FUNC_1 (int ,int *,struct net_bridge_port*) ;
 int FUNC_2 (struct net_bridge_port*) ;
 int FUNC_3 (struct net_bridge_port*) ;
 int FUNC_4 (struct net_bridge_port*) ;
 int FUNC_5 (int *,int ) ;
 int VAR_3 ;
 int FUNC_6 (struct net_bridge*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct net_bridge_port*) ;
 int FUNC_11 (struct net_bridge_port*) ;
 int FUNC_12 (struct net_bridge*) ;
 int FUNC_13 (struct net_bridge_port*) ;
 scalar_t__ FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct net_device*,TYPE_1__*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 () ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (struct net_bridge*,int ) ;

__attribute__((used)) static void FUNC_23(struct net_bridge_port *VAR_4)
{
 struct net_bridge *VAR_5 = VAR_4->br;
 struct net_device *VAR_6 = VAR_4->dev;

 FUNC_21(VAR_5->ifobj, VAR_4->dev->name);

 FUNC_11(VAR_4);

 FUNC_18(&VAR_5->lock);
 FUNC_4(VAR_4);
 FUNC_19(&VAR_5->lock);

 FUNC_1(VAR_2, ((void*)0), VAR_4);

 FUNC_9(&VAR_4->list);
 if (FUNC_14(VAR_6) == VAR_5->dev->needed_headroom)
  FUNC_22(VAR_5, FUNC_6(VAR_5));
 FUNC_15(VAR_6);

 FUNC_13(VAR_4);
 FUNC_0(VAR_5, VAR_4, 0, 1);
 FUNC_20();
 FUNC_10(VAR_4);

 FUNC_12(VAR_5);

 FUNC_17(VAR_6, VAR_5->dev);

 VAR_6->priv_flags &= ~VAR_0;

 FUNC_16(VAR_6);

 FUNC_2(VAR_4);

 FUNC_8(&VAR_4->kobj, VAR_1);
 FUNC_7(&VAR_4->kobj);

 FUNC_3(VAR_4);

 FUNC_5(&VAR_4->rcu, VAR_3);
}
