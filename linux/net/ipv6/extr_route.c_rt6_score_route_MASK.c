
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fib6_nh {scalar_t__ fib_nh_gw_family; TYPE_1__* fib_nh_dev; } ;
struct TYPE_2__ {int ifindex; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct fib6_nh const*) ;

__attribute__((used)) static int FUNC_3(const struct fib6_nh *VAR_4, u32 VAR_5, int VAR_6,
      int VAR_7)
{
 int VAR_8 = 0;

 if (!VAR_6 || VAR_4->fib_nh_dev->ifindex == VAR_6)
  VAR_8 = 2;

 if (!VAR_8 && (VAR_7 & VAR_0))
  return VAR_2;



 if ((VAR_7 & VAR_1) &&
     !(VAR_5 & VAR_3) && VAR_4->fib_nh_gw_family) {
  int VAR_9 = FUNC_2(VAR_4);
  if (VAR_9 < 0)
   return VAR_9;
 }
 return VAR_8;
}
