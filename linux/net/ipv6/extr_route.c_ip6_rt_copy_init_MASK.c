
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt6_info {int rt6i_src; int rt6i_flags; int rt6i_gateway; int * rt6i_idev; int rt6i_dst; } ;
struct net_device {int dummy; } ;
struct fib6_result {int fib6_flags; struct fib6_info* f6i; struct fib6_nh* nh; } ;
struct fib6_nh {int fib_nh_gw6; scalar_t__ fib_nh_gw_family; struct net_device* fib_nh_dev; } ;
struct fib6_info {int fib6_src; int fib6_dst; } ;


 int VAR_0 ;
 int * FUNC_0 (struct net_device const*) ;
 int FUNC_1 (struct rt6_info*,struct fib6_result const*) ;
 int FUNC_2 (struct rt6_info*,struct fib6_info*) ;

__attribute__((used)) static void FUNC_3(struct rt6_info *VAR_1, const struct fib6_result *VAR_2)
{
 const struct fib6_nh *VAR_3 = VAR_2->nh;
 const struct net_device *VAR_4 = VAR_3->fib_nh_dev;
 struct fib6_info *VAR_5 = VAR_2->f6i;

 FUNC_1(VAR_1, VAR_2);

 VAR_1->rt6i_dst = VAR_5->fib6_dst;
 VAR_1->rt6i_idev = VAR_4 ? FUNC_0(VAR_4) : ((void*)0);
 VAR_1->rt6i_flags = VAR_2->fib6_flags;
 if (VAR_3->fib_nh_gw_family) {
  VAR_1->rt6i_gateway = VAR_3->fib_nh_gw6;
  VAR_1->rt6i_flags |= VAR_0;
 }
 FUNC_2(VAR_1, VAR_5);



}
