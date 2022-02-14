
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct dst_entry {struct net_device* dev; scalar_t__ xfrm; } ;
struct TYPE_2__ {struct net_device* loopback_dev; } ;


 int FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct dst_entry* FUNC_3 (struct dst_entry*) ;

void FUNC_4(struct dst_entry *VAR_0, struct net_device *VAR_1)
{
 while ((VAR_0 = FUNC_3(VAR_0)) && VAR_0->xfrm && VAR_0->dev == VAR_1) {
  VAR_0->dev = FUNC_1(VAR_1)->loopback_dev;
  FUNC_0(VAR_0->dev);
  FUNC_2(VAR_1);
 }
}
