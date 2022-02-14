
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void net_device ;
struct TYPE_5__ {struct fib6_info* fib6_null_entry; } ;
struct net {TYPE_2__ ipv6; } ;
struct in6_addr {int dummy; } ;
struct TYPE_6__ {scalar_t__ plen; int addr; } ;
struct fib6_info {TYPE_3__ fib6_prefsrc; TYPE_1__* fib6_nh; int nh; } ;
struct arg_dev_net_ip {struct in6_addr* addr; struct net* net; void* dev; } ;
struct TYPE_4__ {scalar_t__ fib_nh_dev; } ;


 scalar_t__ FUNC_0 (struct in6_addr*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct fib6_info *VAR_1, void *VAR_2)
{
 struct net_device *VAR_3 = ((struct arg_dev_net_ip *)VAR_2)->dev;
 struct net *VAR_4 = ((struct arg_dev_net_ip *)VAR_2)->net;
 struct in6_addr *VAR_5 = ((struct arg_dev_net_ip *)VAR_2)->addr;

 if (!VAR_1->nh &&
     ((void *)VAR_1->fib6_nh->fib_nh_dev == VAR_3 || !VAR_3) &&
     VAR_1 != VAR_4->ipv6.fib6_null_entry &&
     FUNC_0(VAR_5, &VAR_1->fib6_prefsrc.addr)) {
  FUNC_1(&VAR_0);

  VAR_1->fib6_prefsrc.plen = 0;
  FUNC_2(&VAR_0);
 }
 return 0;
}
