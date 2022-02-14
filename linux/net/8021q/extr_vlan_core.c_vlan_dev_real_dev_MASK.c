
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct net_device const net_device ;
struct TYPE_2__ {struct net_device const* real_dev; } ;


 scalar_t__ FUNC_0 (struct net_device const*) ;
 TYPE_1__* FUNC_1 (struct net_device const*) ;

struct net_device *FUNC_2(const struct net_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_1(VAR_0)->real_dev;

 while (FUNC_0(VAR_1))
  VAR_1 = FUNC_1(VAR_1)->real_dev;

 return VAR_1;
}
