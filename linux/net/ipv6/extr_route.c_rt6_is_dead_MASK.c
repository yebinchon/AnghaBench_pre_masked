
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fib6_info {TYPE_1__* fib6_nh; } ;
struct TYPE_2__ {int fib_nh_flags; int fib_nh_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(const struct fib6_info *VAR_2)
{
 if (VAR_2->fib6_nh->fib_nh_flags & VAR_0 ||
     (VAR_2->fib6_nh->fib_nh_flags & VAR_1 &&
      FUNC_0(VAR_2->fib6_nh->fib_nh_dev)))
  return 1;

 return 0;
}
