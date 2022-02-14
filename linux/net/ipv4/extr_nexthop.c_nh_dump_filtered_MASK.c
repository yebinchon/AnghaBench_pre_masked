
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {struct net_device* nhc_dev; } ;
struct nh_info {scalar_t__ family; TYPE_1__ fib_nhc; } ;
struct nexthop {int nh_info; scalar_t__ is_group; } ;
struct net_device {int ifindex; } ;


 struct net_device* FUNC_0 (struct net_device*) ;
 struct nh_info* FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct nexthop *VAR_0, int VAR_1, int VAR_2,
        bool VAR_3, u8 VAR_4)
{
 const struct net_device *VAR_5;
 const struct nh_info *VAR_6;

 if (VAR_3 && !VAR_0->is_group)
  return 1;

 if (!VAR_1 && !VAR_2 && !VAR_4)
  return 0;

 if (VAR_0->is_group)
  return 1;

 VAR_6 = FUNC_1(VAR_0->nh_info);
 if (VAR_4 && VAR_6->family != VAR_4)
  return 1;

 VAR_5 = VAR_6->fib_nhc.nhc_dev;
 if (VAR_1 && (!VAR_5 || VAR_5->ifindex != VAR_1))
  return 1;

 if (VAR_2) {
  struct net_device *VAR_7;

  if (!VAR_5)
   return 1;

  VAR_7 = FUNC_0((struct net_device *)VAR_5);
  if (!VAR_7 || VAR_7->ifindex != VAR_2)
   return 1;
 }

 return 0;
}
