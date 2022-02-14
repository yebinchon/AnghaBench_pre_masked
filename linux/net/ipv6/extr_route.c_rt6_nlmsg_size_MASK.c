
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnexthop {int dummy; } ;
struct rtmsg {int dummy; } ;
struct rta_cacheinfo {int dummy; } ;
struct fib6_nh {int fib_nh_lws; } ;
struct fib6_info {int fib6_nsiblings; struct fib6_nh* fib6_nh; scalar_t__ nh; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ,int*) ;
 int FUNC_4 (int) ;
 int VAR_2 ;

__attribute__((used)) static size_t FUNC_5(struct fib6_info *VAR_3)
{
 int VAR_4;

 if (VAR_3->nh) {
  VAR_4 = FUNC_4(4);
  FUNC_3(VAR_3->nh, VAR_2,
      &VAR_4);
 } else {
  struct fib6_nh *VAR_5 = VAR_3->fib6_nh;

  VAR_4 = 0;
  if (VAR_3->fib6_nsiblings) {
   VAR_4 = FUNC_4(0)
        + FUNC_0(sizeof(struct rtnexthop))
        + FUNC_4(16)
        + FUNC_2(VAR_5->fib_nh_lws);

   VAR_4 *= VAR_3->fib6_nsiblings;
  }
  VAR_4 += FUNC_2(VAR_5->fib_nh_lws);
 }

 return FUNC_1(sizeof(struct rtmsg))
        + FUNC_4(16)
        + FUNC_4(16)
        + FUNC_4(16)
        + FUNC_4(16)
        + FUNC_4(4)
        + FUNC_4(4)
        + FUNC_4(4)
        + FUNC_4(4)
        + VAR_0 * FUNC_4(4)
        + FUNC_4(sizeof(struct rta_cacheinfo))
        + FUNC_4(VAR_1)
        + FUNC_4(1)
        + VAR_4;
}
