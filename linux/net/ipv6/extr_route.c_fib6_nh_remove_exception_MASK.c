
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
struct rt6_exception {int dummy; } ;
struct fib6_nh {int rt6i_exception_bucket; } ;


 int VAR_0 ;
 struct rt6_exception* FUNC_0 (struct rt6_exception_bucket**,int *,struct in6_addr const*) ;
 struct rt6_exception_bucket* FUNC_1 (struct fib6_nh const*,int *) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct rt6_exception_bucket*,struct rt6_exception*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(const struct fib6_nh *VAR_2, int VAR_3,
        const struct rt6_info *VAR_4)
{
 const struct in6_addr *VAR_5 = ((void*)0);
 struct rt6_exception_bucket *VAR_6;
 struct rt6_exception *VAR_7;
 int VAR_8;

 if (!FUNC_2(VAR_2->rt6i_exception_bucket))
  return -VAR_0;

 FUNC_4(&VAR_1);
 VAR_6 = FUNC_1(VAR_2, &VAR_1);
 VAR_7 = FUNC_0(&VAR_6,
            &VAR_4->rt6i_dst.addr,
            VAR_5);
 if (VAR_7) {
  FUNC_3(VAR_6, VAR_7);
  VAR_8 = 0;
 } else {
  VAR_8 = -VAR_0;
 }

 FUNC_5(&VAR_1);
 return VAR_8;
}
