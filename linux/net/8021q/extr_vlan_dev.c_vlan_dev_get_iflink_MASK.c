
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int ifindex; } ;
struct TYPE_2__ {struct net_device* real_dev; } ;


 TYPE_1__* FUNC_0 (struct net_device const*) ;

__attribute__((used)) static int FUNC_1(const struct net_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_0(VAR_0)->real_dev;

 return VAR_1->ifindex;
}
