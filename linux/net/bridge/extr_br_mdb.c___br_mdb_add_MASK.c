
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct net_bridge_port {scalar_t__ state; struct net_bridge* br; } ;
struct net_bridge {int multicast_lock; TYPE_1__* dev; } ;
struct net {int dummy; } ;
struct br_mdb_entry {scalar_t__ ifindex; int state; } ;
struct br_ip {int dummy; } ;
struct TYPE_2__ {scalar_t__ ifindex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_0 (struct net*,scalar_t__) ;
 int FUNC_1 (struct br_mdb_entry*,struct br_ip*) ;
 int FUNC_2 (struct net_bridge*,struct net_bridge_port*,struct br_ip*,int ) ;
 int FUNC_3 (struct net_bridge*,int ) ;
 struct net_bridge_port* FUNC_4 (struct net_device*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net *VAR_4, struct net_bridge *VAR_5,
   struct br_mdb_entry *VAR_6)
{
 struct br_ip VAR_7;
 struct net_device *VAR_8;
 struct net_bridge_port *VAR_9 = ((void*)0);
 int VAR_10;

 if (!FUNC_5(VAR_5->dev) || !FUNC_3(VAR_5, VAR_0))
  return -VAR_2;

 if (VAR_6->ifindex != VAR_5->dev->ifindex) {
  VAR_8 = FUNC_0(VAR_4, VAR_6->ifindex);
  if (!VAR_8)
   return -VAR_3;

  VAR_9 = FUNC_4(VAR_8);
  if (!VAR_9 || VAR_9->br != VAR_5 || VAR_9->state == VAR_1)
   return -VAR_2;
 }

 FUNC_1(VAR_6, &VAR_7);

 FUNC_6(&VAR_5->multicast_lock);
 VAR_10 = FUNC_2(VAR_5, VAR_9, &VAR_7, VAR_6->state);
 FUNC_7(&VAR_5->multicast_lock);
 return VAR_10;
}
