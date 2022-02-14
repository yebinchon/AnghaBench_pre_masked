
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnexthop {int dummy; } ;
struct fib6_nh {scalar_t__ fib_nh_lws; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct fib6_nh *VAR_0, void *VAR_1)
{
 int *VAR_2 = VAR_1;

 *VAR_2 += FUNC_2(0)
       + FUNC_0(sizeof(struct rtnexthop))
       + FUNC_2(16);

 if (VAR_0->fib_nh_lws) {

  *VAR_2 += FUNC_1(VAR_0->fib_nh_lws);

  *VAR_2 += FUNC_2(2);
 }

 return 0;
}
