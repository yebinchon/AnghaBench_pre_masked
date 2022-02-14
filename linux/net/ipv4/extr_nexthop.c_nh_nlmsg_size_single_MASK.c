
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nhc_lwtstate; } ;
struct TYPE_6__ {int fib_nh_gw_family; } ;
struct TYPE_5__ {int fib_nh_gw_family; } ;
struct nh_info {int family; TYPE_1__ fib_nhc; TYPE_3__ fib6_nh; TYPE_2__ fib_nh; } ;
struct nexthop {int nh_info; } ;
struct in6_addr {int dummy; } ;




 scalar_t__ FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (int) ;
 struct nh_info* FUNC_2 (int ) ;

__attribute__((used)) static size_t FUNC_3(struct nexthop *VAR_0)
{
 struct nh_info *VAR_1 = FUNC_2(VAR_0->nh_info);
 size_t VAR_2;




 VAR_2 = FUNC_1(4);

 switch (VAR_1->family) {
 case 129:
  if (VAR_1->fib_nh.fib_nh_gw_family)
   VAR_2 += FUNC_1(4);
  break;

 case 128:

  if (VAR_1->fib6_nh.fib_nh_gw_family)
   VAR_2 += FUNC_1(sizeof(const struct in6_addr));
  break;
 }

 if (VAR_1->fib_nhc.nhc_lwtstate) {
  VAR_2 += FUNC_0(VAR_1->fib_nhc.nhc_lwtstate);
  VAR_2 += FUNC_1(2);
 }

 return VAR_2;
}
