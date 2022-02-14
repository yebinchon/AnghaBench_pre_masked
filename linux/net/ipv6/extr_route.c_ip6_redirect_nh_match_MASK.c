
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt6_info {int rt6i_gateway; } ;
struct in6_addr {int dummy; } ;
struct flowi6 {scalar_t__ flowi6_oif; int saddr; int daddr; } ;
struct fib6_result {struct fib6_nh* nh; } ;
struct fib6_nh {int fib_nh_flags; int fib_nh_gw6; TYPE_1__* fib_nh_dev; int fib_nh_gw_family; } ;
struct TYPE_2__ {scalar_t__ ifindex; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct in6_addr const*,int *) ;
 struct rt6_info* FUNC_1 (struct fib6_result const*,int *,int *) ;

__attribute__((used)) static bool FUNC_2(const struct fib6_result *VAR_1,
      struct flowi6 *VAR_2,
      const struct in6_addr *VAR_3,
      struct rt6_info **VAR_4)
{
 const struct fib6_nh *VAR_5 = VAR_1->nh;

 if (VAR_5->fib_nh_flags & VAR_0 || !VAR_5->fib_nh_gw_family ||
     VAR_2->flowi6_oif != VAR_5->fib_nh_dev->ifindex)
  return 0;






 if (!FUNC_0(VAR_3, &VAR_5->fib_nh_gw6)) {
  struct rt6_info *VAR_6;

  VAR_6 = FUNC_1(VAR_1, &VAR_2->daddr, &VAR_2->saddr);
  if (VAR_6 &&
      FUNC_0(VAR_3, &VAR_6->rt6i_gateway)) {
   *VAR_4 = VAR_6;
   return 1;
  }
  return 0;
 }
 return 1;
}
