
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fib6_result {int fib6_flags; TYPE_3__* f6i; TYPE_1__* nh; } ;
struct TYPE_8__ {struct net_device* loopback_dev; } ;
struct TYPE_6__ {int addr; } ;
struct TYPE_7__ {TYPE_2__ fib6_dst; } ;
struct TYPE_5__ {struct net_device* fib_nh_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct net_device *FUNC_5(const struct fib6_result *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->nh->fib_nh_dev;

 if (VAR_2->fib6_flags & (VAR_1 | VAR_0)) {




  if (FUNC_3(VAR_3) &&
      !FUNC_4(&VAR_2->f6i->fib6_dst.addr))
   VAR_3 = FUNC_1(VAR_3);
  else if (!FUNC_2(VAR_3))
   VAR_3 = FUNC_0(VAR_3)->loopback_dev;



 }

 return VAR_3;
}
