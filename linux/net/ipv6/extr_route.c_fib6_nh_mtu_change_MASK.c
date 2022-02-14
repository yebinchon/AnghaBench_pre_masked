
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rt6_mtu_change_arg {scalar_t__ dev; scalar_t__ mtu; struct fib6_info* f6i; } ;
struct TYPE_2__ {scalar_t__ mtu6; } ;
struct inet6_dev {TYPE_1__ cnf; } ;
struct fib6_nh {scalar_t__ fib_nh_dev; } ;
struct fib6_info {scalar_t__ fib6_pmtu; } ;


 int VAR_0 ;
 struct inet6_dev* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct fib6_info*,int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (struct inet6_dev*,struct fib6_nh*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct fib6_nh *VAR_2, void *VAR_3)
{
 struct rt6_mtu_change_arg *VAR_4 = (struct rt6_mtu_change_arg *)VAR_3;
 struct fib6_info *VAR_5 = VAR_4->f6i;






 if (VAR_2->fib_nh_dev == VAR_4->dev) {
  struct inet6_dev *VAR_6 = FUNC_0(VAR_4->dev);
  u32 VAR_7 = VAR_5->fib6_pmtu;

  if (VAR_7 >= VAR_4->mtu ||
      (VAR_7 < VAR_4->mtu && VAR_7 == VAR_6->cnf.mtu6))
   FUNC_1(VAR_5, VAR_0, VAR_4->mtu);

  FUNC_3(&VAR_1);
  FUNC_2(VAR_6, VAR_2, VAR_4->mtu);
  FUNC_4(&VAR_1);
 }

 return 0;
}
