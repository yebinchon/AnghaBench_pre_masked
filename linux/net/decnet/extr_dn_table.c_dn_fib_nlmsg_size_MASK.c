
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnexthop {int dummy; } ;
struct rtmsg {int dummy; } ;
struct dn_fib_info {int fib_nhs; } ;


 size_t FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_1 (size_t) ;

__attribute__((used)) static inline size_t FUNC_2(struct dn_fib_info *VAR_2)
{
 size_t VAR_3 = FUNC_0(sizeof(struct rtmsg))
    + FUNC_1(4)
    + FUNC_1(2)
    + FUNC_1(4)
    + FUNC_1(VAR_1);


 VAR_3 += FUNC_1((VAR_0 * FUNC_1(4)));

 if (VAR_2->fib_nhs) {



  size_t VAR_4 = FUNC_1(sizeof(struct rtnexthop));


  VAR_4 += FUNC_1(4);


  VAR_3 += FUNC_1(VAR_2->fib_nhs * VAR_4);
 }

 return VAR_3;
}
