
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ip6_rt_gc_interval; } ;
struct TYPE_4__ {unsigned long ip6_rt_last_gc; int fib6_gc_lock; int ip6_fib_timer; TYPE_1__ sysctl; } ;
struct net {TYPE_2__ ipv6; } ;
struct fib6_gc_args {int timeout; scalar_t__ more; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct net*,int ,struct fib6_gc_args*) ;
 unsigned long VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(unsigned long VAR_3, struct net *VAR_4, bool VAR_5)
{
 struct fib6_gc_args VAR_6;
 unsigned long VAR_7;

 if (VAR_5) {
  FUNC_4(&VAR_4->ipv6.fib6_gc_lock);
 } else if (!FUNC_5(&VAR_4->ipv6.fib6_gc_lock)) {
  FUNC_2(&VAR_4->ipv6.ip6_fib_timer, VAR_2 + VAR_0);
  return;
 }
 VAR_6.timeout = VAR_3 ? (int)VAR_3 :
     VAR_4->ipv6.sysctl.ip6_rt_gc_interval;
 VAR_6.more = 0;

 FUNC_1(VAR_4, VAR_1, &VAR_6);
 VAR_7 = VAR_2;
 VAR_4->ipv6.ip6_rt_last_gc = VAR_7;

 if (VAR_6.more)
  FUNC_2(&VAR_4->ipv6.ip6_fib_timer,
     FUNC_3(VAR_7
     + VAR_4->ipv6.sysctl.ip6_rt_gc_interval));
 else
  FUNC_0(&VAR_4->ipv6.ip6_fib_timer);
 FUNC_6(&VAR_4->ipv6.fib6_gc_lock);
}
