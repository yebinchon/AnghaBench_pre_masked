
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {struct net_device* real_dev; } ;


 struct net* FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct net_device const*) ;

__attribute__((used)) static struct net *FUNC_2(const struct net_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_1(VAR_0)->real_dev;

 return FUNC_0(VAR_1);
}
