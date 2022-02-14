
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ ifindex; } ;
struct fib_nh_common {struct net_device const* nhc_dev; } ;
struct fib_info {int dummy; } ;


 struct fib_nh_common* FUNC_0 (struct fib_info*,int) ;
 int FUNC_1 (struct fib_info*) ;
 scalar_t__ FUNC_2 (struct net_device const*) ;

bool FUNC_3(struct fib_info *VAR_0, const struct net_device *VAR_1)
{
 bool VAR_2 = 0;
 if (FUNC_0(VAR_0, 0)->nhc_dev == VAR_1)
  VAR_2 = 1;


 return VAR_2;
}
