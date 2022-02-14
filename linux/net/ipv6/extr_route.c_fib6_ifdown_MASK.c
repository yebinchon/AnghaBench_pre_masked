
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {struct fib6_info* fib6_null_entry; } ;
struct net {TYPE_1__ ipv6; } ;
struct fib6_info {int fib6_flags; TYPE_2__* fib6_nh; int fib6_nsiblings; int should_flush; scalar_t__ nh; } ;
struct arg_netdev_event {int event; struct net_device* dev; } ;
struct TYPE_4__ {int fib_nh_flags; struct net_device const* fib_nh_dev; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net* FUNC_0 (struct net_device const*) ;
 int FUNC_1 (struct net*,struct fib6_info*) ;
 unsigned int FUNC_2 (struct fib6_info*,struct net_device const*) ;
 int FUNC_3 (struct fib6_info*) ;
 int FUNC_4 (struct fib6_info*,struct net_device const*,int) ;
 int FUNC_5 (struct fib6_info*) ;
 int FUNC_6 (struct fib6_info*,struct net_device const*) ;

__attribute__((used)) static int FUNC_7(struct fib6_info *VAR_4, void *VAR_5)
{
 const struct arg_netdev_event *VAR_6 = VAR_5;
 const struct net_device *VAR_7 = VAR_6->dev;
 struct net *VAR_8 = FUNC_0(VAR_7);

 if (VAR_4 == VAR_8->ipv6.fib6_null_entry || VAR_4->nh)
  return 0;

 switch (VAR_6->event) {
 case 128:
  return VAR_4->fib6_nh->fib_nh_dev == VAR_7 ? -1 : 0;
 case 129:
  if (VAR_4->should_flush)
   return -1;
  if (!VAR_4->fib6_nsiblings)
   return VAR_4->fib6_nh->fib_nh_dev == VAR_7 ? -1 : 0;
  if (FUNC_6(VAR_4, VAR_7)) {
   unsigned int VAR_9;

   VAR_9 = FUNC_2(VAR_4, VAR_7);
   if (VAR_4->fib6_nsiblings + 1 == VAR_9) {
    FUNC_3(VAR_4);
    return -1;
   }
   FUNC_4(VAR_4, VAR_7, VAR_2 |
         VAR_3);
   FUNC_1(VAR_8, VAR_4);
   FUNC_5(VAR_4);
  }
  return -2;
 case 130:
  if (VAR_4->fib6_nh->fib_nh_dev != VAR_7 ||
      VAR_4->fib6_flags & (VAR_1 | VAR_0))
   break;
  VAR_4->fib6_nh->fib_nh_flags |= VAR_3;
  FUNC_5(VAR_4);
  break;
 }

 return 0;
}
