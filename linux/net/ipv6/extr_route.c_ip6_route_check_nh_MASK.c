
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct inet6_dev {int dummy; } ;
struct in6_addr {int dummy; } ;
struct flowi6 {scalar_t__ flowi6_oif; struct in6_addr const daddr; } ;
struct fib6_result {int fib6_flags; TYPE_1__* nh; } ;
struct fib6_config {scalar_t__ fc_ifindex; int fc_table; struct in6_addr fc_gateway; } ;
struct TYPE_2__ {struct net_device* fib_nh_dev; scalar_t__ fib_nh_gw_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net*,scalar_t__,struct flowi6*,struct fib6_result*,int) ;
 int FUNC_2 (struct net*,struct fib6_result*,struct flowi6*,scalar_t__,int,int *,int) ;
 struct inet6_dev* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net*,struct fib6_config*,struct in6_addr const*,int ,int,struct fib6_result*) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_3,
         struct fib6_config *VAR_4,
         struct net_device **VAR_5,
         struct inet6_dev **VAR_6)
{
 const struct in6_addr *VAR_7 = &VAR_4->fc_gateway;
 struct net_device *VAR_8 = VAR_5 ? *VAR_5 : ((void*)0);
 int VAR_9 = VAR_1;
 struct fib6_result VAR_10 = {};
 int VAR_11 = -VAR_0;

 if (VAR_4->fc_table) {
  VAR_11 = FUNC_4(VAR_3, VAR_4, VAR_7,
       VAR_4->fc_table, VAR_9, &VAR_10);



  if (VAR_11 || VAR_10.fib6_flags & VAR_2 ||
      VAR_10.nh->fib_nh_gw_family ||
      (VAR_8 && VAR_8 != VAR_10.nh->fib_nh_dev))
   VAR_11 = -VAR_0;
 }

 if (VAR_11 < 0) {
  struct flowi6 VAR_12 = {
   .flowi6_oif = VAR_4->fc_ifindex,
   .daddr = *VAR_7,
  };

  VAR_11 = FUNC_1(VAR_3, VAR_4->fc_ifindex, &VAR_12, &VAR_10, VAR_9);
  if (VAR_11 || VAR_10.fib6_flags & VAR_2 ||
      VAR_10.nh->fib_nh_gw_family)
   VAR_11 = -VAR_0;

  if (VAR_11)
   return VAR_11;

  FUNC_2(VAR_3, &VAR_10, &VAR_12, VAR_4->fc_ifindex,
     VAR_4->fc_ifindex != 0, ((void*)0), VAR_9);
 }

 VAR_11 = 0;
 if (VAR_8) {
  if (VAR_8 != VAR_10.nh->fib_nh_dev)
   VAR_11 = -VAR_0;
 } else {
  *VAR_5 = VAR_8 = VAR_10.nh->fib_nh_dev;
  FUNC_0(VAR_8);
  *VAR_6 = FUNC_3(VAR_8);
 }

 return VAR_11;
}
