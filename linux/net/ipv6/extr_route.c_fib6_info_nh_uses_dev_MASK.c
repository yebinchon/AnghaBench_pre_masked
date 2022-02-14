
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fib6_nh {struct net_device const* fib_nh_dev; } ;



__attribute__((used)) static int FUNC_0(struct fib6_nh *VAR_0, void *VAR_1)
{
 const struct net_device *VAR_2 = VAR_1;

 if (VAR_0->fib_nh_dev == VAR_2)
  return 1;

 return 0;
}
