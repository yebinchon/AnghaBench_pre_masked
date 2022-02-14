
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct fib6_info* fib6_null_entry; } ;
struct net {TYPE_1__ ipv6; } ;
struct fib6_info {TYPE_2__* fib6_nh; int nh; } ;
struct arg_netdev_event {scalar_t__ dev; int nh_flags; } ;
struct TYPE_4__ {scalar_t__ fib_nh_dev; int fib_nh_flags; } ;


 struct net* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct net*,struct fib6_info*) ;
 int FUNC_2 (struct fib6_info*) ;

__attribute__((used)) static int FUNC_3(struct fib6_info *VAR_0, void *VAR_1)
{
 const struct arg_netdev_event *VAR_2 = VAR_1;
 struct net *VAR_3 = FUNC_0(VAR_2->dev);

 if (VAR_0 != VAR_3->ipv6.fib6_null_entry && !VAR_0->nh &&
     VAR_0->fib6_nh->fib_nh_dev == VAR_2->dev) {
  VAR_0->fib6_nh->fib_nh_flags &= ~VAR_2->nh_flags;
  FUNC_1(VAR_3, VAR_0);
  FUNC_2(VAR_0);
 }

 return 0;
}
