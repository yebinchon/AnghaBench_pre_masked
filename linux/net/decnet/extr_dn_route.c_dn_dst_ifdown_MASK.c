
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct neighbour {struct net_device* dev; } ;
struct dst_entry {int dummy; } ;
struct dn_route {struct neighbour* n; } ;
struct TYPE_2__ {struct net_device* loopback_dev; } ;


 int FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct dst_entry *VAR_0, struct net_device *VAR_1, int VAR_2)
{
 if (VAR_2) {
  struct dn_route *VAR_3 = (struct dn_route *) VAR_0;
  struct neighbour *VAR_4 = VAR_3->n;

  if (VAR_4 && VAR_4->dev == VAR_1) {
   VAR_4->dev = FUNC_1(VAR_1)->loopback_dev;
   FUNC_0(VAR_4->dev);
   FUNC_2(VAR_1);
  }
 }
}
