
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ip6_rt_gc_interval; } ;
struct TYPE_4__ {TYPE_1__ sysctl; int ip6_fib_timer; } ;
struct net {TYPE_2__ ipv6; } ;
struct fib6_info {int fib6_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct net *VAR_2, struct fib6_info *VAR_3)
{
 if (!FUNC_1(&VAR_2->ipv6.ip6_fib_timer) &&
     (VAR_3->fib6_flags & VAR_0))
  FUNC_0(&VAR_2->ipv6.ip6_fib_timer,
     VAR_1 + VAR_2->ipv6.sysctl.ip6_rt_gc_interval);
}
