
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
struct fib6_nh {int fib_nh_gw6; scalar_t__ fib_nh_gw_family; } ;
struct fib6_info {int fib6_flags; struct fib6_nh* fib6_nh; scalar_t__ nh; } ;


 int VAR_0 ;
 int FUNC_0 (struct fib6_nh*,struct in6_addr*) ;
 scalar_t__ FUNC_1 (struct in6_addr*,int *) ;

__attribute__((used)) static int FUNC_2(struct fib6_info *VAR_1, void *VAR_2)
{
 struct in6_addr *VAR_3 = (struct in6_addr *)VAR_2;
 struct fib6_nh *VAR_4;


 if (VAR_1->nh)
  return 0;

 VAR_4 = VAR_1->fib6_nh;
 if (((VAR_1->fib6_flags & VAR_0) == VAR_0) &&
     VAR_4->fib_nh_gw_family && FUNC_1(VAR_3, &VAR_4->fib_nh_gw6))
  return -1;





 FUNC_0(VAR_4, VAR_3);

 return 0;
}
