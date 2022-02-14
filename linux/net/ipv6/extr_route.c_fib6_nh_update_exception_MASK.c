
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int addr; } ;
struct in6_addr {int dummy; } ;
struct TYPE_3__ {struct in6_addr addr; } ;
struct rt6_info {TYPE_2__ rt6i_dst; TYPE_1__ rt6i_src; } ;
struct rt6_exception_bucket {int dummy; } ;
struct rt6_exception {int stamp; } ;
struct fib6_nh {int dummy; } ;


 struct rt6_exception* FUNC_0 (struct rt6_exception_bucket**,int *,struct in6_addr const*) ;
 struct rt6_exception_bucket* FUNC_1 (struct fib6_nh const*,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(const struct fib6_nh *VAR_1, int VAR_2,
         const struct rt6_info *VAR_3)
{
 const struct in6_addr *VAR_4 = ((void*)0);
 struct rt6_exception_bucket *VAR_5;
 struct rt6_exception *VAR_6;

 VAR_5 = FUNC_1(VAR_1, ((void*)0));
 VAR_6 = FUNC_0(&VAR_5, &VAR_3->rt6i_dst.addr, VAR_4);
 if (VAR_6)
  VAR_6->stamp = VAR_0;
}
