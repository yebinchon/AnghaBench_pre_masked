
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
typedef scalar_t__ ktime_t ;
struct TYPE_2__ {scalar_t__ stamp; int iif; int lock; struct in6_addr dst; struct in6_addr src; } ;


 int FUNC_0 (struct in6_addr*,struct in6_addr const*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(ktime_t VAR_1,
           const struct in6_addr *VAR_2,
           const struct in6_addr *VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 FUNC_1(&VAR_0.lock);
 if (VAR_0.stamp != VAR_1 ||
     VAR_0.iif != VAR_4 ||
     !FUNC_0(&VAR_0.src, VAR_3) ||
     !FUNC_0(&VAR_0.dst, VAR_2)) {
  VAR_0.stamp = VAR_1;
  VAR_0.iif = VAR_4;
  VAR_0.src = *VAR_3;
  VAR_0.dst = *VAR_2;
  VAR_5 = 1;
 }
 FUNC_2(&VAR_0.lock);
 return VAR_5;
}
