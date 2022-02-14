
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge_mdb_entry {int host_joined; TYPE_1__* br; int timer; int addr; } ;
struct TYPE_2__ {scalar_t__ multicast_membership_interval; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;

void FUNC_2(struct net_bridge_mdb_entry *VAR_2, bool VAR_3)
{
 if (!VAR_2->host_joined) {
  VAR_2->host_joined = 1;
  if (VAR_3)
   FUNC_0(VAR_2->br->dev, ((void*)0), &VAR_2->addr,
          VAR_0, 0);
 }
 FUNC_1(&VAR_2->timer, VAR_1 + VAR_2->br->multicast_membership_interval);
}
