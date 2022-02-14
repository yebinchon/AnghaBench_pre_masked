
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge_mdb_entry {int host_joined; int addr; TYPE_1__* br; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int ,int ) ;

void FUNC_1(struct net_bridge_mdb_entry *VAR_1, bool VAR_2)
{
 if (!VAR_1->host_joined)
  return;

 VAR_1->host_joined = 0;
 if (VAR_2)
  FUNC_0(VAR_1->br->dev, ((void*)0), &VAR_1->addr, VAR_0, 0);
}
