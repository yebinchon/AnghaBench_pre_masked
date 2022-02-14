
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct fib6_info {TYPE_1__* fib6_nh; } ;
struct TYPE_2__ {int fib_nh_upper_bound; scalar_t__ fib_nh_weight; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct fib6_info*) ;

__attribute__((used)) static void FUNC_3(struct fib6_info *VAR_0, int *VAR_1, int VAR_2)
{
 int VAR_3 = -1;

 if (!FUNC_2(VAR_0)) {
  *VAR_1 += VAR_0->fib6_nh->fib_nh_weight;
  VAR_3 = FUNC_0((u64) (*VAR_1) << 31,
          VAR_2) - 1;
 }
 FUNC_1(&VAR_0->fib6_nh->fib_nh_upper_bound, VAR_3);
}
