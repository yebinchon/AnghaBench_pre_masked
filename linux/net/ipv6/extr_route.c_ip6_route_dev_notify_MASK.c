
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net_device {int flags; scalar_t__ reg_state; } ;
struct TYPE_18__ {TYPE_8__* ip6_blk_hole_entry; TYPE_7__* ip6_prohibit_entry; TYPE_6__* ip6_null_entry; TYPE_2__* fib6_null_entry; } ;
struct net {TYPE_9__ ipv6; } ;
struct TYPE_14__ {struct net_device* dev; } ;
struct TYPE_17__ {void* rt6i_idev; TYPE_5__ dst; } ;
struct TYPE_13__ {struct net_device* dev; } ;
struct TYPE_16__ {void* rt6i_idev; TYPE_4__ dst; } ;
struct TYPE_12__ {struct net_device* dev; } ;
struct TYPE_15__ {void* rt6i_idev; TYPE_3__ dst; } ;
struct TYPE_11__ {TYPE_1__* fib6_nh; } ;
struct TYPE_10__ {struct net_device* fib_nh_dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct net* FUNC_0 (struct net_device*) ;
 void* FUNC_1 (struct net_device*) ;
 int FUNC_2 (void**) ;
 struct net_device* FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_5,
    unsigned long VAR_6, void *VAR_7)
{
 struct net_device *VAR_8 = FUNC_3(VAR_7);
 struct net *VAR_9 = FUNC_0(VAR_8);

 if (!(VAR_8->flags & VAR_0))
  return VAR_4;

 if (VAR_6 == VAR_1) {
  VAR_9->ipv6.fib6_null_entry->fib6_nh->fib_nh_dev = VAR_8;
  VAR_9->ipv6.ip6_null_entry->dst.dev = VAR_8;
  VAR_9->ipv6.ip6_null_entry->rt6i_idev = FUNC_1(VAR_8);






  } else if (VAR_6 == VAR_2 &&
      VAR_8->reg_state != VAR_3) {



  FUNC_2(&VAR_9->ipv6.ip6_null_entry->rt6i_idev);




 }

 return VAR_4;
}
