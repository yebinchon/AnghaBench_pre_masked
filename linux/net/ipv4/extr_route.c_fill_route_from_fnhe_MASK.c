
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int expires; } ;
struct rtable {int rt_uses_gateway; scalar_t__ rt_gw4; int rt_gw_family; int rt_flags; TYPE_1__ dst; int rt_mtu_locked; int rt_pmtu; } ;
struct fib_nh_exception {scalar_t__ fnhe_gw; int fnhe_expires; int fnhe_mtu_locked; int fnhe_pmtu; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct rtable *VAR_2, struct fib_nh_exception *VAR_3)
{
 VAR_2->rt_pmtu = VAR_3->fnhe_pmtu;
 VAR_2->rt_mtu_locked = VAR_3->fnhe_mtu_locked;
 VAR_2->dst.expires = VAR_3->fnhe_expires;

 if (VAR_3->fnhe_gw) {
  VAR_2->rt_flags |= VAR_1;
  VAR_2->rt_uses_gateway = 1;
  VAR_2->rt_gw_family = VAR_0;
  VAR_2->rt_gw4 = VAR_3->fnhe_gw;
 }
}
